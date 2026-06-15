---
layout: default
title: Common Questions
workshop: Home Automation with ESP32
section: Instructor Notes
---

# Home Automation with ESP32 Common Questions

Use these as quick answers during the camp.

## "What's the difference between the ESP32 and a regular computer?"

A microcontroller runs one program at a time, has no screen or operating system,
and is built to read sensors and control pins directly. It's tiny, cheap, and
always-on — perfect for embedded projects.

## "Why won't my code upload?"

Most common causes, in order:

- Wrong COM/serial port selected (unplug/replug and compare the list)
- USB cable is power-only, not data — swap cables
- CP210x USB driver not installed (Windows / some Macs)
- Another Serial Monitor is holding the port — close it and retry

## "The Serial Monitor shows garbage characters"

The baud rate doesn't match. Set the Monitor to **115200**.

## "My humidity readings are `nan` (not a number)"

Almost always wiring:

- The **10 kΩ pull-up** between DATA and 3V3 is missing or loose
- DATA is on the wrong GPIO (should be GPIO 4)
- VCC or GND isn't actually connected
- The NC (third) pin got wired by mistake — leave it empty

## "The LED won't light up"

- The longest leg (common cathode) must go to **GND**
- Each color leg needs its own **220 Ω resistor** in series
- Double-check the color legs aren't shifted one hole over
- Confirm the right GPIOs: Red 18, Green 19, Blue 23

## "Green and blue look way dimmer than red"

That's expected — green and blue have a higher forward voltage. It's not a
mistake. If it bothers a student, swap the green/blue resistors for 100 Ω or
150 Ω and keep red at 220 Ω.

## "The color is wrong / red and blue are swapped"

The color legs are wired to the wrong GPIOs. Have the student trace each leg
back to its pin against the wiring diagram.

## "Can I break the ESP32?"

Hard to, but two real risks: feeding **5 V into a GPIO pin** (they're 3.3 V only)
and connecting an LED **without a resistor**. Reinforce: don't change wiring
while it's powered.

## "Why humidity and not temperature?"

Humidity reacts instantly when you breathe on the sensor, so cause-and-effect is
obvious and the room stays engaged. Temperature works too — it's a one-line
switch — but it changes slowly.

## Pacing reminders

Keep answers short and friendly. The goal is a working circuit each student
built themselves — cut scope before cutting confidence. A working blink is a
win.
