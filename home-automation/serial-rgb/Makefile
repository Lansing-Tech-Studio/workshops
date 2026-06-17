# Uncomment lines below if you have problems with $PATH
#SHELL := /bin/bash
#PATH := /usr/local/bin:$(PATH)

.PHONY: all upload monitor clean program uploadfs update

all:
	pio run -e esp32dev

upload:
	pio run -e esp32dev --target upload

monitor:
	pio run -e esp32dev --target upload --target monitor

clean:
	pio run -e esp32dev --target clean

program:
	pio run -e esp32dev --target program

uploadfs:
	pio run -e esp32dev --target uploadfs

update:
	pio run -e esp32dev --target update
