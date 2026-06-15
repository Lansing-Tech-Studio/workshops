---
layout: default
title: Glossary
workshop: Home Automation with ESP32
section: Resources
---

# Home Automation with ESP32 Glossary

Quick definitions for the core terms used in this workshop.

**home automation:** Using sensors, logic, and outputs to make everyday things (lights, thermostats, locks) respond automatically.

**microcontroller:** A tiny, cheap computer on a single chip that runs one program to read sensors and control outputs.

**ESP32:** The microcontroller used in this workshop. It has WiFi, many GPIO pins, and an onboard LED on GPIO 2.

**GPIO (General-Purpose Input/Output):** A pin on the ESP32 that your code can read from (input) or switch on and off (output).

**breadboard:** A reusable board with rows of connected holes that lets you build a circuit by pushing parts in — no soldering.

**power rail:** The long red (+) and blue (−) strips along a breadboard's edges used to share power and ground.

**circuit:** A complete loop that lets electricity flow from power, through components, and back to ground.

**ground (GND):** The common 0 V reference point of a circuit. Current returns here.

**3V3:** The ESP32's 3.3-volt power pin. It powers the DHT22 in this project.

**DHT22 / AM2302:** The sensor that measures temperature and humidity. The bare 4-pin version needs an external pull-up resistor.

**humidity:** The amount of water vapor in the air, measured in % RH (relative humidity). Breathing on the sensor raises it.

**RGB LED:** A single LED with red, green, and blue elements inside. Mixing their brightness makes any color.

**common cathode:** An RGB LED type where all three colors share one ground leg (the longest leg).

**resistor:** A component that limits current so an LED or pin isn't damaged. Measured in ohms (Ω).

**pull-up resistor:** A resistor (10 kΩ here) that holds a data line HIGH so the signal is clean. The bare DHT22 needs one on its DATA line.

**PWM (Pulse-Width Modulation):** Rapidly switching a pin on and off to fake an in-between brightness — how we mix LED colors.

**LEDC:** The ESP32's built-in PWM peripheral used to drive the RGB LED.

**jumper wire:** A wire with pins on each end used to connect points on the breadboard to the ESP32.

**PlatformIO:** The VS Code extension we use to write code, install libraries, and upload firmware to the ESP32.

**firmware:** The program that runs on the microcontroller (in `src/main.cpp`).

**upload / flash:** Sending your compiled code from the laptop onto the ESP32.

**Serial Monitor:** A window that shows text the ESP32 prints over USB — used to see sensor readings and debug.

**baud rate:** The speed of the serial connection (this project uses 115200). The Monitor must match it to read text correctly.

**library:** Reusable code others wrote (like the DHT sensor library) that you add to your project.
