# Breadboard Notes

## First build target

Build this first:

```text
Arduino Uno R3
+ one key button
+ one signal LED
+ one piezo buzzer
```

## Wiring summary

```text
D2  -> key button -> GND
D9  -> 220Ω resistor -> LED anode
LED cathode -> GND
D10 -> piezo +
Piezo - -> GND
```

## Common mistakes to watch for

- LED backwards
- Missing LED resistor
- Button legs on wrong breadboard rows
- Forgetting `INPUT_PULLUP`
- Expecting pressed to be `HIGH` when it is actually `LOW`
- Using `delay()` everywhere and making input feel laggy
- Buzzer polarity or active/passive buzzer confusion

## Debugging steps

1. Test button alone with Serial Monitor.
2. Test LED alone.
3. Test buzzer alone.
4. Combine button + LED.
5. Combine button + buzzer.
6. Add timing logic.
7. Add decoding.
8. Add secret triggers.

## Filming notes

The messy breadboard is part of the story. Keep a few shots of the wire chaos before cleaning it up for the PCB version.
