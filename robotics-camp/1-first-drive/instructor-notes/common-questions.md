---
layout: default
title: Common Questions
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# First Drive Common Questions

Keep answers short and friendly. Add detail only if students ask for more.

## "My robot drives backward. Is it broken?"

No — a motor's `Direction` just doesn't match how it's mounted. Flip that motor's
`Direction` (`CLOCKWISE` ↔ `COUNTERCLOCKWISE`) and run again. This is normal setup,
not a fault.

*If they want more*: The two motors face opposite directions on the robot, so one
of them almost always needs to be reversed for "forward" to mean forward.

## "I ran `straight(1000)` but it didn't go exactly a meter. Did I do something wrong?"

Nope — that's exactly the point of calibration. The robot guesses its distance from
`wheel_diameter`. If it drove too far, lower that number; too short, raise it. Try
again until it lands on a meter.

## "Which way is positive for `turn()`?"

Positive is **clockwise / right**. A negative number turns left. So `turn(90)` is a
right quarter-turn and `turn(-90)` is a left one.

## "What's the difference between `wheel_diameter` and `axle_track`?"

`wheel_diameter` is how wide one wheel is — it controls how far the robot drives.
`axle_track` is the gap between the two wheels — it controls how much it turns. Tune
distance first, then turning.

## "My hub isn't in the Bluetooth list."

Make sure it's turned on and not already connected to another laptop (a hub can only
talk to one at a time). Refresh the page and look for *your hub's name* (it's labeled).

## "Do I have to use Python? I want to use blocks."

Blocks are totally fine — you'll learn the same things. Use the
[Block Coding Guide]({{ site.baseurl }}/robotics-camp/1-first-drive/resources/block-coding-guide).
You can peek at the live Python preview whenever you're curious.

## "Why does the square come back to a different spot?"

Small errors in each side and each turn add up over four moves — that's real
robotics. Tighten your calibration and it gets closer. "Pretty close" is a Day 1 win.

## Teaching Notes for Instructors

The most common time sink today is first-time Bluetooth connecting. Have hubs named
and labeled in advance, and connect one yourself first so you can walk students
through the exact buttons. Resist giving students "correct" calibration numbers — the
measuring-and-adjusting loop is the entire lesson. Celebrate the first successful
drive loudly; it's the moment that hooks them for the week.
