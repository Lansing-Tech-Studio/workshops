---
layout: default
title: Glossary
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Line Following Glossary

Quick definitions for the core terms used in this session.

**ColorSensor:** The Pybricks tool for the SPIKE Prime color sensor. It can read
colors and, today, how much light bounces back off the floor. You create it with the
port it's plugged into: `line_sensor = ColorSensor(Port.D)`.

**reflection:** How much light bounces back to the sensor, as a number from **0 to
100**. Black tape reflects little (a low number); a white floor reflects a lot (a high
number). You read it with `line_sensor.reflection()`.

**threshold:** The dividing line between "I'm over the line" and "I'm over the floor."
We set it to the **midpoint** between the BLACK and WHITE readings — that's the value
you'd read right at the **edge** of the line.

**BLACK:** The reflection reading you **measure on the tape**. It's a calibration
value, not a fixed number — measure it on your own tape.

**WHITE:** The reflection reading you **measure on the floor**. Also a calibration
value you measure yourself.

**deviation:** How far the current reading is from the threshold
(`reflection() - threshold`). Zero means you're right on the edge; a big number (plus
or minus) means you've drifted off.

**proportional control:** Steering **in proportion to** how far off you are — a little
off means steer a little, way off means steer hard. It makes the robot follow the line
smoothly instead of jerking side to side.

**GAIN:** The number that decides **how hard** the robot steers for each unit of
deviation. You **tune** it: too low = sloppy (drifts off the line), too high = wobbly
(swings back and forth). Finding "just right" is the whole game.

**edge (of the line):** The robot follows the **edge** of the line — half on the black
tape, half on the white floor — not the dead center. That's why a small, steady wobble
is normal.

**calibration:** Measuring what the sensor *actually* reads on your tape and floor and
setting the numbers to match. ("Black read 12, white read 78 — so the threshold is
about 45.")

**`while` loop:** `while True:` repeats the steps inside it **forever**. The
line-follower keeps reading and steering until you press the editor's **Stop** button.

**bug:** When the robot does something you didn't want. It's not a mystery — it's
**sensor data**: the robot did exactly what the code said. Read the code (and your
numbers) to find what you actually told it to do.
