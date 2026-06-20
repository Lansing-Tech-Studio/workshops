from pybricks.hubs import PrimeHub
from pybricks.pupdevices import Motor
from pybricks.parameters import Port, Direction
from pybricks.robotics import DriveBase

hub = PrimeHub()
# Same setup as Day 1 — use YOUR calibrated values and verified ports/Direction.
left = Motor(Port.A, Direction.COUNTERCLOCKWISE)
right = Motor(Port.B)
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)

robot.use_gyro(True)      # now turns/straights use the gyro
robot.straight(500)
robot.turn(90)

print(hub.imu.heading())  # degrees; positive = clockwise; starts at 0
