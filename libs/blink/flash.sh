#!/bin/bash
avr-gcc -w -Os -DF_CPU=1000000UL -mmcu=attiny2313 -c -o main.o main.c
avr-gcc -w -mmcu=attiny2313 main.o -o main
avr-objcopy -O ihex -R .eeprom main main.hex
avrdude -cusbasp -pt2313 -U flash:w:main.hex
