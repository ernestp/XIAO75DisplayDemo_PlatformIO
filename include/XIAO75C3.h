#ifndef _XIAO75C3_H_
#define _XIAO75C3_H_

#include "Arduino.h"

// E-Paper Display Pinout Definitions
// Pin assignments for the XIAO controller connected to the GDEY075T7 display

// Control Pins
#define EPD_BUSY_PIN D2  // BUSY signal pin
#define EPD_RST_PIN  D0  // Reset pin
#define EPD_DC_PIN   D3  // Data/Command control pin
#define EPD_CS_PIN   D1  // Chip Select pin

// SPI Pins (automatically handled by SPI library)
// SCK  -- GPIO23 (SCLK)
// MOSI -- GPIO18 (SDIN)

#endif // _XIAO75C3_H_
