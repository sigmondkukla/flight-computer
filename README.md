# flight-computer

Custom flight computer for rocket control systems development.

## Features
- STM32H523 MCU in 100-pin LQFP package
    - Single precision FPU
- USB-C port for serial communication (VCOM), data transfer (USB mass storage), programming (DFU), and power while debugging
- 2S Lithium battery support with battery, 5V, and 3.3V power rails
- STMicroelectronics sensors for state estimation:
    - LPS22HH barometer
    - LIS2MDL magnetometer
    - LSM6DSV80X IMU with gyroscope, low-G accelerometer, and high-G accelerometer
- u-blox MAX-M10S GPS reciever
- On-board 128Mb (16MB) Quad-IO flash memory for in-flight logging and SD card slot for data export
- Seeed Wio-SX1262 915 MHz LoRa radio module with 22 dBm Tx power
- 2 18A (upgradeable to 40A) pyro channels with low-current continuity detection and debug LEDs
- 2 banks of two PWM/servo control headers with selectable 5V or battery power supply voltage
- Camera load switch and UART header to control Walksnail Avatar HD Mini 1s
- User interface with two push buttons, a PWM-controlled RGB LED, an 85 dB buzzer, and an SSD1306 I2C OLED display header
- Qwiic I2C header, UART header, and GPIO expansion header with 6 spare GPIOs
