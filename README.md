# XIAO75DisplayDemo_Arduino

[XIAO 7.5" ePaper Panel](https://www.seeedstudio.com/XIAO-7-5-ePaper-Panel-p-6416.html) Fast refresh / Partial refresh demo.

Project is based on [Good Display](https://www.good-display.com) [GDEY075T7](https://www.good-display.com/product/396.html) 7.5-inch e-paper display [Arduino code sample](https://www.good-display.com/companyfile/687.html).


## Hardware Requirements

- [XIAO microcontroller board with 7.5-inch ePaper Panel](https://www.seeedstudio.com/XIAO-7-5-ePaper-Panel-p-6416.html)
- [GDEY075T7 7.5-inch e-paper display](https://www.good-display.com/product/396.html)
- Appropriate wiring connections (see DisplayPinout.h for pin configuration)

## Features

- Full screen refresh functionality
- Fast refresh mode (1.5s)
- Partial refresh demonstration
- Time display demo with different refresh modes
- Deep sleep support to preserve display lifespan
- Optional 180-degree rotation mode

## Getting Started

Connect your XIAO 7.5" ePaper Panel to your computer using a USB cable.

Install `esp32 by Espressif Systems` board in the board manager.

Select port and `XIAO C3` board type in the Arduino IDE.

Compile and upload the sketch to your board.

### Dependencies

This project requires the following libraries:
- [Arduino IDE](https://www.arduino.cc/en/software)
- In Board Manager, install `esp32 by Espressif Systems`
- SPI (built into Arduino IDE)
- Custom display libraries included in this repository:
  - Display_EPD_W21.h
  - Display_EPD_W21_spi.h
  - Ap_29demo.h

### Modifying the code

If use different hardware (different pinout) - create a new header file, specific for your pinout and include it in the `DisplayPinout.h` file. Use XIAOC3.h as an example.

### Installation

1. Clone this repository or download the source files
2. Open the `XIAO75DisplayDemo_Arduino.ino` sketch in the Arduino IDE
3. Select your XIAO board from the board manager
4. Upload the sketch to your board

## Usage

The default sketch demonstrates:
1. Full screen clearing
2. Full screen image display
3. Fast refresh mode
4. Partial refresh for updating specific screen areas (like a clock)

## Important Notes

As mentioned in the code comments:
1. Flickering is normal during full screen updates
2. No flicker occurs during partial refresh
3. EPD must enter sleep mode after refresh to ensure display lifespan
4. Re-initialization is required for every full screen update
5. BUSY pin should be set to input mode, with other pins in output mode

## License

This project is licensed under the Apache License 2.0 - see the [LICENSE](LICENSE) file for details.

## Credits

- Hardware:
  - [Seeed Studio](https://www.seeedstudio.com) - XIAO ESP32-C3 microcontroller and ePaper Panel design
  - [Good Display](https://www.good-display.com) - GDEY075T7 7.5-inch e-paper display
- Documentation sources:
  - [Seeed Studio XIAO 7.5" ePaper Panel product page](https://www.seeedstudio.com/XIAO-7-5-ePaper-Panel-p-6416.html)
  - [Good Display GDEY075T7 product page](https://www.good-display.com/product/396.html)
