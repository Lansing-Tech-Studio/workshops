from pybricks.hubs import PrimeHub
from pybricks.pupdevices import Motor, ColorSensor
from pybricks.parameters import Port, Direction
from pybricks.robotics import DriveBase
from pybricks.tools import wait

hub = PrimeHub()
# Same setup as Day 1 — use YOUR calibrated values and verified ports/Direction.
left = Motor(Port.A, Direction.COUNTERCLOCKWISE)
right = Motor(Port.B)
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)

line_sensor = ColorSensor(Port.D)

# CALIBRATE: point the sensor at the line, then the floor; read
# line_sensor.reflection() for each and fill these in.
BLACK = 10
WHITE = 80
threshold = (BLACK + WHITE) / 2

GAIN = 1.2            # TUNE: too low = sloppy, too high = wobbly
DRIVE_SPEED = 100     # mm/s

while True:
    deviation = line_sensor.reflection() - threshold
    robot.drive(DRIVE_SPEED, GAIN * deviation)
    wait(10)
