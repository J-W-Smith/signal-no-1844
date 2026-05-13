# PCB

This folder will hold PCB design files for the revised Signal No. 1844 board.

## Planned PCB contents

```text
pcb/
├── README.md
├── kicad/
│   └── signal-no-1844/
├── gerbers/
├── bom/
└── fab-notes/
```

## PCB concept

- Custom telegraph/telegram-shaped board
- A-Z Morse LED chart
- Big key button
- Signal LED
- Buzzer
- Mode / Mute / Rec-Play buttons
- Back-side electronics
- Secret URL clue on silkscreen

## First PCB strategy

Start with a board that is easy to debug and hand solder.

Recommended first approach:

- 2-layer PCB
- Through-hole LEDs/buttons where practical
- 4x 74HC595 shift registers for A-Z LEDs
- Clearly labeled test pads
- Large labels and polarity marks
- No overly tiny parts in v1

## Future improvements

- Charlieplexed LED chart
- Lower-power design
- Coin-cell optimization
- Rechargeable LiPo version
- Integrated smart decoder hardware
