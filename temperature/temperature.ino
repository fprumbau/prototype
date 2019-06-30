

//Temperatursensoren
#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 5

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
  Celcius = sensors.getTempCByIndex(0);
  Serial.print(" C  ");
  Serial.println(Celcius);
  
  delay(3000);
}
