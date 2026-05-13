# Video 3 — Smart Decoder Build

## Working title

**I Upgraded My Morse Trainer So It Can Hear Beeps**

## Core promise

Upgrade the Morse trainer so it can detect real audio beeps or light flashes and decode them.

## Build scope

- Stronger microcontroller
- Microphone module or MEMS mic
- Optional photodiode/light sensor
- OLED or scrolling display
- Tone/no-tone detection
- Signal threshold calibration
- Real external Morse decoding

## Candidate boards

| Board | Why |
|---|---|
| Arduino Nano ESP32 | Arduino-friendly and stronger than Uno |
| Raspberry Pi Pico / Pico W | Cheap, lots of I/O, good timing |
| ESP32 dev board | Powerful and common |
| Arduino Uno R4 | Familiar Arduino path with more power |

## Video structure

1. Show the first version sending Morse.
2. Explain the new goal: listening to Morse.
3. Add microphone or light sensor.
4. Read raw input values.
5. Convert noisy input into clean on/off pulses.
6. Decode pulses into dots and dashes.
7. Show decoded text on display.
8. Compare manual input vs detected input.

## Tease line

> The first version could send Morse. This one can listen.
