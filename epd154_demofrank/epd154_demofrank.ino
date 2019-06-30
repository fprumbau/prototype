

// include library, include base class, make path known
#include <GxEPD.h>
// select the display class to use
//#include <GxGDEP015OC1/GxGDEP015OC1.h>
#include <GxGDEW0154Z17/GxGDEW0154Z17.h> //fast ok
#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>


// mapping suggestion for ESP32, e.g. LOLIN32, see .../variants/.../pins_arduino.h for your board
// NOTE: there are variants with different pins for SPI ! CHECK SPI PINS OF YOUR BOARD
// BUSY -> 4, RST -> 16, DC -> 17, CS -> SS(5), CLK -> SCK(18), DIN -> MOSI(23), GND -> GND, 3.3V -> 3.3V

//GxIO_Class io(SPI, 5/* CS */, 17/* DC */, 16/* RST */); 
//GxEPD_Class display(io, /*RST=D4*/ 16, /*BUSY=D2*/ 4);

GxIO_Class io(SPI, SS, 22, 21);
GxEPD_Class display(io, 16, 4);

// FreeFonts from Adafruit_GFX
#include <Fonts/FreeSansBold18pt7b.h>
#include <Fonts/FreeSansBold24pt7b.h>


void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println();
  Serial.println("setup");
  display.init();

  float humidity = 15.2;
  float temperature = 23.4;
  float dewpoint = 45.0;
  float waterFDP = 11.1;
  char dC[3] = {'°', 'C', 0};
  Serial.print("Current humdity = ");
  Serial.print(humidity);
  Serial.print("% ");
  Serial.print("temperature = ");
  Serial.print(temperature);
  Serial.print(dC);
  Serial.print(" water=");
  Serial.print(waterFDP);
  Serial.print("g/m3");
  Serial.print(" dewpoint = ");
  Serial.print(dewpoint);
  Serial.println(dC);

  uint16_t middleY = display.height() / 2;
  display.setRotation(3);
  display.fillScreen(GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&FreeSansBold24pt7b);
  display.setTextSize(2);
  display.setCursor(8, 72);
  display.print(temperature, 1);
  display.setFont(&FreeSansBold18pt7b);
  display.setTextSize(2);
  display.setCursor(16, 146);
  display.print(humidity, 1);
  display.setTextSize(1);
  display.print("%");
  display.setCursor(16, 198);
  display.print(dewpoint, 1);
  display.print("  ");
  display.print(5.0, 1);
  display.print("V");
  display.update();  
}

void loop() {





}
