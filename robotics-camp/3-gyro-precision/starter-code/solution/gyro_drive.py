# Gyro Precision — reference solution.
#
# This is a COMPLETE, runnable program. The activity today is TWO things:
#   1) Compare the SAME moves with the gyro OFF vs. ON and chart the error.
#   2) Tune a TRUE 360 degree turn for THIS hub.
#
# The turn "fudge" number below (357) is an EXAMPLE calibrated value from ONE
# hub. It is NOT a constant — each team measures their own and it could land
# anywhere around 355-363. Do not treat it as a correct answer.

from pybricks.hubs import PrimeHub
from pybricks.pupdevices import Motor
from pybricks.parameters import Port, Direction
from pybricks.robotics import DriveBase

hub = PrimeHub()

# Same setup as Day 1 — use YOUR calibrated wheel_diameter / axle_track and
# the ports/Direction verified on this build.
left = Motor(Port.A, Direction.COUNTERCLOCKWISE)
right = Motor(Port.B)
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)

# The one new line: turn on the gyro so turns/straights stay accurate.
robot.use_gyro(True)

# A short routine: drive, turn, and report the heading.
robot.straight(500)       # 500 mm forward
robot.turn(90)            # positive = clockwise / right
print(hub.imu.heading())  # degrees; positive = clockwise; starts at 0


# --- Worked example: tune a TRUE 360 degree turn -------------------------
#
# Even with the gyro on, a "360" may not land perfectly back at the start.
# Read the heading after a full turn and adjust the number until heading() is
# back near 0.
#
#   1) Run robot.turn(360), then print(hub.imu.heading()).
#   2) Heading reads a bit past 0 (over-spun)  -> use a SMALLER number.
#      Heading reads a bit short of 0 (under-spun) -> use a BIGGER number.
#   3) Re-run until a full turn truly ends where it started.
#
# On THIS hub, 357 was the calibrated true-360 value. Yours will differ
# (commonly 355-363). Measure your own — this is per-hub calibration, not a
# constant.

robot.turn(357)           # EXAMPLE: one hub's true full turn — measure yours
print(hub.imu.heading())  # should read back near 0 after a true full turn
