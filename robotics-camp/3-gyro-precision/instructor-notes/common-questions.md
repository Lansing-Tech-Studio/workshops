---
layout: default
title: Common Questions
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# Gyro Precision Common Questions

Keep answers short and friendly. Add detail only if students ask for more.

## "What does the gyro actually do?"

It senses how the robot is _turning_, so the robot can feel which way it's facing instead
of just counting wheel-spins. With it on, the same `turn()` and `straight()` hold a
straighter, more accurate path.

_If they want more_: Counting wheel-spins is fooled by slipping wheels and uneven floors;
the gyro measures the actual rotation and corrects as it goes.

## "I turned the gyro on but my 360° still isn't perfect. Did I break it?"

No — that's exactly the point of today. The gyro is _better_, not magic. A true full turn
might need `turn(357)` or `turn(362)` on your hub. Tune the number until the heading lands
back near 0. That's calibration.

## "Why does each hub need a different turn number?"

Tiny differences in the build, the wheels, and the gyro itself add up. There's no
universal number — yours is yours. Measuring it is the activity, not a failure.

## "What's a heading, and where do I see it?"

The heading is the direction the robot is facing, in degrees. It starts at 0 and positive
is clockwise. Print it with `print(hub.imu.heading())` and the number shows up in the
**output console** in the editor.

## "My heading didn't start at 0."

It resets to 0 when the program starts running. Read it _after_ the program is going, and
remember every turn adds to (or subtracts from) it.

## "Do I have to rewrite all the setup from Day 1?"

No — reuse it. Same hub, motors, and DriveBase with your calibrated `wheel_diameter` and
`axle_track`. The only new line is `robot.use_gyro(True)`.

## "How do I prove the gyro helped?"

Run the same move with the gyro off, mark where it ends, then run the exact same code with
the gyro on. Measure both errors and chart them on the worksheet. The chart is the proof.

## "Do I have to use Python? I want to use blocks."

Blocks are totally fine — you'll learn the same things. The drive base setup has a **"use
gyro"** option, and there's a **heading** block too. Use the
[Block Coding Guide]({{ site.baseurl }}/robotics-camp/3-gyro-precision/resources/block-coding-guide).

## Teaching Notes for Instructors

The proof of the day is the off-vs-on comparison, so make sure **every** team measures
**both** runs — don't let anyone skip straight to the gyro-on version. Resist handing out
a "correct" turn-fudge number; the per-hub tuning (expect roughly 355-363) is genuine
calibration and the whole point. Frame the gyro's imperfection honestly: it's a big
upgrade, not a magic fix. Reuse the Day 1 setup so the new idea (`use_gyro(True)` and
reading the heading) stands out cleanly.
