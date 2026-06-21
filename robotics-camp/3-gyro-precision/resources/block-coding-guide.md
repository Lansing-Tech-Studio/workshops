---
layout: default
title: Block Coding Guide
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Gyro Precision — Block Coding Guide

You can do everything in this session with **blocks** instead of typing Python.
Pybricks shows the **matching Python next to your blocks (live preview)**, so the
block track and the Python track end up at the same place — you can peek at the
Python any time to see what your blocks turned into.

> **Same robot, same ideas.** Blocks and Python are just two ways to give the robot
> the same instructions.

## 1. Switch to blocks

In [code.pybricks.com](https://code.pybricks.com), make a **new block program**
(choose blocks instead of Python when you create it). You'll see a blocks canvas
with a palette of blocks on the side and a live Python preview.

## 2. Set up the robot — and turn on the gyro

Use the **setup / configuration** area to tell Pybricks about your robot. This is the
same setup from Day 1 (`hub`, `Motor`, and `DriveBase`) — reuse **your** calibrated
numbers:

1. Add the **hub**.
2. Add your two **drive motors**, set the **port** for each, and set a motor's
   **direction** if needed (use the values you verified in Day 1).
3. Turn the two motors into a **robot / drive base** and enter **your** calibrated
   **wheel diameter** and **axle track**.
4. In the drive base setup, find the **"use gyro"** option and **turn it on**. This is
   the block version of the one new line today.

This is the block equivalent of:

```python
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)
robot.use_gyro(True)
```

## 3. Drive and turn (same blocks as before)

From the **movement** blocks:

| What you want        | Block                   | Python it matches     |
| -------------------- | ----------------------- | --------------------- |
| Drive forward 500 mm | "drive straight 500 mm" | `robot.straight(500)` |
| Turn right 90°       | "turn 90 degrees"       | `robot.turn(90)`      |

With the **"use gyro"** option on, these _exact same_ blocks now hold a straighter,
more accurate path.

## 4. Read and print the heading

Find the **hub / IMU** blocks for the **heading**, and put it inside a **print** block:

| What you want    | Block                   | Python it matches          |
| ---------------- | ----------------------- | -------------------------- |
| Show the heading | "print" + "hub heading" | `print(hub.imu.heading())` |

The number shows up in the **output console**. Heading starts at **0** and **positive =
clockwise**. Watch it change as the robot turns.

```python
print(hub.imu.heading())
```

## 5. The two experiments (same as the Python track)

Both experiments work the same no matter which track you use:

1. **Off vs. on:** Run your square with the **"use gyro"** option **off**, mark where it
   ends. Turn the option **on** and run the _same_ blocks again. Chart the error.
2. **Tune a true 360°:** Make a tiny program with one **turn 360°** block and a
   **print heading** block. Run it; if the heading didn't land back near 0, change the
   turn number (try 355-363) until it does.

Write your results on the
[worksheet]({{ site.baseurl }}/robotics-camp/3-gyro-precision/student-handouts/worksheet).

## Ready to try Python?

Look at the **live Python preview** next to your blocks — that's real code your blocks
made. When you're curious, start a Python program and type the commands from the
[main session page]({{ site.baseurl }}/robotics-camp/3-gyro-precision/). Same robot,
same results.
