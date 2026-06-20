---
layout: default
title: Block Coding Guide
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# First Drive — Block Coding Guide

You can do everything in this session with **blocks** instead of typing Python.
Pybricks shows the **matching Python next to your blocks (live preview)**, so the
block track and the Python track end up at the same place — you can peek at the
Python any time to see what your blocks turned into.

> **Same robot, same ideas.** Blocks and Python are just two ways to give Techster
> the same instructions.

## 1. Switch to blocks

In [code.pybricks.com](https://code.pybricks.com), make a **new block program**
(choose blocks instead of Python when you create it). You'll see a blocks canvas
with a palette of blocks on the side and a live Python preview.

## 2. Set up the robot

Use the **setup / configuration** area to tell Pybricks about your robot. This is the
block version of the `hub`, `Motor`, and `DriveBase` lines in the Python:

1. Add the **hub**.
2. Add your two **drive motors**, and set the **port** for each (match the port the
   motor is actually plugged into — e.g. A and B).
3. If a motor makes the robot go backward, change that motor's **direction**.
4. Turn the two motors into a **robot / drive base** and enter the **wheel diameter**
   and **axle track**. Start with **56** and **112** — these are *guesses you will
   calibrate today*, not correct answers.

This is the block equivalent of:

```python
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)
```

## 3. Drive and turn

From the **movement** blocks:

| What you want | Block | Python it matches |
|---------------|-------|-------------------|
| Drive forward 300 mm | "drive straight 300 mm" | `robot.straight(300)` |
| Turn right 90° | "turn 90 degrees" | `robot.turn(90)` |

Remember: distance is in **millimeters**, turns are in **degrees**, and **positive
turn = clockwise / right** (use a negative number to turn left).

## 4. Repeat to make a square

Use a **repeat / loop** block set to **4 times**, and put the "drive straight" and
"turn 90°" blocks *inside* it:

```text
repeat 4 times:
    drive straight 300 mm
    turn 90 degrees
```

That's the block version of:

```python
for i in range(4):
    robot.straight(300)
    robot.turn(90)
```

## 5. Calibrate (same as the Python track)

Calibration is identical no matter which track you use:

1. Make a tiny program with just one **drive straight 1000 mm** block. Run it and
   measure how far the robot really went. Adjust the **wheel diameter** in setup.
2. Make a tiny program with just one **turn 360°** block. Run it and check it spins
   exactly once. Adjust the **axle track** in setup.

Write your measured numbers on the
[worksheet]({{ site.baseurl }}/robotics-camp/1-first-drive/student-handouts/worksheet).

## Ready to try Python?

Look at the **live Python preview** next to your blocks — that's real code your blocks
made. When you're curious, start a Python program and type the commands from the
[main session page]({{ site.baseurl }}/robotics-camp/1-first-drive/). Same robot,
same results.
