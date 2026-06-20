# Line Following — reference solution.
#
# This is a COMPLETE, runnable program that follows the EDGE of a line (the robot
# rides half on the black tape and half on the white floor), so a small, steady
# wobble is normal.
#
# All the numbers below are EXAMPLES to MEASURE, not truths:
#   - BLACK and WHITE are measured with line_sensor.reflection() on the ACTUAL tape
#     and the ACTUAL floor. reflection() returns 0-100% (black reflects little,
#     white reflects a lot).
#   - threshold is the MIDPOINT between BLACK and WHITE — the reading you get right
#     at the edge of the line.
#   - GAIN is TUNED by experiment: too low = the robot drifts off / is sloppy,
#     too high = it wobbles back and forth. Finding "just right" is the whole point.
# Every team must measure and tune their own — do not treat these as correct answers.
#
# while True: runs FOREVER — stop the program with the editor's Stop button.

from pybricks.hubs import PrimeHub
from pybricks.pupdevices import Motor, ColorSensor
from pybricks.parameters import Port, Direction
from pybricks.robotics import DriveBase
from pybricks.tools import wait

hub = PrimeHub()

# Same setup as Session 1 — use YOUR calibrated values and verified ports/Direction.
# On this build the left motor was reversed so the robot drives forward.
left = Motor(Port.A, Direction.COUNTERCLOCKWISE)
right = Motor(Port.B)
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)

# The color sensor faces down at the front, near the floor.
line_sensor = ColorSensor(Port.D)

# EXAMPLE readings for ONE tape + floor — MEASURE your own with reflection().
BLACK = 10            # measured on the black tape
WHITE = 80            # measured on the white floor
threshold = (BLACK + WHITE) / 2   # the reading right at the edge

GAIN = 1.2            # EXAMPLE — tune it: too low = sloppy, too high = wobbly
DRIVE_SPEED = 100     # mm/s — lower this if the robot wobbles

# Follow the edge of the line, forever.
while True:
    # How far off the edge are we? Positive on one side, negative on the other.
    deviation = line_sensor.reflection() - threshold
    # Steer in PROPORTION to the deviation: a little off -> steer a little,
    # way off -> steer hard.
    robot.drive(DRIVE_SPEED, GAIN * deviation)
    wait(10)


# --- STRETCH: two-sensor line following ----------------------------------
#
# If two color sensors are free, mount one on the left and one on the right of
# the line and steer from the DIFFERENCE between them. When the robot is centered
# the two readings match (difference ~ 0); when it drifts, one sensor sees more
# black than the other and the difference steers it back. Sketch:
#
#   left_sensor = ColorSensor(Port.C)
#   right_sensor = ColorSensor(Port.D)
#   while True:
#       deviation = left_sensor.reflection() - right_sensor.reflection()
#       robot.drive(DRIVE_SPEED, GAIN * deviation)
#       wait(10)
#
# This follows the CENTER of the line instead of an edge. GAIN still needs tuning.
