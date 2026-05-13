# PCB Design

## Design goal

The PCB should be visually interesting enough for YouTube/TikTok and practical enough to build.

Do not make the first custom PCB a boring rectangle unless there is a good reason.

## Recommended shape

Telegram tag plus telegraph key hybrid.

```text
   ______________________________________
  /                                      |
 /  SIGNAL No. 1844                     |
|   Pocket Telegraph Trainer             |
|                                        |
|  A .-    B -...   C -.-.   D -..       |
|  *       *        *        *           |
|                                        |
|  [MODE]    [MUTE]    [REC/PLAY]        |
|                                        |
|  c4consultant.com/morse/____           |
|                                        |
|__________________________              |
                           \\             |
                            \\ [ KEY ]    |
                             \\___________|
```

## Front side elements

- `SIGNAL No. 1844`
- `Pocket Telegraph Trainer`
- A-Z Morse chart
- LED near each letter
- Large signal LED
- Big key button
- Mode button
- Mute button
- Rec/Play button
- Secret URL blank

## Back side elements

- Microcontroller
- Shift registers or LED driver
- CR2032 holder or power input
- Buzzer
- Programming/debug pads
- Version number
- Back-side notes and labels

## LED control options

### Option A — 4x 74HC595 shift registers

Recommended for v1.

Pros:

- Easy to understand
- Easier to explain on camera
- Common part
- Good learning value

Cons:

- More chips
- More resistors
- More routing

### Option B — Charlieplexing

Good future optimization.

Pros:

- Fewer parts
- Efficient pin usage
- Elegant design

Cons:

- Harder code
- Harder routing
- More annoying to debug

### Option C — LED driver chip

Good polished version.

Pros:

- Clean
- Designed for LED control
- Better animation potential

Cons:

- More specialized part
- More datasheet work

## PCBWay notes

Start with a 2-layer board.

Suggested settings:

| Setting | Value |
|---|---|
| Layers | 2 |
| Quantity | 5 or 10 |
| Thickness | 1.6 mm |
| Copper | 1 oz |
| Solder mask | Black, purple, or blue |
| Silkscreen | White |
| Surface finish | HASL for budget, ENIG for premium |
| Assembly | No for v1, hand solder first |
