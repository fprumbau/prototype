

//Temperatursensoren
#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 10

#include "MedianFilter.h"

MedianFilter filter(5, 5);

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

float Celcius=0;

void setup() {

  
  Serial.begin(115200);
  sensors.begin();
  
  Serial.println();
  Serial.println("setup");
  

}


void loop() {

  sensors.requestTemperatures();
  delay(750);

  float helo = sensors.getTempCByIndex(0);
  float next =  helo * 10;
  filter.in(next);
  Celcius = (filter.out() / 10.0);

  Serial.print(" C  ");
  Serial.print(Celcius, 1);
  Serial.print("   ");
  Serial.println(helo, 1);
  

}
