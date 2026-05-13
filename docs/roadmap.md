# Roadmap

Signal No. 1844 is planned as a three-video hardware learning series.

## Video 1 — DIY Arduino bench build

**Goal:** Build the first working Morse trainer from basic electronics parts.

### Version 0.1

- [ ] Arduino Uno R3
- [ ] Breadboard
- [ ] Main Morse key button
- [ ] Signal LED
- [ ] Piezo buzzer
- [ ] Serial Monitor output
- [ ] Dot/dash timing using `millis()`
- [ ] Decode basic Morse characters
- [ ] Recognize `SOS`
- [ ] Flash/beep `SOS` back

### Version 0.2

- [ ] Add Mode button
- [ ] Add Mute button
- [ ] Add Rec/Play button
- [ ] Add message buffer
- [ ] Add more Easter egg triggers
- [ ] Add optional OLED or LED bar
- [ ] Add basic record/playback

## Video 2 — PCBWay revised build

**Goal:** Turn the messy breadboard into a custom-shaped PCB.

- [ ] Create schematic from working prototype
- [ ] Choose LED driver method
- [ ] Design telegraph/telegram-shaped PCB outline
- [ ] Add A-Z LED Morse chart
- [ ] Add big key button
- [ ] Add mode/mute/rec-play buttons
- [ ] Add signal LED and buzzer
- [ ] Add secret URL silkscreen
- [ ] Export Gerbers
- [ ] Order from PCBWay
- [ ] Solder and test
- [ ] Design optional 3D printed backer/stand

## Video 3 — Smart decoder

**Goal:** Upgrade the device so it can listen to external Morse signals.

- [ ] Choose stronger microcontroller
- [ ] Add microphone or MEMS mic
- [ ] Add optional photodiode/light sensor
- [ ] Add OLED or scrolling display
- [ ] Detect tone/no-tone input
- [ ] Add threshold calibration
- [ ] Decode real beeps/flashes
- [ ] Show received text on screen

## Guiding principle

Each version should teach a different skill:

1. Wiring and code fundamentals
2. PCB design and soldering
3. Signal processing and smarter firmware
