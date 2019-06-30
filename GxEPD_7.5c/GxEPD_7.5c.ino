
// mapping suggestion for ESP32, e.g. LOLIN32, see .../variants/.../pins_arduino.h for your board
// NOTE: there are variants with different pins for SPI ! CHECK SPI PINS OF YOUR BOARD
// BUSY -> 4, RST -> 16, DC -> 17, CS -> SS(5), CLK -> SCK(18), DIN -> MOSI(23), GND -> GND, 3.3V -> 3.3V

/*
#define ENABLE_GxEPD2_GFX 1
#include <GxEPD2_BW.h>
#include <GxEPD2_3C.h>
#include <Fonts/FreeMonoBold9pt7b.h>
GxEPD2_3C<GxEPD2_154c, GxEPD2_154c::HEIGHT> display(GxEPD2_154c(15,17,16,4));
*/


// include library, include base class, make path known
#include <GxEPD.h>
#include <GxGDEW075Z09/GxGDEW075Z09.h>    // 7.5" b/w/r
// FreeFonts from Adafruit_GFX
#include <Fonts/FreeMonoBold9pt7b.h>
#include <Fonts/FreeMonoBold12pt7b.h>
#include <Fonts/FreeMonoBold18pt7b.h>
#include <Fonts/FreeMonoBold24pt7b.h>


#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSans18pt7b.h>
#include <Fonts/FreeSans24pt7b.h>
#include <Fonts/FreeSansBold24pt7b.h>

#include "fonts.h"


#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>

GxIO_Class io(SPI, /*CS=5*/ 15, /*DC=*/ 17, /*RST=*/ 16); // arbitrary selection of 17, 16
GxEPD_Class display(io, /*RST=*/ 16, /*BUSY=*/ 4); // arbitrary selection of (16), 4


void setup() {

  
  Serial.begin(115200);
  Serial.println();
  Serial.println("setup");
  
  delay(100);
  display.init(115200);

  display.fillScreen(GxEPD_WHITE);
  
  display.setTextColor(GxEPD_BLACK);
  display.setCursor(0, 39);
  display.setFont(&Lato_Bold_60);
  display.print("25,2");
  
  display.setTextColor(GxEPD_RED);
  display.setCursor(125, 35);
  display.setFont(&FreeSansBold24pt7b);
  display.print("<");
  
  display.setTextColor(GxEPD_BLACK);
  display.setCursor(0, 93);
  display.setFont(&Lato_Bold_60);
  display.print("27,1°");
  
  display.setTextColor(GxEPD_RED);
  display.setCursor(125, 83);
  display.setFont(&FreeSansBold24pt7b);
  display.print(">");

  display.setCursor(0, 97);
  display.setFont(&FreeSans18pt7b);
  display.print("_______");

  display.setCursor(0, 124);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&FreeSans12pt7b);
  display.print("+ 1280W");
  display.setTextColor(GxEPD_RED);
  
  //display.setCursor(125, 127);
  //display.setFont(&FreeSansBold24pt7b);
  //display.print("<");

  display.setFont(&FreeSans18pt7b);
  display.setCursor(0, 124);
  display.print("_______");

  display.setFont(&FreeSans12pt7b);
  display.setCursor(0, 151);
  display.setTextColor(GxEPD_BLACK);
  display.print("51cm / 16C");
  

  display.setFont(&Dialog_plain_120);
  display.setCursor(160,160);
  display.print("Eine längere Schrift, mal schauen.");

  display.update();
  
  delay(5000);
  
}


void loop() {
  // put your main code here, to run repeatedly:

}
