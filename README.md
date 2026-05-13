# Signal No. 1844

**Signal No. 1844** is a C4 Signal Lab hardware learning project: a Morse/telegraph trainer that starts as a true DIY Arduino bench build, evolves into a custom PCBWay board, and eventually becomes a smarter decoder that can listen to real Morse beeps or flashes.

This project is intentionally structured as a learning ladder and video series.

```text
Video 1: DIY Arduino / Micro Center-style bench build
Video 2: PCBWay revised custom telegraph PCB
Video 3: Smart decoder with mic/light detection and display
```

## Core idea

Click Morse into a big telegraph-style key button. The device beeps/flashes while you tap, decodes the character, lights the matching letter, and can flash/beep secret responses back.

```text
Click code in → board decodes → board flashes back
```

## Branding

- Umbrella: **C4 Signal Lab**
- Project: **Signal No. 1844**
- Subtitle: **Pocket Telegraph Trainer**
- Note: keep SnackSquatch separate from this project.

## Why 1844?

The name references the famous first telegraph message, “What hath God wrought,” sent in 1844. That phrase becomes one of the hidden Easter egg responses.

## Project roadmap

### Version 0.1 — Arduino bench build

Beginner-friendly prototype using parts you could pick up from a Micro Center-style electronics section or Arduino starter kit.

- Arduino Uno R3
- Breadboard
- Morse key button
- Signal LED
- Piezo buzzer
- Serial Monitor output
- Basic dot/dash timing
- SOS Easter egg flashback

### Version 0.2 — Better DIY build

Adds controls and more toy-like behavior.

- Mode button
- Mute button
- Rec/Play button
- Record/playback logic
- More Easter eggs
- Optional OLED or LED bar

### Version 1.0 — PCBWay revised build

Turns the messy breadboard into a custom-shaped PCB.

- Telegraph/telegram-shaped PCB
- A-Z Morse LED chart
- Big key button
- Mode / Mute / Rec-Play buttons
- Buzzer
- Signal LED
- Secret URL silkscreen
- PCBWay order/unboxing
- Optional 3D printed backer or stand

### Version 2.0 — Smart decoder

A stronger version that can listen to real external Morse signals.

- Stronger microcontroller
- Microphone or MEMS mic
- Optional photodiode/light sensor
- OLED or scrolling screen
- Tone/no-tone detection
- Calibration mode
- Decode real beeps or flashes

## Repository layout

```text
firmware/
  arduino_uno_v0_1/
    signal_no_1844_uno_v0_1.ino

docs/
  roadmap.md
  learning-goals.md
  hardware-plan.md
  wiring-arduino-uno.md
  firmware-plan.md
  easter-eggs.md
  pcb-design.md
  video-plan.md

hardware/
  parts-list.md
  breadboard-notes.md

pcb/
  README.md

enclosure/
  README.md

content/
  video-1-arduino-diy.md
  video-2-pcbway-revised.md
  video-3-smart-decoder.md
```

## First milestone

Build the minimum bench version:

1. Wire one button, one LED, and one piezo buzzer to an Arduino Uno R3.
2. Use `millis()` to detect dots and dashes.
3. Decode basic Morse characters in Serial Monitor.
4. Enter `SOS` and have the board flash/beep `SOS` back.

## Status

Project scaffold created. Hardware and firmware are experimental until tested on the bench.
