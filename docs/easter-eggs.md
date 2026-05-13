# Easter Eggs

Signal No. 1844 should feel like a toy as much as a trainer. Secret Morse triggers make it more fun on camera.

## Core secret codes

| User enters | Trigger meaning | Board responds |
|---|---|---|
| `SOS` | Distress | Flashes SOS dramatically |
| `CQ` | General call | Sends `CQ CQ C4` |
| `73` | Best regards/signoff | Soft signoff animation |
| `1844` | Telegraph history | Sends `WHAT HATH GOD WROUGHT` |
| `VAIL` | Alfred Vail reference | Sends `MORSE` |
| `MORSE` | Samuel Morse reference | Sends `VAIL` |
| `RICK` | Rickroll gag | Reveals `ROLL` |
| `C4` | Maker signature | Sends `SIGNAL LAB` |
| `HELP` | Manual hint | Sends URL path `/HELP` |

## Rickroll trigger

Input:

```text
.-. .. -.-. -.-
RICK
```

Response:

```text
.-. --- .-.. .-..
ROLL
```

The board does not need to play music. It can simply reveal `/roll` as the secret URL path.

## Secret URL mechanic

The PCB can include:

```text
c4consultant.com/morse/____
```

The board reveals the missing path through Morse flashback.

| Trigger | Revealed path |
|---|---|
| `RICK` | `/roll` |
| `SOS` | `/help` |
| `CQ` | `/cq` |
| `1844` | `/vail` |
| `73` | `/goodbye` |
| `C4` | `/lab` |

## Best video moment

1. Enter `RICK` in Morse.
2. Board flashes back `ROLL`.
3. Camera zooms to PCB text: `c4consultant.com/morse/____`.
4. Cut to the secret page.
5. Classic internet prank reveal.
