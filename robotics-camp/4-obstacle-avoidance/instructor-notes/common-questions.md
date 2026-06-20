---
layout: default
title: Common Questions
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# Obstacle Avoidance Common Questions

Keep answers short and friendly. Add detail only if students ask for more.

## "My robot never stops! Is it broken?"

No — it's a `while True:` loop, which runs **forever** on purpose. Click the editor's
**Stop** button to end the program. A sensor robot keeps checking and reacting until
you tell it to quit.

*If they want more*: That's exactly what you want for a robot that reacts to the
world — it has to keep looking. "Forever until I press Stop" is the design.

## "`distance()` shows 2000. Why is it stuck?"

That's not stuck — **2000 mm is the "nothing detected" reading**. With nothing in
front of the sensor, it reports 2000. Put your hand or an obstacle in front of it and
watch the number drop.

## "Which port is the sensor in?"

Check where the ultrasonic (distance) sensor is actually plugged into the hub, and use
**that** port in your code. The starter uses `Port.C`, but yours may be different.
`eyes = UltrasonicSensor(Port.C)` has to match reality.

## "What number should the trigger be?"

There's no universal answer — you **measure** it on your course. Start near 200 mm and
adjust: if the robot stops too far from the wall, lower the number; if it bumps the
wall before reacting, raise it.

## "What's the difference between `if` and `else`?"

`if` runs its code only when the condition is true ("if something's close…"). `else`
runs when the condition is false ("…otherwise, drive forward"). Exactly one of the two
runs each time through the loop.

## "Why do we need `wait(10)`?"

It's a tiny pause so the loop doesn't race ahead faster than the robot can react. It
also keeps the hub from getting overwhelmed. Ten milliseconds is plenty.

## "Do I have to use Python? I want to use blocks."

Blocks are totally fine — you'll learn the same things. Use the
[Block Coding Guide]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/resources/block-coding-guide).
You can peek at the live Python preview whenever you're curious.

## Teaching Notes for Instructors

Confirm the distance sensor's actual port on every robot before students start coding —
a wrong port is the most common early snag. Teach the **Stop** button *before* the
first `while True:` run so nobody panics when the robot won't quit. Resist giving
students a "correct" trigger distance; measuring and adjusting it on the real course is
the lesson. The big "aha" today is the shift from a fixed script to sensor-driven
behavior — name it out loud the first time a robot backs away from a hand on its own.
