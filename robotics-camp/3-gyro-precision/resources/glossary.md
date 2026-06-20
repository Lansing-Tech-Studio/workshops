---
layout: default
title: Glossary
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Gyro Precision Glossary

Quick definitions for the core terms used in this session.

**gyro:** Short for **gyroscope** — a sensor inside the hub that detects how the robot
is _turning_. It lets Techster feel which way it's facing instead of just counting
wheel-spins.

**gyroscope:** The full name for the gyro. It measures rotation, which the robot uses to
make turns and straights more accurate.

**IMU:** Stands for _inertial measurement unit_ — the chip inside the hub that holds the
gyro (and more). When you read `hub.imu.heading()`, you're asking the IMU which way the
robot is facing.

**heading:** The direction the robot is facing, in **degrees**. It starts at **0** when
the program begins, and **positive = clockwise**. You read it with `hub.imu.heading()`.

**use_gyro:** The DriveBase command that turns the gyro on or off:
`robot.use_gyro(True)`. With it on, the same `straight()` and `turn()` commands use the
gyro to hold a straighter, more accurate path.

**accuracy:** How close the robot gets to what you asked for. Turning the gyro on makes
turns _more accurate_ — they end up closer to the angle you typed.

**drift:** When the robot slowly veers off course because of tiny errors (slipping
wheels, an uneven floor). Small drifts **add up** over many moves. The gyro reduces
drift.

**calibration:** Measuring what the robot _actually_ does and adjusting the numbers until
the code matches reality. Today you calibrate a **true 360° turn** — your hub might need
`turn(357)` or `turn(362)` for one real full turn.

**DriveBase:** The Pybricks tool that controls both drive motors together (from
Day 1). It's the thing you call `use_gyro()`, `straight()`, and `turn()` on.

**degree:** The unit `turn()` and `heading()` use for angles. A quarter turn is 90
degrees; a full spin is 360 degrees.

**bug:** When the robot does something you didn't want. It's not a mystery — it's
**sensor data**: the robot did exactly what the code said. Read the code to find what
you actually told it to do.
