# XIAO75DisplayDemo_PlatformIO

[XIAO 7.5" ePaper Panel](https://www.seeedstudio.com/XIAO-7-5-ePaper-Panel-p-6416.html) Fast refresh / Partial refresh demo.

Project is based on [Good Display](https://www.good-display.com) [GDEY075T7](https://www.good-display.com/product/396.html) 7.5-inch e-paper display [Arduino code sample](https://www.good-display.com/companyfile/687.html), converted to PlatformIO format.


## Hardware Requirements
- [XIAO microcontroller board with 7.5-inch ePaper Panel](https://www.seeedstudio.com/XIAO-7-5-ePaper-Panel-p-6416.html)

**Or**
- Bring your own microcontroller board
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

### PlatformIO

This project uses PlatformIO as the build system. To build and upload this project:

1. Install PlatformIO Core or PlatformIO IDE extension for VS Code
2. Clone this repository
3. Open the project folder in PlatformIO IDE or VS Code with PlatformIO extension
4. Connect your XIAO board to your computer
5. Click on the Upload button or run `pio run -t upload` in the terminal

### Project Structure

- `src/`: Contains source files (`.cpp`)
  - `main.cpp`: Main application code
  - `Display_EPD_W21.cpp`: E-Paper display driver implementation
  - `Display_EPD_W21_spi.cpp`: E-Paper display SPI communication implementation
- `include/`: Contains header files (`.h`)
  - `DisplayPinout.h`: Hardware pinout definitions
  - `XIAO75C3.h`: XIAO ESP32-C3 specific pin definitions
  - `Display_EPD_W21.h`: E-Paper display driver header
  - `Display_EPD_W21_spi.h`: E-Paper display SPI communication header
  - `Ap_29demo.h`: Demo image data and assets

Connect your XIAO 7.5" ePaper Panel to your computer using a USB cable.

Use PlatformIO to build and upload the project as described in the PlatformIO section above.

### Dependencies

All dependencies are managed through PlatformIO:

- PlatformIO Core or VS Code with PlatformIO Extension
- The project automatically installs:
  - espressif32 platform
  - Arduino framework for ESP32
  - SPI library

- Custom display libraries are included in the project structure:
  - Display_EPD_W21.h and Display_EPD_W21.cpp
  - Display_EPD_W21_spi.h and Display_EPD_W21_spi.cpp
  - Ap_29demo.h (image data)

### Modifying the code

If you use different hardware (different pinout):

1. Create a new header file in the `include` directory, specific for your pinout
2. Include it in the `DisplayPinout.h` file
3. Use `XIAO75C3.h` as an example

When adding new source files (.cpp), place them in the `src` directory. Header files (.h) should go in the `include` directory to maintain the PlatformIO project structure.

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
