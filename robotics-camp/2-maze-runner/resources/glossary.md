---
layout: default
title: Glossary
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Maze Runner Glossary

Quick definitions for the core terms used in this session.

**function:** A named move you can reuse. You write the steps once, give them a name,
and then run them as many times as you want by calling that name.

**define:** To create a function by writing `def name():` and putting its steps
indented underneath. Defining a function doesn't run it — it just teaches the robot
what that name means.

**call:** To run a function by writing its name with parentheses, like
`forward_one_cell()`. The robot does the steps inside the function each time you call it.

**`forward_one_cell`:** A function we write today that drives the robot forward exactly
one maze cell. How far that is depends on your maze — it's a **calibration** value.

**`turn_right`:** A function we write today that turns the robot a quarter-turn to the
right (`robot.turn(90)`).

**`turn_left`:** A function we write today that turns the robot a quarter-turn to the
left (`robot.turn(-90)`).

**sequence:** The order your steps run in. A program runs **top to bottom, one step at
a time**, so solving a maze means writing the right named moves in the right order.

**maze:** A path taped on the floor with walls to avoid. Today each team tapes one for
another team to solve.

**cell:** One square step of the maze — the distance the robot should move when you call
`forward_one_cell()`. You **measure and adjust** this for your maze.

**DriveBase:** The Pybricks tool (from Session 1) that controls both drive motors
together so you can say "drive forward" or "turn" instead of controlling each wheel.

**calibration:** Measuring what the robot *actually* does and adjusting the numbers
until the code matches reality. Today you calibrate the **cell size** inside
`forward_one_cell()`. ("It overshot the cell — lower the mm and try again.")

**bug:** When the robot does something you didn't want. It's not a mystery — it's
**sensor data**: the robot did exactly what the sequence said. Read the steps to find
which move went wrong.
