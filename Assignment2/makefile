sourcefile = led
port = /dev/ttyUSB0
baudrate = 57600
executable = led
programmerid = arduino
partnumber = atmega328p
CC = avr-gcc

program : compile
	avrdude -P $(port) -b $(baudrate) -c $(programmerid) -p $(partnumber) -D -U flash:w:$(executable).hex

compile : $(sourcefile).c
	$(CC) -g -Os -Wall -mcall-prologues -mmcu=$(partnumber) -fno-exceptions -o $(executable).o $(sourcefile).c
	avr-objcopy -R .eeprom -O ihex $(executable).o $(executable).hex

.PHONY : clean
clean :
	-@rm -f $(executable).o $(executable).hex