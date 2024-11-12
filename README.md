# Arduino Countdown Timer with 7-Segment Display

This repository contains code for an Arduino-based countdown timer using an Adafruit 7-segment display with an HT16K33 backpack. The timer counts down from 100 seconds to 0 and then blinks three times before halting.

## Features
- Counts down from 100 to 0 seconds.
- Blinks the display three times when the countdown reaches zero.
- Easy-to-read 7-segment display interface.

## Components Required
- Arduino board (e.g., Uno, Mega)
- Adafruit 7-segment display with HT16K33 backpack
- Jumper wires for connections

## Wiring
Connect the 7-segment display to the Arduino using the I2C interface:

| Arduino Pin | 7-Segment Display Pin |
|-------------|------------------------|
| SDA         | SDA                    |
| SCL         | SCL                    |
| 5V          | VCC                    |
| GND         | GND                    |

## Installation and Setup
1. **Arduino IDE**: Ensure the [Arduino IDE](https://www.arduino.cc/en/software) is installed.
2. **Libraries**:
   - Install the `Adafruit GFX Library` and `Adafruit LED Backpack Library` through the Arduino Library Manager.
3. **Upload the Code**:
   - Copy the code from `main.ino` (provided in this repository) to your Arduino IDE.
   - Connect the Arduino to your computer.
   - Upload the code.

## Code Explanation
The code operates as follows:
- **Initialization**: The `setup()` function initializes the I2C communication with the display.
- **Countdown**: The `loop()` function counts down from 100 to 0, updating the dis
