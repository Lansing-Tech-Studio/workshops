---
layout: default
title: Glossary
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# First Drive Glossary

Quick definitions for the core terms used in this session.

**Pybricks:** The software we use to program the robot. It runs in a web browser at
code.pybricks.com and talks to the hub over Bluetooth.

**hub:** The big programmable brick (the SPIKE Prime "brain"). Motors and sensors
plug into its ports, and it runs your program.

**port:** A labeled socket on the hub (A, B, C, …) where you plug in a motor or
sensor. Your code has to use the same port the part is actually plugged into.

**Motor:** A part that spins. The driving base has two — a left and a right — and
the robot drives by spinning them.

**DriveBase:** The Pybricks tool that controls both drive motors together so you can
say "drive forward" or "turn" instead of controlling each wheel by hand.

**millimeter (mm):** The unit `straight()` uses for distance. 1000 mm = 1 meter. A
new pencil is about 190 mm long.

**degree:** The unit `turn()` uses for angles. A quarter turn is 90 degrees; a full
spin is 360 degrees.

**wheel_diameter:** How wide the wheel is, in mm. The robot uses this to figure out
how far one wheel-spin moves it. You **measure and adjust** this — it's a calibration
value, not a fixed number.

**axle_track:** The distance between the two wheels, in mm. The robot uses this to
figure out turns. Also a **calibration value** you measure and adjust.

**calibration:** Measuring what the robot *actually* does and adjusting the numbers
until the code matches reality. ("It went too far — lower the wheel size and try
again.")

**`for` loop:** A way to repeat the same steps a set number of times, like driving
the four sides of a square with `for i in range(4):`.

**bug:** When the robot does something you didn't want. It's not a mystery — it's
**sensor data**: the robot did exactly what the code said. Read the code to find what
you actually told it to do.
