/**
 *  @filename   :   epdif.h
 *  @brief      :   Header file of epdif.cpp providing EPD interface functions
 *                  Users have to implement all the functions in epdif.cpp
 *  @author     :   Yehui from Waveshare
 *
 *  Copyright (C) Waveshare     August 10 2017
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documnetation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to  whom the Software is
 * furished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef EPDIF_H
#define EPDIF_H

#include <Arduino.h>

// mapping suggestion for ESP32, e.g. LOLIN32, see .../variants/.../pins_arduino.h for your board
// NOTE: there are variants with different pins for SPI ! CHECK SPI PINS OF YOUR BOARD
// BUSY -> 4, RST -> 16, DC -> 17, CS -> SS(5), CLK -> SCK(18), DIN -> MOSI(23), GND -> GND, 3.3V -> 3.3V

// Pin definition
#define RST_PIN         16
#define DC_PIN          17
#define CS_PIN          5
#define BUSY_PIN        4

class EpdIf {
public:
    EpdIf(void);
    ~EpdIf(void);

    static int  IfInit(void);
    static void DigitalWrite(int pin, int value); 
    static int  DigitalRead(int pin);
    static void DelayMs(unsigned int delaytime);
    static void SpiTransfer(unsigned char data);
};

#endif
