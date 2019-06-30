/**
 *  @filename   :   imagedata.cpp
 *  @brief      :   data file for epd demo
 *
 *  Copyright (C) Waveshare     August 7 2017
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

#include "imagedata.h"
#include <pgmspace.h>

const unsigned char IMAGE_BLACK[] PROGMEM = {
/* 0X00,0X01,0X98,0X00,0X98,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X0F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,
0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFE,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X07,0XFF,0XFD,0XFF,0XCF,0XFF,0XFF,
0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X03,0XFF,0XF8,0X7F,
0X87,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X03,
0XFF,0XF8,0XFF,0XC7,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0X00,0X78,0X03,0XFF,0XF8,0XFF,0XE7,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,0XF5,
0XFF,0XFF,0XFC,0X00,0XFB,0X83,0XFF,0XF9,0XFF,0XE3,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,
0XFF,0XFF,0X80,0X3F,0XFF,0XFC,0X01,0XF9,0XC3,0XFF,0XF8,0XFF,0XE3,0XFF,0XFF,0XFF,
0XFF,0XEF,0XFF,0XFF,0XFE,0X00,0X1F,0XFF,0XF8,0X01,0XD9,0XC3,0XFF,0XF8,0XFF,0XC7,
0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFC,0X00,0X0F,0XFF,0XF8,0X01,0XD9,0XC3,0XFF,
0XF8,0X7F,0X87,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFC,0X00,0X04,0XFF,0XF8,0X01,
0XD9,0XC3,0XFF,0XFC,0X3F,0X07,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XF8,0X00,0X00,
0XFF,0XF8,0X01,0XDB,0XC1,0XFF,0XFC,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,
0XF0,0X00,0X01,0XFF,0XF8,0X00,0XFF,0X81,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,
0XF7,0XFF,0XFF,0XF0,0X60,0X01,0XFF,0XF8,0X00,0X7F,0X81,0XFF,0XFF,0X80,0X7F,0XFF,
0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XF0,0X60,0X01,0XFF,0XF8,0X00,0X3E,0X01,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XE0,0X00,0X01,0XFF,0XF8,0X00,0X00,
0X01,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XE0,0X00,0X01,0XFF,
0XF8,0X01,0XC0,0X01,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0X20,
0X00,0X01,0XFF,0XF8,0X01,0XC0,0X01,0XFF,0XF1,0X9F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,
0XFF,0XFE,0X20,0X00,0X01,0XFF,0XF8,0X01,0XC0,0X01,0XFF,0XF3,0X9F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFB,0XFF,0XF8,0X20,0X00,0X01,0XFF,0XF8,0X00,0XE0,0X01,0XFF,0XF3,0X9F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XFF,0XF0,0X30,0X60,0X01,0XFF,0XF8,0X01,0XFF,0XC1,
0XFF,0XF1,0X9F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XFF,0XF0,0X10,0X70,0X01,0XFF,0XF8,
0X01,0XFF,0XC1,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XFF,0XE0,0X10,0X60,
0X03,0XFF,0XF8,0X01,0XFF,0XC1,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XFF,
0XC0,0X10,0X00,0X03,0XFF,0XF8,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFB,0XFF,0XC1,0XC8,0X00,0X03,0XFF,0XF8,0X00,0X00,0X01,0XFF,0XFF,0XC0,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFB,0XFF,0XC1,0XC4,0X00,0X07,0XFF,0XF8,0X00,0X00,0X01,0XFF,
0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFB,0XFF,0X81,0XC4,0X00,0X0F,0XFF,0XF8,0X00,
0X7F,0XC1,0XFF,0XFC,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFB,0XFF,0X80,0X82,0X00,0X1F,
0XFF,0XF8,0X00,0XFF,0XC1,0XFF,0XF8,0X33,0X07,0XFF,0XFF,0XFF,0XFF,0XFB,0XFF,0X80,
0X01,0X80,0X3F,0XFF,0XF8,0X01,0XFF,0XC1,0XFF,0XF8,0XF1,0XC7,0XFF,0XFF,0XFF,0XFF,
0XFD,0XFF,0X80,0X00,0X61,0XFF,0XFF,0XF8,0X01,0XD9,0X81,0XFF,0XF9,0XF9,0XE3,0XFF,
0XFF,0XFF,0XFF,0XFD,0XFF,0X80,0X00,0X0E,0XFF,0XFF,0XF8,0X01,0XD9,0XC1,0XFF,0XF9,
0XF9,0XE3,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0X80,0X00,0X00,0X7F,0XFF,0XF8,0X01,0XD9,
0XC1,0XFF,0XF8,0XF1,0XE3,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0X80,0X00,0X00,0XFF,0XFF,
0XF8,0X01,0XD9,0XC1,0XFF,0XF8,0X01,0XC7,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0X80,0X80,
0X00,0XFF,0XFF,0XF8,0X01,0XDF,0XC1,0XFF,0XFC,0X03,0XC7,0XFF,0XFF,0XFF,0XFF,0XFD,
0XFF,0X81,0XC0,0X00,0XFF,0XFF,0XF8,0X00,0XCF,0XC1,0XFF,0XFE,0X07,0XEF,0XFF,0XFF,
0XFF,0XFF,0XFD,0XFF,0XC1,0XC0,0X00,0XFF,0XFF,0XF8,0X00,0X07,0X81,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0XC1,0XC0,0X00,0XFF,0XFF,0XF8,0X00,0X00,0X01,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0XC0,0X00,0X00,0X7F,0XFF,0XF8,
0X00,0X00,0X01,0XFF,0XFF,0XFF,0XE7,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0XE0,0X00,0X00,
0X7F,0XFF,0XF8,0X00,0X7F,0XC1,0XFF,0XFE,0X0F,0XC7,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,
0XF0,0X00,0X02,0X3F,0XFF,0XF8,0X00,0XFF,0XC1,0XFF,0XFC,0X03,0XC7,0XFF,0XFF,0XFF,
0XFF,0XFE,0XFF,0XF0,0X00,0X07,0XFF,0XFF,0XF8,0X01,0XFF,0XC1,0XFF,0XF8,0X00,0XC7,
0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XF8,0X00,0X0F,0XFF,0XFF,0XF8,0X01,0XE0,0X01,0XFF,
0XF8,0XF0,0X67,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XF8,0X01,
0XC0,0X01,0XFF,0XF9,0XF8,0X27,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0X00,0X7F,0XFF,
0XFF,0XF8,0X01,0XC0,0X01,0XFF,0XF9,0XFE,0X07,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0XC0,0X01,0XFF,0XF9,0XFF,0X07,0XFF,0XFF,0XFF,0XFF,
0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X60,0X01,0XFF,0XF8,0XFF,0X87,0XFF,
0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,0XC1,0XFF,0XFC,
0X7F,0XC7,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,
0XC1,0XFF,0XFC,0XFF,0XE7,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF8,0X7F,0XFF,0XC1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X01,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X01,0XFF,0XFF,0XE3,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X01,
0XFF,0XFF,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
0X00,0X0F,0X01,0XFF,0XFF,0XF0,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0X0F,
0XFF,0XFF,0XF8,0X3C,0X3F,0X81,0XFF,0XFF,0XF8,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,
0XFF,0XFC,0XF3,0XFF,0XFF,0XF8,0X38,0X3F,0X81,0XFF,0XFF,0XFC,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X7F,0XFF,0XF3,0XFD,0XFF,0XFF,0XF8,0X38,0X73,0XC1,0XFF,0XFF,0XF8,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XEF,0XFE,0XFF,0XFF,0XF8,0X38,0X71,0XC1,0XFF,
0XFF,0XF8,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XDF,0XFF,0X7F,0XFF,0XF8,0X38,
0XE1,0XC1,0XFF,0XFF,0XF0,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XBF,0XFF,0XBF,
0XFF,0XF8,0X3C,0XE1,0XC1,0XFF,0XFF,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XFF,
0XBF,0XFF,0XBF,0XFF,0XF8,0X1F,0XC1,0XC1,0XFF,0XFF,0XE3,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XBF,0XFF,0X7F,0XFF,0XDF,0XFF,0XF8,0X1F,0XC3,0XC1,0XFF,0XFF,0XC7,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XBF,0XFF,0X7F,0XFF,0XDF,0XFF,0XF8,0X0F,0X87,0X81,0XFF,0XFF,
0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XFE,0XFF,0XFF,0XEF,0XFF,0XF8,0X00,0X00,
0X01,0XFF,0XFF,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XFE,0XFF,0XFF,0XEF,0XFF,
0XF8,0X00,0X00,0X01,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XFD,0XFF,
0X81,0XF7,0XFF,0XF8,0X00,0X78,0X01,0XFF,0XFF,0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XBF,0XFD,0XFF,0X01,0XF7,0XFF,0XF8,0X00,0XFB,0X81,0XFF,0XFF,0XC7,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XBF,0XFB,0XFF,0X3F,0XFB,0XFF,0XF8,0X01,0XF9,0XC1,0XFF,0XFF,0XC3,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XFB,0XFF,0XBF,0XFB,0XFF,0XF8,0X01,0XD9,0XC1,
0XFF,0XFF,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XFB,0XF8,0X01,0XFB,0XFF,0XF8,
0X01,0XD9,0XC1,0XFF,0XFF,0XF3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XF7,0XF8,0X01,
0XFB,0XFF,0XF8,0X01,0XD9,0XC1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,
0XF7,0XFF,0XFF,0XFD,0XFF,0XF8,0X01,0XDB,0XC1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XDF,0XF7,0XFF,0X31,0XFD,0XFF,0XF8,0X00,0XFF,0X81,0XFF,0XFF,0XFE,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XF7,0XFF,0X39,0XFD,0XFF,0XF8,0X00,0X7F,0X81,0XFF,
0XFE,0X1C,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XF7,0XFF,0X39,0XFD,0XFF,0XF8,0X00,
0X3E,0X01,0XFF,0XFC,0X08,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XEF,0XFF,0X19,0XFE,
0XFF,0XF8,0X00,0X00,0X01,0XFF,0XF8,0X00,0X87,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XEF,
0XFF,0X83,0XFE,0XFF,0XF8,0X01,0X00,0X01,0XFF,0XF8,0XE1,0XC7,0XFF,0XFF,0XFF,0XFF,
0XFF,0XDF,0XEF,0XFF,0XC7,0XFE,0XFF,0XF8,0X01,0XE0,0X01,0XFF,0XF9,0XE3,0XE3,0XFF,
0XFF,0XFF,0XFF,0XFF,0XDF,0XEF,0XFF,0XFF,0XFE,0XFF,0XF8,0X01,0XF8,0X01,0XFF,0XF9,
0XF3,0XE3,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XEF,0XFF,0XFF,0XFE,0XFF,0XF8,0X01,0XFF,
0X01,0XFF,0XF9,0XF3,0XE7,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XEF,0XFF,0X81,0XFE,0XFF,
0XF8,0X00,0X1F,0XC1,0XFF,0XF8,0XFF,0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XDF,0XFF,
0X01,0XFE,0XFF,0XF8,0X00,0X03,0XC1,0XFF,0XFC,0XFF,0X87,0XFF,0XFF,0XFF,0XFF,0XFF,
0XEF,0XDF,0XFF,0X3F,0XFF,0X7F,0XF8,0X00,0X03,0XC1,0XFF,0XFD,0XFF,0XCF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XEF,0XDF,0XFF,0XBF,0XFF,0X7F,0XF8,0X00,0X3F,0XC1,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XDF,0XFF,0X01,0XFF,0X7F,0XF8,0X01,0XFF,0X81,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XDF,0XFF,0X01,0XFF,0X7F,0XF8,
0X01,0XFC,0X01,0XFF,0XFF,0XFF,0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XDF,0XFF,0XFF,
0XFF,0X7F,0XF8,0X01,0XE0,0X01,0XFF,0XFE,0X07,0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,
0XDF,0XFF,0XFF,0XFF,0X7F,0XF8,0X01,0X00,0X01,0XFF,0XFC,0X03,0XC7,0XFF,0XFF,0XFF,
0XFF,0XFF,0XEF,0XDF,0XF9,0X01,0XFF,0X7F,0XF8,0X00,0X00,0X01,0XFF,0XF8,0X00,0XC7,
0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XDF,0XF9,0X01,0XFF,0X7F,0XF8,0X00,0X7F,0XC1,0XFF,
0XF8,0XF0,0X67,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XDF,0XFF,0XFF,0XFF,0X7F,0XF8,0X00,
0XFF,0XC1,0XFF,0XF9,0XFC,0X27,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XDF,0XFF,0XEF,0XFF,
0X7F,0XF8,0X01,0XFF,0XC1,0XFF,0XF9,0XFE,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XDF,
0XF8,0X01,0XFF,0X7F,0XF8,0X01,0XD9,0X81,0XFF,0XF9,0XFF,0X07,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF7,0XDF,0XF8,0X01,0XFF,0X7F,0XF8,0X01,0XD9,0XC1,0XFF,0XF8,0XFF,0X87,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF7,0XDF,0XFC,0XEF,0XFF,0X7F,0XF8,0X01,0XD9,0XC1,0XFF,0XFC,
0X7F,0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XDF,0XFE,0X6F,0XFF,0X7F,0XF8,0X01,0XD9,
0XC1,0XFF,0XFC,0XFF,0XE7,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XDF,0XFF,0X2F,0XFF,0X7F,
0XF8,0X01,0XDF,0XC1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XDF,0XFF,
0XCF,0XFF,0X7F,0XF8,0X00,0XCF,0XC1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF7,0XDF,0XFF,0XEF,0XFE,0XFF,0XF8,0X00,0X07,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF7,0XEF,0XFF,0XFF,0XFE,0XFF,0XF8,0X00,0X00,0X01,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XEF,0XF9,0XC3,0XFE,0XFF,0XF8,0X38,0X00,0X01,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XEF,0XF9,0X83,0XFE,0XFF,0XF8,
0X3F,0X00,0X01,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XEF,0XF9,0X99,
0XFE,0XFF,0XF8,0X3F,0XF0,0X01,0XFF,0XFF,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,
0XEF,0XF9,0X99,0XFE,0XFF,0XF8,0X07,0XFF,0X01,0XFF,0XFF,0XCF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFB,0XEF,0XF8,0X19,0XFE,0XFF,0XF8,0X00,0XFF,0XC1,0XFF,0XBF,0XEF,0XF3,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XF7,0XF8,0X1B,0XFD,0XFF,0XF8,0X00,0X0F,0XC1,0XFF,
0X8F,0XFF,0XE3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XF7,0XFF,0XFF,0XFD,0XFF,0XF8,0X00,
0X0F,0XC1,0XFF,0XCF,0X03,0XE7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XF7,0XFF,0XFF,0XFD,
0XFF,0XF8,0X00,0XFF,0XC1,0XFF,0XFC,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XF7,
0XFF,0XF9,0XFD,0XFF,0XF8,0X0F,0XFF,0X01,0XFF,0XF8,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFB,0XF7,0XFF,0XF9,0XFB,0XFF,0XF8,0X3F,0XF0,0X01,0XFF,0XF0,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFB,0XFB,0XFF,0XFF,0XFB,0XFF,0XF8,0X3F,0X00,0X01,0XFF,0XF0,
0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFB,0XFF,0XFF,0XFB,0XFF,0XF8,0X3F,0X00,
0X01,0XFF,0XE0,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFB,0XFF,0XFF,0XF7,0XFF,
0XF8,0X3F,0XF0,0X03,0XFF,0XE0,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFD,0XFF,
0XFF,0XF7,0XFF,0XF8,0X07,0XFE,0X03,0XFF,0XE0,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFD,0XFD,0XF8,0X01,0XF7,0XFF,0XF8,0X00,0X7F,0XC3,0XFC,0X40,0X00,0X0C,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFD,0XFE,0XF8,0X01,0XEF,0XFF,0XF8,0X00,0X0F,0XC3,0XFC,0X40,0X00,
0X0C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFD,0XFE,0XFD,0XFF,0XEF,0XFF,0XFC,0X00,0X0F,0XC3,
0XFF,0XE0,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0X7C,0XFF,0XDF,0XFF,0XFC,
0X00,0XFF,0XC3,0XFF,0XE0,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0X7F,0XFF,
0XDF,0XFF,0XFC,0X1F,0XFF,0XC3,0XFF,0XE0,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,
0XFF,0XBF,0XFF,0XBF,0XFF,0XFC,0X3F,0XFC,0X03,0XFF,0XF0,0X00,0X1F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFD,0XFF,0XBF,0XFF,0XBF,0XFF,0XFC,0X3F,0XE0,0X03,0XFF,0XF8,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XDF,0XFF,0X7F,0XFF,0XFC,0X3E,0X00,0X07,0XFF,
0XFC,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XEF,0XFE,0XFF,0XFF,0XFE,0X30,
0X00,0X07,0XFF,0XDE,0X00,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XF7,0XFD,0XFF,
0XFF,0XFE,0X00,0X00,0X07,0XFF,0X8F,0XC7,0XE3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,
0XF8,0XF3,0XFF,0XFF,0XFE,0X00,0X00,0X0F,0XFF,0X9F,0XFF,0XF3,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFE,0XFF,0XFF,0X0F,0XFF,0XFF,0XFF,0X00,0X00,0X0F,0XFF,0XBF,0XCF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,};

const unsigned char IMAGE_RED[] PROGMEM = {
/* 0X00,0X01,0X98,0X00,0X98,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,
0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,
0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,
0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,
0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,
0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X0A,
0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X00,0X7F,0XC0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X01,0XFF,0XE0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X03,0XFF,0XF0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X03,0XFF,0XFB,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X07,0XFF,0XFF,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,
0X0F,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF8,0X00,0X00,0X0F,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X0F,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X1F,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X1F,0XFF,0XFE,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0XDF,
0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
0X00,0X01,0XDF,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFC,0X00,0X07,0XDF,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X0F,0XCF,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X0F,0XEF,0XFF,0XFE,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X1F,0XEF,0XFF,
0XFC,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,
0X3F,0XEF,0XFF,0XFC,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFC,0X00,0X3F,0XF7,0XFF,0XFC,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X3F,0XFF,0XFF,0XF8,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X7F,0XFF,0XFF,0XF0,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,0XFF,0XFF,0XFC,0X00,0X7F,0XFF,0XFF,0XE0,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFC,0X00,0X7F,
0XFF,0XFF,0XC0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X0F,0XFF,
0XFE,0X00,0X7F,0XFF,0XFE,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFC,0X01,0XFF,0XFE,0X00,0X7F,0XFF,0XFD,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X80,0X7F,0XFE,0X00,0X7F,0XFF,0XFF,0X80,0X00,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X1F,0XFE,0X00,0X7F,0XFF,0XFF,0X00,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XFE,0X00,0X7F,0XFF,
0XFF,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X07,0XFE,
0X00,0X7F,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X80,0X03,0XFE,0X00,0X3F,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFC,0X01,0XE1,0XFE,0X00,0X3F,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X07,0XF1,0XFE,0X00,0X3F,0XFF,0XFF,0X80,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X3F,0XF1,0XFE,0X00,0X1F,0XFF,0XFF,
0X80,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFF,0XF1,0XFE,0X00,
0X0F,0XFF,0XFD,0XC0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF1,0XFF,0X00,0X0F,0XFF,0XF8,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X07,0XFF,0XF0,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XE0,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X3F,0XFF,0X00,0X00,0XFF,0X80,0X00,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X3F,0XFF,0X00,0X00,
0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X3F,
0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF8,0X00,0X3F,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF8,0XCC,0X7F,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XCE,0X3F,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XCE,0X3F,0XFF,0X00,0X00,0X00,
0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XC6,0X3F,0XFF,
0X80,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
0XC0,0X3F,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF8,0XE0,0X3F,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X60,0X7F,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0XFF,0XFF,0X80,0X00,0X00,0XF0,
0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,
0X00,0X03,0X6C,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X80,0X00,0X0D,0XFA,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X00,0X00,0X3F,0XFF,0X80,0X00,0X17,0XFD,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X3F,0XFF,0X80,0X00,0X2F,0XFE,0X80,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X3F,0XFF,0X80,0X00,0X5F,0XFF,0X40,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X3F,0XFF,0XC0,0X00,
0X7F,0XFF,0XC0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFC,0X7F,
0XFF,0XC0,0X00,0XBF,0XFF,0XA0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF8,0XFE,0X7F,0XFF,0XC0,0X00,0XFF,0XFF,0XE0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF8,0XFE,0X3F,0XFF,0XC0,0X01,0X7F,0XFF,0XD0,0X00,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFE,0X3F,0XFF,0XC0,0X01,0XFF,0XFF,0XF0,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X7C,0X3F,0XFF,0XC0,0X02,0XFF,
0XFF,0XE8,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X3F,0XFF,
0XC0,0X03,0XFF,0XFF,0XF8,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0X00,0X7F,0XFF,0XC0,0X05,0XFF,0XFF,0XF4,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0X00,0X7F,0XFF,0XC0,0X07,0XFF,0XFF,0XFC,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X81,0XFF,0XFF,0XC0,0X07,0XFF,0XFF,0XFC,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X0B,0XFF,0XFF,
0XFC,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,
0X0F,0XFF,0XFF,0XFA,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,
0X3F,0XFF,0XE0,0X0F,0XFF,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFC,0X00,0X3F,0XFF,0XE0,0X0F,0XFF,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X3F,0XFF,0XE0,0X0F,0XFF,0XFF,0XFE,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X3F,0XFF,0XE0,0X17,0XFF,0XFF,0XFD,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFF,0XFF,0XFF,0XE0,0X1F,
0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFF,0XFF,
0XFF,0XE0,0X1F,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF8,0XFF,0XFF,0XFF,0XE0,0X1F,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,0XE0,0X1F,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X3F,0XFF,0XF0,0X1F,0XFF,0XFF,0XFF,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X3F,0XFF,0XF0,0X2F,0XFF,
0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X3F,0XFF,
0XF0,0X3F,0XFF,0XFF,0XFE,0X80,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
0X00,0X3F,0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0X80,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X3F,0XFF,0XFF,
0XFF,0X80,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X3F,0XFF,0XF0,
0X3F,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,
0X3F,0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF8,0X00,0X3F,0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X3F,0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,
0X80,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XF8,0X3F,
0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,
0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFE,0X3F,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF8,0X00,0X3F,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X3F,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0X80,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X7F,0XFF,0XF8,0X3F,0XFF,
0XFF,0XFE,0X80,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0XFF,0XFF,
0XF8,0X2F,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X1F,0XFF,0XFF,0XFF,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X1F,0XFF,0XFF,
0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE1,0XFF,0XFF,0XFC,
0X1F,0XFF,0XFF,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC7,0X80,
0XFF,0XFF,0XFC,0X17,0XFF,0XFF,0XFD,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X8F,0X80,0X7F,0XFF,0XFC,0X0F,0XFF,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X8F,0X00,0X7F,0XFF,0XFC,0X0F,0XFF,0XFF,0XFE,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0X0C,0X3F,0XFF,0XFC,0X0F,0XFF,0XFF,0XFE,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0X1E,0X3F,0XFF,0XFC,0X0F,
0XFF,0XFF,0XFA,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8E,0X1E,0X3F,
0XFF,0XFC,0X0B,0XFF,0XFF,0XFC,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X86,0X1E,0X3F,0XFF,0XFC,0X07,0XFF,0XFF,0XFC,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X80,0X3E,0X3F,0XFF,0XFE,0X07,0XFF,0XFF,0XF4,0X00,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X3E,0X3F,0XFF,0XFE,0X05,0XFF,0XFF,0XF8,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X7C,0X3F,0XFF,0XFE,0X03,0XFF,
0XFF,0XF8,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0XFC,0X7F,0XFF,
0XFE,0X02,0XFF,0XFF,0XE8,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X01,0XFF,0XFF,0XF0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X01,0X7F,0XFF,0XD0,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0XFF,0XFF,0XE0,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0XBF,0XFF,
0XA0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0X00,0X7F,0XFF,0XC0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0X00,0X5F,0XFF,0X40,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X2F,0XFE,0X80,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X17,0XFD,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X0B,0XFA,0X00,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,
0X07,0X6C,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X00,0X00,0XF0,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,
0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X80,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,
0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X80,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,};
