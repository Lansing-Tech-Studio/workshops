---
layout: default
title: Common Questions
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# Line Following Common Questions

Keep answers short and friendly. Add detail only if students ask for more.

## "What does `reflection()` actually measure?"

How much light bounces back to the sensor, as a number from 0 to 100. Black tape soaks
up light, so it reads low; the white floor bounces a lot back, so it reads high. That
gap is what lets the robot tell the line from the floor.

## "What number do I put for BLACK and WHITE?"

Whatever *your* tape and *your* floor read — there's no universal answer. Hold the
sensor over the tape, read the reflection, write it down; do the same over the floor.
The threshold is the midpoint between them.

## "Why does the robot wobble instead of going straight?"

Because it's following the **edge** of the line, not the center — it's always correcting
a little. A small, steady wobble is normal. A *big* wobble means `GAIN` is too high;
lower it.

## "My robot drifts straight off the line. What's wrong?"

Usually `GAIN` is too low (it's not steering hard enough) or the threshold is off.
Re-measure BLACK and WHITE, recompute the threshold, then bump GAIN up a little.

## "It steers the wrong way and runs away from the line."

It's following the *other* edge. Start the robot on the other side of the line so the
edge is on the side the code expects. (In the two-sensor stretch, swap the sensors.)

## "How do I stop it? It won't quit."

`while True:` runs forever on purpose — that's how it keeps following. Press the
editor's **Stop** button to end it.

## "What's GAIN, really?"

It's how hard the robot steers for each unit of deviation. Small deviation × big GAIN =
hard steer. Tuning it is the whole point today: too low = sloppy, too high = wobbly.
Change only GAIN between runs so you can tell what it did.

## "Do I have to use Python? I want to use blocks."

Blocks are totally fine — you'll learn the same things. Use the
[Block Coding Guide]({{ site.baseurl }}/robotics-camp/5-line-following/resources/block-coding-guide).
Younger students can start with a simple if/else "turn one way on white, the other on
black" version and upgrade to proportional later.

## Teaching Notes for Instructors

Test the line surface before students arrive — black electrical tape on white poster
board or a light floor; without contrast nothing works. Resist handing out "correct"
BLACK/WHITE/GAIN numbers; measuring and tuning is the entire lesson, and `GAIN` is
where the real learning happens, so protect time for experimenting. Say out loud that
the robot follows the **edge**, or the wobble will read as a malfunction. Finally,
leave a hard stop for the showcase — it's the payoff for the whole week, so don't let
gain-tuning eat into it.
