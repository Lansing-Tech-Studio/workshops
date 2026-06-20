---
layout: default
title: Block Coding Guide
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Obstacle Avoidance — Block Coding Guide

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

## 2. Set up the robot (add the distance sensor)

Use the **setup / configuration** area to tell Pybricks about your robot. This is the
block version of the `hub`, `Motor`, `DriveBase`, and sensor lines in the Python:

1. Add the **hub**.
2. Add your two **drive motors** and set the **port** for each (same as earlier
   sessions). Keep your calibrated wheel diameter and axle track.
3. Add the **distance / ultrasonic sensor** and set its **port** — match the port the
   sensor is actually plugged into. Give it a name like **eyes**.

This is the block equivalent of:

```python
eyes = UltrasonicSensor(Port.C)
```

## 3. Read the sensor

From the **sensor** blocks, find the **"distance"** value block for your distance
sensor. Drop it into a **print** block to watch the number:

| What you want | Block | Python it matches |
|---------------|-------|-------------------|
| Read the distance | "distance (mm)" sensor value | `eyes.distance()` |
| Show the number | print + distance value | `print(eyes.distance())` |

Move your hand toward the sensor and watch the number drop. With **nothing** in
front of it, it reads **2000** — that's the "no object" value.

## 4. Repeat forever with a "forever / while" loop

Use a **forever** (repeat-forever) loop block. Everything inside it runs over and
over until you press **Stop**:

```text
forever:
    (check the sensor and decide)
```

That's the block version of:

```python
while True:
    ...
```

> **It runs forever.** A forever / `while True:` loop does not stop on its own. Use
> the editor's **Stop** button to end it.

## 5. Decide with an "if / else" block

Put an **if / else** block inside the forever loop. In the **if** part, use a
**comparison** block to test the distance value, and fill the two halves with what to
do:

```text
forever:
    if  distance (mm)  <  200 :
        drive straight -100 mm   (back up)
        turn 90 degrees          (turn away)
    else:
        drive 150 mm/s, turn 0   (forward)
```

That's the block version of:

```python
while True:
    if eyes.distance() < 200:
        robot.straight(-100)
        robot.turn(90)
    else:
        robot.drive(150, 0)
    wait(10)
```

Remember: **200 mm is a guess you tune on the real course**, not a correct answer.

## 6. Tune the trigger (same as the Python track)

Tuning is identical no matter which track you use:

1. Run the program and drive toward an obstacle.
2. Stops too far away? Make the trigger number **smaller**.
   Bumps the wall first? Make it **bigger**.
3. Run again on the real course until it stops where you want.

Write your trigger distance on the
[worksheet]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/student-handouts/worksheet).

## Ready to try Python?

Look at the **live Python preview** next to your blocks — that's real code your blocks
made. When you're curious, start a Python program and type the commands from the
[main session page]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/). Same robot,
same results.
