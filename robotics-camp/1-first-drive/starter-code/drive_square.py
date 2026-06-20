from pybricks.hubs import PrimeHub
from pybricks.pupdevices import Motor
from pybricks.parameters import Port, Direction
from pybricks.robotics import DriveBase

hub = PrimeHub()

# Ports and Direction depend on how YOUR motors are mounted — verify per build.
# If the robot drives backward, flip a Direction (CLOCKWISE / COUNTERCLOCKWISE).
left = Motor(Port.A, Direction.COUNTERCLOCKWISE)
right = Motor(Port.B)

# Starting GUESSES — calibrate these today (see the worksheet).
# These are NOT correct answers; measure and adjust them.
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)

# Mission: drive a square.
for i in range(4):
    robot.straight(300)   # 300 mm forward
    robot.turn(90)        # positive = clockwise / right
