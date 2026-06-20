---
layout: default
title: Glossary
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Obstacle Avoidance Glossary

Quick definitions for the core terms used in this session.

**sensor:** A part that measures something about the world — like how far away an
object is — and reports it back to your code as a number.

**`UltrasonicSensor`:** The Pybricks tool for the distance ("eyes") sensor. It sends
out sound you can't hear and times the echo to figure out how far away something is.

**distance:** What `eyes.distance()` gives you — how far the nearest thing is, in
**millimeters**. It returns **2000 mm when nothing is detected** (the "no object"
reading).

**`if`:** A decision in code. "**If** something is close, do this." The robot only
runs the `if` block when the condition is true.

**`else`:** The other choice. "…**else** (otherwise), do this instead." The robot
runs the `else` block when the `if` condition is false.

**condition:** The true-or-false test an `if` checks, like `eyes.distance() < 200`
("is the distance less than 200?"). The answer decides which block runs.

**`while` loop:** A loop that keeps repeating as long as its condition is true.
`while True:` is always true, so it repeats **forever** — perfect for checking a
sensor over and over. Stop it with the editor's **Stop** button.

**`wait`:** A short pause, in milliseconds. `wait(10)` waits 10 ms so the loop
doesn't race ahead faster than the robot can react.

**`DriveBase`:** The Pybricks tool that controls both drive motors together. Carried
over from earlier sessions — here we also use `robot.drive(speed, turn)` to keep
moving continuously while we watch the sensor.

**millimeter (mm):** The unit the distance sensor uses. 1000 mm = 1 meter. A new
pencil is about 190 mm long.

**trigger distance:** The number you compare the sensor reading against to decide
"too close." You **measure and adjust** it on the real course — it's a calibration
value, not a fixed number.

**bug:** When the robot does something you didn't want. It's not a mystery — it's
**sensor data**: the robot did exactly what the code said. Read the code to find what
you actually told it to do.
