# Hardware Plan

## Version 0.1 — Arduino Uno bench build

Purpose: learn the basics and create a working proof of concept.

### Required parts

| Part | Qty | Notes |
|---|---:|---|
| Arduino Uno R3 | 1 | Already owned |
| Breadboard | 1 | Full or half size |
| Jumper wires | 1 set | Male-to-male |
| Momentary push button | 1 | Morse key |
| LED | 1 | Signal LED |
| 220Ω resistor | 1 | LED current limit |
| Passive piezo buzzer | 1 | Morse tone |

### Optional v0.2 parts

| Part | Qty | Notes |
|---|---:|---|
| Extra tactile buttons | 3 | Mode, Mute, Rec/Play |
| OLED SSD1306 | 1 | Optional display |
| 74HC595 shift register | 1-4 | LED expansion practice |
| Extra LEDs/resistors | many | Letter chart experiments |

## Version 1.0 — PCBWay revised build

Purpose: convert the bench prototype into a custom PCB.

### Expected hardware

- Custom telegraph/telegram-shaped PCB
- A-Z Morse LED chart
- 4x 74HC595 shift registers or dedicated LED driver
- Big key button
- Mode / Mute / Rec-Play buttons
- Signal LED
- Piezo buzzer
- CR2032 or USB/debug power
- Optional 3D printed backer/stand

## Version 2.0 — Smart decoder

Purpose: decode real-world Morse signals.

### Candidate hardware

- Arduino Nano ESP32
- Raspberry Pi Pico / Pico W
- ESP32 dev board
- Arduino Uno R4
- Microphone module or MEMS mic
- Optional photodiode/light sensor
- OLED or scrolling display

## Hardware philosophy

Start simple. Make it work. Then revise.

This project should show the actual learning path instead of pretending the polished PCB appeared first.
