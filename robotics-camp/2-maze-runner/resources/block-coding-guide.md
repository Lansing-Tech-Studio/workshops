---
layout: default
title: Block Coding Guide
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Maze Runner — Block Coding Guide

You can do everything in this session with **blocks** instead of typing Python.
Pybricks shows the **matching Python next to your blocks (live preview)**, so the
block track and the Python track end up at the same place — you can peek at the
Python any time to see what your blocks turned into.

> **Same robot, same ideas.** Blocks and Python are just two ways to give the robot
> the same instructions.

## 1. Open your block program

In [code.pybricks.com](https://code.pybricks.com), open a **block program** (choose
blocks instead of Python when you create it). You'll see a blocks canvas with a palette
of blocks on the side and a live Python preview.

## 2. Set up the robot (same as Day 1)

Use the **setup / configuration** area to tell Pybricks about your robot — the block
version of the `hub`, `Motor`, and `DriveBase` lines:

1. Add the **hub**.
2. Add your two **drive motors** and set each **port** (match what's plugged in).
3. If a motor makes the robot go backward, change that motor's **direction**.
4. Turn the motors into a **robot / drive base** and enter the **wheel diameter** and
   **axle track** — use the values you **calibrated in Day 1**, not fresh guesses.

This is the block equivalent of:

```python
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)
```

## 3. Name a move with "My Blocks"

This is the new idea today: a **function** is a named move. In block coding, you make one
with a **"My Blocks" / named block stack** — you give a stack of blocks a name and then
drop that one named block wherever you want it.

1. Create a new **My Block** and name it `forward one cell`.
2. Inside it, put a **drive straight 250 mm** block.
3. Make two more named blocks: `turn right` (a **turn 90°** block) and `turn left`
   (a **turn -90°** block).

These three named blocks are the block version of:

```python
def forward_one_cell():
    robot.straight(250)

def turn_right():
    robot.turn(90)

def turn_left():
    robot.turn(-90)
```

Remember: distance is in **millimeters**, turns are in **degrees**, and **positive
turn = clockwise / right** (use a negative number to turn left).

## 4. Sequence the named moves to solve the maze

Now drag your named blocks into the main program in the order that walks the maze. A
program runs **top to bottom**, so this is just a list of moves in order:

```text
forward one cell
turn right
forward one cell
forward one cell
```

That's the block version of:

```python
forward_one_cell()
turn_right()
forward_one_cell()
forward_one_cell()
```

If the robot bumps a wall, find the named block where it went wrong and fix that step.

## 5. Calibrate the cell (same as the Python track)

The cell size is a calibration value no matter which track you use:

1. Make a tiny program with just your **forward one cell** block. Run it once and see if
   the robot lands in the next cell.
2. Adjust the **drive straight** distance inside the `forward one cell` My Block — raise
   it if the robot stopped short, lower it if it overshot.

Write your cell size on the
[worksheet]({{ site.baseurl }}/robotics-camp/2-maze-runner/student-handouts/worksheet).

## Ready to try Python?

Look at the **live Python preview** next to your blocks — that's real code your blocks
made, including your `def forward_one_cell():` function. When you're curious, start a
Python program and type the commands from the
[main session page]({{ site.baseurl }}/robotics-camp/2-maze-runner/). Same robot,
same results.
