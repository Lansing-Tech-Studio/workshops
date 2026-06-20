---
layout: default
title: Common Questions
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# Maze Runner Common Questions

Keep answers short and friendly. Add detail only if students ask for more.

## "What's a function, really?"

It's a named move. You write the steps once under `def name():`, and after that you can
run all of them just by writing `name()`. It saves typing and makes the maze solution
read like a list of instructions.

_If they want more_: The built-in commands like `robot.straight()` are functions too —
you're just making your own.

## "I wrote `def forward_one_cell():` but nothing moved. Did I break it?"

No — **defining** a function doesn't run it; it just teaches the robot what that name
means. You have to **call** it by writing `forward_one_cell()` on its own line. Defining
is the recipe; calling is cooking it.

## "How is this different from the `for` loop we did yesterday?"

A `for` loop repeats the _same_ move several times. A function gives a move a _name_ so
you can reuse it anywhere. They team up well — you can call your functions inside a loop.

## "My robot bumped a wall. What went wrong?"

That's sensor data — the robot did exactly what the sequence said. Read your moves in
order and find the step where it first went wrong, fix that one move, and run again.

## "`forward_one_cell()` overshoots (or stops short) of the cell."

That's calibration. The cell size is a guess inside the function. Overshot → lower the
mm; stopped short → raise it. Run one cell at a time until it lands right.

## "My turns are a little off over the whole maze."

Small turn errors stack up over a long path — that's real robotics, and it's exactly
what tomorrow's gyro lesson fixes. For today, re-check the `axle_track` you calibrated in
Day 1 and aim for "completes the maze," not "perfect."

## "Do I have to retype the setup from yesterday?"

No — reuse the same `hub`, `Motor`, and `DriveBase` setup with your calibrated values.
Don't rewrite it from scratch.

## "Do I have to use Python? I want to use blocks."

Blocks are totally fine — functions are **My Blocks** (named block stacks). Use the
[Block Coding Guide]({{ site.baseurl }}/robotics-camp/2-maze-runner/resources/block-coding-guide).
You can peek at the live Python preview whenever you're curious.

## Teaching Notes for Instructors

This is a cumulative session, so run the catch-up in the huddle and get any late arrival
connected and driving before functions begin. The big idea today is the
**define vs. call** distinction — watch for students who define a function and expect it
to run. Push the planning-on-paper habit hard; a maze solved on paper first runs in far
fewer tries. Keep the cell size a measure-and-adjust activity, never a handed-out number,
and celebrate the first robot that completes a maze — that's when functions click.
