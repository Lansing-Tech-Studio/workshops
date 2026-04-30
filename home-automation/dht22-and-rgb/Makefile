# Uncomment lines below if you have problems with $PATH
#SHELL := /bin/bash
#PATH := /usr/local/bin:$(PATH)

.PHONY: all upload monitor flash clean program uploadfs update test

all:
	pio run -e esp32dev

upload:
	pio run -e esp32dev --target upload

# Attach to the serial monitor only (no rebuild/upload noise).
monitor:
	pio device monitor -e esp32dev

# Upload then attach to the monitor (previous `monitor` behavior).
flash:
	pio run -e esp32dev --target upload --target monitor

clean:
	pio run -e esp32dev --target clean

program:
	pio run -e esp32dev --target program

uploadfs:
	pio run -e esp32dev --target uploadfs

update:
	pio run -e esp32dev --target update

test:
	pio run -e native --target clean
	pio test -e native
