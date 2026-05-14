# Parts and Links

This page lays out practical purchase/search links for the Signal No. 1844 build series.

Replace any placeholder with affiliate, sponsor, or creator links before publishing.

## Disclosure template

Use this in video descriptions when links are affiliate/sponsor links:

```text
Some links may be affiliate, referral, or sponsor links. If you use them, they may support the project at no extra cost to you.
```

## Version 0.1 — Arduino Uno bench build

Minimum working build: one key button, one LED, one resistor, one buzzer.

| Item | Needed? | Notes | Link |
|---|---:|---|---|
| Arduino Uno R3 | Required | Already owned; official board reference | https://store-usa.arduino.cc/products/arduino-uno-rev3 |
| Arduino Uno R3 docs | Helpful | Pinout/spec reference | https://docs.arduino.cc/hardware/uno-rev3/ |
| Breadboard | Required | Full or half-size solderless breadboard | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=breadboard) |
| Jumper wires | Required | Male-to-male Dupont wires | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=jumper%20wires) |
| Momentary push buttons | Required | One for KEY; more later for Mode/Mute/Rec-Play | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=push%20button%20electronics) |
| LEDs | Required | Signal LED; extras for testing | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=led%20electronics) |
| 220 ohm resistors | Required | Current limiting for LEDs | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=resistor%20kit) |
| Passive piezo buzzer | Required | Buzzer for Morse tone output | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=piezo%20buzzer) |
| USB cable for Arduino | Required | Usually USB-A to USB-B for classic Uno R3 | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=usb%20b%20cable) |

## Version 0.2 — Better DIY build

Adds more controls and display/LED expansion experiments.

| Item | Needed? | Notes | Link |
|---|---:|---|---|
| Extra tactile buttons | Optional | Mode, Mute, Rec/Play | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=tactile%20switch) |
| OLED SSD1306 display | Optional | Useful for displaying decoded text | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=oled%20display%20arduino) |
| 74HC595 shift registers | Optional | Good learning part for driving many LEDs | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=74HC595) |
| Extra LEDs/resistors | Optional | For testing a small letter LED chart | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=led%20resistor%20kit) |
| Perfboard | Optional | Semi-permanent version after breadboard | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=perfboard) |
| Copper tape | Optional | For homemade copper-trace board experiment | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=copper%20tape) |

## Version 1.0 — Custom PCB build

Custom telegraph/telegram-shaped board.

| Item | Needed? | Notes | Link |
|---|---:|---|---|
| PCBWay prototype order | Required for PCB version | Upload Gerbers / order custom board | https://www.pcbway.com/orderonline.aspx |
| PCBWay KiCad plugin | Optional | Helpful for KiCad workflow | https://www.pcbway.com/project/PCBWay_Plug_In_for_KiCad.html |
| KiCad | Required for PCB design | Open-source PCB design software | https://www.kicad.org/ |
| 74HC595 shift registers | Likely | First A-Z LED chart driver approach | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=74HC595) |
| A-Z LEDs | Required | 26 letter LEDs | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=led%20electronics) |
| CR2032 holder | Possible | If coin-cell version is feasible | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=CR2032%20holder) |
| Piezo buzzer | Required | Audio output | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=piezo%20buzzer) |
| Buttons/switches | Required | Key + mode controls | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=push%20button%20electronics) |

## Version 2.0 — Smart decoder

Stronger build that listens for real beeps/flashes.

| Item | Needed? | Notes | Link |
|---|---:|---|---|
| Arduino Nano ESP32 | Candidate | Arduino-friendly stronger board | https://store-usa.arduino.cc/products/nano-esp32 |
| Raspberry Pi Pico / Pico W | Candidate | Affordable board with lots of I/O | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=raspberry%20pi%20pico) |
| ESP32 dev board | Candidate | Stronger microcontroller option | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=esp32) |
| Microphone module | Needed for beep detection | Start with a module before custom analog circuit | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=microphone%20module%20arduino) |
| Light sensor / photodiode | Optional | For flash detection | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=photoresistor%20arduino) |
| OLED or scrolling display | Recommended | Show decoded text | [Micro Center search placeholder](https://www.microcenter.com/search/search_results.aspx?Ntt=oled%20display%20arduino) |

## Sponsor / affiliate placeholders

Use these placeholders in descriptions until real links exist:

```text
Micro Center affiliate/sponsor link: [INSERT LINK]
PCBWay affiliate/sponsor/coupon link: [INSERT LINK]
Arduino board link: [INSERT LINK]
Parts/tools kit link: [INSERT LINK]
```

## Recommended first shopping list

If starting from only an Arduino Uno R3, buy or gather:

- Breadboard
- Jumper wires
- Momentary push buttons
- LEDs
- 220 ohm resistors
- Passive piezo buzzer
- USB cable

That is enough to test the v0.1 firmware.
