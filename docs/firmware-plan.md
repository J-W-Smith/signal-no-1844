# Firmware Plan

## Version 0.1 goal

The first firmware should make the minimum bench circuit useful:

- Press key → LED on and buzzer tone
- Release key → measure press duration
- Short press → dot
- Long press → dash
- Pause → decode character
- Serial Monitor shows pattern and decoded character
- Message buffer checks for secret triggers
- `SOS` trigger flashes/beeps a response back

## Timing defaults

| Item | Value |
|---|---:|
| Dot threshold | 250 ms |
| Character gap | 700 ms |
| Word gap | 1500 ms |
| Tone frequency | 700 Hz |
| Dot unit for playback | 150 ms |

## Core state variables

```cpp
String currentPattern = "";
String messageBuffer = "";
bool keyWasPressed = false;
bool muted = false;
unsigned long pressStart = 0;
unsigned long lastRelease = 0;
```

## Core functions

```cpp
void handleKey();
void decodeIfGapElapsed();
char decodeMorse(String pattern);
void checkSecretTriggers();
void flashMessage(String message);
void playMorsePattern(String pattern);
```

## Morse parser approach

1. Watch for key state changes.
2. On press, store `pressStart` and turn on LED/buzzer.
3. On release, calculate duration and append `.` or `-`.
4. If idle time exceeds character gap, decode the pattern.
5. Add decoded character to message buffer.
6. Check whether the buffer ends with a secret trigger.

## Future firmware expansions

- Multiple modes
- Mute button
- Record/playback
- A-Z LED chart output
- OLED display
- External signal decoding
- Calibration screen
