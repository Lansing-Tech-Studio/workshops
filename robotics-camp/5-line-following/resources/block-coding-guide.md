---
layout: default
title: Block Coding Guide
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Line Following — Block Coding Guide

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

## 2. Set up the robot (and add the color sensor)

Use the **setup / configuration** area to tell Pybricks about your robot. Keep the
same hub, two drive motors, and drive base you've used all week, then **add the color
sensor**:

1. Keep the **hub**, your two **drive motors** (with their ports and directions), and
   your **robot / drive base** with your calibrated wheel diameter and axle track.
2. Add a **color sensor** and set its **port** (e.g. D) to match where it's plugged in.
   This is the block version of:

   ```python
   line_sensor = ColorSensor(Port.D)
   ```

## 3. Read reflected light

From the **sensor** blocks, use the **color sensor "reflection"** block. It gives a
number from **0 to 100**.

1. Hold the sensor over the **black tape** and read the reflection → that's your `BLACK`.
2. Hold it over the **white floor** and read the reflection → that's your `WHITE`.
3. The **threshold** is the midpoint: `(BLACK + WHITE) / 2`.

| What you want | Block | Python it matches |
|---------------|-------|-------------------|
| Read reflected light | "color sensor reflection" | `line_sensor.reflection()` |

These readings are *guesses you measure today* on your own tape and floor — not correct
answers.

## 4. Loop forever

Use a **forever / repeat-while-true** loop block. Everything inside it runs over and
over until you press **Stop**. That's the block version of:

```python
while True:
    ...
```

## 5. Steer in proportion (the upgrade)

Inside the forever loop, compute the **deviation** (reflection minus threshold) and
**drive** with a turn rate of `GAIN × deviation`:

```text
forever:
    deviation = (color sensor reflection) - threshold
    drive: speed = DRIVE_SPEED, turn rate = GAIN × deviation
```

That's the block version of:

```python
while True:
    deviation = line_sensor.reflection() - threshold
    robot.drive(DRIVE_SPEED, GAIN * deviation)
    wait(10)
```

The **drive (forever)** movement block takes a **speed** and a **turn rate** — set the
turn rate to your gain times the deviation. Then **tune GAIN**: too low = sloppy, too
high = wobbly.

### Simpler version for very-young block users

If the math feels like a lot, do a plain **if / else** version first:

```text
forever:
    if (color sensor reflection) > threshold:   # over white
        steer one way
    else:                                        # over black
        steer the other way
```

That makes the robot zig-zag along the line — it works! The **proportional** version
above is the **upgrade**: instead of always steering the same hard amount, it steers a
little when it's a little off and a lot when it's way off, so the follow is smooth.

## Ready to try Python?

Look at the **live Python preview** next to your blocks — that's real code your blocks
made. When you're curious, start a Python program and type the commands from the
[main session page]({{ site.baseurl }}/robotics-camp/5-line-following/). Same robot,
same results.
