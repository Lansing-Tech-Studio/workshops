# First Drive — reference solution.
#
# This is a COMPLETE, runnable program. The numbers below (wheel_diameter,
# axle_track, the square's side length) are EXAMPLE calibrated values from one
# robot. Every team must measure and adjust their own — see the calibration
# steps at the bottom of this file. Do not treat these as correct answers.

from pybricks.hubs import PrimeHub
from pybricks.pupdevices import Motor
from pybricks.parameters import Port, Direction
from pybricks.robotics import DriveBase

hub = PrimeHub()

# Ports and Direction depend on this build. On this robot the left motor had to
# be reversed so the robot drives forward. Verify on each robot.
left = Motor(Port.A, Direction.COUNTERCLOCKWISE)
right = Motor(Port.B)

# EXAMPLE calibrated values for ONE robot — measure your own.
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)


def drive_square(side_mm):
    """Drive a square with the given side length in millimeters."""
    for i in range(4):
        robot.straight(side_mm)   # forward, in mm
        robot.turn(90)            # positive = clockwise / right


# Mission: trace a square with 300 mm sides.
drive_square(300)


# --- How this robot's values were calibrated -----------------------------
#
# 1) Distance: run robot.straight(1000) on its own. Measure how far the robot
#    ACTUALLY traveled with a tape measure.
#       - Went too far  -> wheel_diameter is too big  -> lower it
#       - Went too short -> wheel_diameter is too small -> raise it
#    Re-run until straight(1000) really moves 1000 mm (1 meter).
#
# 2) Turn: run robot.turn(360) on its own. The robot should spin once and end
#    facing the same way it started.
#       - Over-rotated  -> axle_track is too small -> raise it
#       - Under-rotated -> axle_track is too big   -> lower it
#    Re-run until turn(360) is a clean full circle.
