/*
  Signal No. 1844 - Arduino Uno v0.1

  Minimum Morse trainer prototype:
  - KEY button on D2 to GND using INPUT_PULLUP
  - Signal LED on D9 through 220 ohm resistor to GND
  - Passive piezo buzzer on D10 to GND
  - Serial Monitor shows dot/dash patterns and decoded letters
  - Enter SOS to trigger flashback

  Wiring:
    D2  -> button -> GND
    D9  -> 220R -> LED anode, LED cathode -> GND
    D10 -> piezo +, piezo - -> GND
*/

const byte KEY_PIN = 2;
const byte LED_PIN = 9;
const byte BUZZER_PIN = 10;

const unsigned int TONE_HZ = 700;
const unsigned long DOT_THRESHOLD_MS = 250;
const unsigned long CHARACTER_GAP_MS = 700;
const unsigned long WORD_GAP_MS = 1500;
const unsigned int PLAYBACK_UNIT_MS = 150;

bool keyWasPressed = false;
bool muted = false;
unsigned long pressStartMs = 0;
unsigned long lastReleaseMs = 0;

String currentPattern = "";
String messageBuffer = "";

struct MorseEntry {
  const char* pattern;
  char value;
};

MorseEntry MORSE_TABLE[] = {
  {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'},
  {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'}, {"..", 'I'}, {".---", 'J'},
  {"-.-", 'K'}, {".-..", 'L'}, {"--", 'M'}, {"-.", 'N'}, {"---", 'O'},
  {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'}, {"...", 'S'}, {"-", 'T'},
  {"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'}, {"-.--", 'Y'},
  {"--..", 'Z'},
  {".----", '1'}, {"..---", '2'}, {"...--", '3'}, {"....-", '4'}, {".....", '5'},
  {"-....", '6'}, {"--...", '7'}, {"---..", '8'}, {"----.", '9'}, {"-----", '0'}
};

const int MORSE_TABLE_SIZE = sizeof(MORSE_TABLE) / sizeof(MORSE_TABLE[0]);

void setup() {
  pinMode(KEY_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.begin(9600);
  Serial.println(F("Signal No. 1844 - Arduino Uno v0.1"));
  Serial.println(F("Tap Morse on D2. Try SOS: ... --- ..."));
}

void loop() {
  handleKey();
  decodeIfGapElapsed();
}

void handleKey() {
  bool keyPressed = digitalRead(KEY_PIN) == LOW;
  unsigned long now = millis();

  if (keyPressed && !keyWasPressed) {
    pressStartMs = now;
    digitalWrite(LED_PIN, HIGH);
    if (!muted) {
      tone(BUZZER_PIN, TONE_HZ);
    }
    keyWasPressed = true;
  }

  if (!keyPressed && keyWasPressed) {
    unsigned long duration = now - pressStartMs;
    lastReleaseMs = now;

    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);

    if (duration < DOT_THRESHOLD_MS) {
      currentPattern += ".";
      Serial.print('.');
    } else {
      currentPattern += "-";
      Serial.print('-');
    }

    keyWasPressed = false;
  }
}

void decodeIfGapElapsed() {
  if (currentPattern.length() == 0) {
    return;
  }

  if (keyWasPressed) {
    return;
  }

  unsigned long now = millis();
  if (now - lastReleaseMs >= CHARACTER_GAP_MS) {
    char decoded = decodeMorse(currentPattern);

    Serial.print(F("  ->  "));
    Serial.println(decoded);

    if (decoded != '?') {
      messageBuffer += decoded;
      trimMessageBuffer();
      checkSecretTriggers();
    }

    currentPattern = "";
  }
}

char decodeMorse(String pattern) {
  for (int i = 0; i < MORSE_TABLE_SIZE; i++) {
    if (pattern == MORSE_TABLE[i].pattern) {
      return MORSE_TABLE[i].value;
    }
  }
  return '?';
}

void trimMessageBuffer() {
  const int MAX_BUFFER = 32;
  if (messageBuffer.length() > MAX_BUFFER) {
    messageBuffer = messageBuffer.substring(messageBuffer.length() - MAX_BUFFER);
  }

  Serial.print(F("Buffer: "));
  Serial.println(messageBuffer);
}

void checkSecretTriggers() {
  if (endsWith(messageBuffer, "SOS")) {
    Serial.println(F("Secret trigger: SOS"));
    flashMessage("SOS");
  }

  if (endsWith(messageBuffer, "CQ")) {
    Serial.println(F("Secret trigger: CQ"));
    flashMessage("CQCQC4");
  }

  if (endsWith(messageBuffer, "73")) {
    Serial.println(F("Secret trigger: 73"));
    flashMessage("73");
  }

  if (endsWith(messageBuffer, "RICK")) {
    Serial.println(F("Secret trigger: RICK -> ROLL"));
    flashMessage("ROLL");
  }
}

bool endsWith(String text, const char* suffix) {
  String s = String(suffix);
  if (text.length() < s.length()) {
    return false;
  }
  return text.substring(text.length() - s.length()) == s;
}

void flashMessage(String message) {
  delay(500);

  for (int i = 0; i < message.length(); i++) {
    char c = message.charAt(i);

    if (c == ' ') {
      delay(PLAYBACK_UNIT_MS * 7);
      continue;
    }

    const char* pattern = encodeMorse(c);
    if (pattern != nullptr) {
      playMorsePattern(pattern);
      delay(PLAYBACK_UNIT_MS * 3);
    }
  }

  delay(500);
}

const char* encodeMorse(char c) {
  c = toupper(c);
  for (int i = 0; i < MORSE_TABLE_SIZE; i++) {
    if (MORSE_TABLE[i].value == c) {
      return MORSE_TABLE[i].pattern;
    }
  }
  return nullptr;
}

void playMorsePattern(const char* pattern) {
  for (int i = 0; pattern[i] != '\0'; i++) {
    if (pattern[i] == '.') {
      pulseOutput(PLAYBACK_UNIT_MS);
    } else if (pattern[i] == '-') {
      pulseOutput(PLAYBACK_UNIT_MS * 3);
    }
    delay(PLAYBACK_UNIT_MS);
  }
}

void pulseOutput(unsigned int durationMs) {
  digitalWrite(LED_PIN, HIGH);
  if (!muted) {
    tone(BUZZER_PIN, TONE_HZ);
  }

  delay(durationMs);

  digitalWrite(LED_PIN, LOW);
  noTone(BUZZER_PIN);
}
