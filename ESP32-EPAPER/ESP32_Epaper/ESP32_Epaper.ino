    /////////////////////////////////////////////////////////////////
   //             ESP32 E-PAPER THERMOMETER             v1.00     //
  //       Get the latest version of the code here:              //
 //        http://educ8s.tv/esp32-e-paper-thermometer           //
/////////////////////////////////////////////////////////////////

#include <GxEPD.h>

//#include <GxGDEP015OC1/GxGDEP015OC1.h> //nix
#include <GxGDEW0154Z17/GxGDEW0154Z17.h> //fast ok
//#include <GxGDEW0154Z04/GxGDEW0154Z04.h>  //Verzerrt

#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>
//#include <OneWire.h>
//#include <DallasTemperature.h>
#include "BitmapGraphics.h"

#include <Fonts/FreeSansBold24pt7b.h>

float tempC = 0;

//OneWire oneWire(ONE_WIRE_BUS);
//DallasTemperature sensors(&oneWire);

GxIO_Class io(SPI, SS, 22, 21);
GxEPD_Class display(io, 16, 4);

const char* name = "FreeSansBold24pt7b";
const GFXfont* f = &FreeSansBold24pt7b;

void setup() {
  
  Serial.begin(115000);
  display.init(115000);
  //sensors.begin();
  
  display.drawExampleBitmap(gImage_splash, 0, 0, 200, 200, GxEPD_RED);
  display.update();
  //delay(3000);
  
  //display.drawExampleBitmap(gImage_gui, 0, 0, 200, 200, GxEPD_BLACK);
  //display.update();

  display.setRotation(45);
  display.setFont(f);
}

void loop() {
  
  //sensors.requestTemperatures();
  tempC+=3.7;
  
  showPartialUpdate(tempC);
  printTemperatureToSerial();

  
  delay(10000);
}

void showPartialUpdate(float temperature)
{
  String temperatureString = String(temperature,1);
  
  
  //display.fillRect(box_x, box_y, box_w, box_h, GxEPD_WHITE);
  display.fillScreen(GxEPD_WHITE);
  display.drawExampleBitmap(gImage_splash, 0, 0, 200, 200, GxEPD_RED);
  display.setTextColor(GxEPD_BLACK);
  display.setCursor(20,70);
  display.print(temperatureString); 
  
  //display.updateWindow(box_x, box_y, box_w, box_h, true);
  
  display.update();
  //display.powerDown();
}

void printTemperatureToSerial()
{
  Serial.print(tempC);
  Serial.print(" C");
  Serial.print("\t");
}
