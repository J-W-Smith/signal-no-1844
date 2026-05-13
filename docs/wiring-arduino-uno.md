# Arduino Uno Wiring

This is the first bench circuit for Signal No. 1844.

## Minimum circuit

Start with one button, one LED, and one buzzer.

```text
KEY button:
One side -> Arduino D2
Other side -> GND

Signal LED:
Arduino D9 -> 220Ω resistor -> LED anode
LED cathode -> GND

Piezo buzzer:
Arduino D10 -> buzzer +
Buzzer - -> GND
```

Use the Arduino internal pullup for the button:

```cpp
pinMode(KEY_PIN, INPUT_PULLUP);
```

That means:

```text
Not pressed = HIGH
Pressed     = LOW
```

## Expanded controls

Later, add three more buttons:

```text
D2  = KEY
D3  = MODE
D4  = MUTE
D5  = REC/PLAY
D9  = Signal LED
D10 = Buzzer
```

Each button wires the same way:

```text
Arduino pin -> button -> GND
```

## Notes

- LEDs need a current-limiting resistor.
- Start with 220Ω for a standard LED.
- A passive piezo buzzer is best for generated tones.
- Use `millis()` for timing. Avoid `delay()` for input handling.
- This v0.1 circuit is intentionally simple so it can be understood, filmed, and debugged easily.
