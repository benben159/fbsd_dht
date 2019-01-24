# FreeBSD DHT11/DHT22/AM2302 sensor reading program

This program is a slightly modified version of [Adafruit's Python DHT library](https://github.com/adafruit/Adafruit_Python_DHT)
but with FreeBSD's native libgpio library. Run `./build.sh` to build the program. Output executable is `test_dht11`. 
The GPIO pin and sensor type parameter is hardcoded in `main.c`, so change it accordingly. This program is tested with
DHT11 and a Raspberry Pi 1 board.

## TODO list

* add GPIO pin and sensor type argument for running the program
* different single board computer CPU might have different clock. Several variables in `pi_dht_read.c` must be rechecked for different CPU clock

