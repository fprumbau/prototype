#include <GxEPD.h>
#include <GxGDEP015OC1/GxGDEP015OC1.cpp> //1,5" 152x152
#include <GxIO/GxIO_SPI/GxIO_SPI.cpp>
#include <GxIO/GxIO.cpp>

#include <Fonts/FreeSansBold24pt7b.h>

GxIO_Class io(SPI, SS, 22, 21);
GxEPD_Class display(io, 16, 4);

int counter = 0;

void setup() {

  display.init();
  

}

void loop() {

  counter++;
  showPartialUpdate(counter);
  delay(5000);
  
}

void showPartialUpdate(int ct){
  String ctStr = String(ct);
  const char* name = "FreeSansBold24pt7b";
  const GFXfont* f = &FreeSansBold24pt7b;

  uint16_t box_x = 60;
  uint16_t box_y = 50;
  uint16_t box_w = 90;
  uint16_t box_h = 100;
  uint16_t cursor_y = box_y + 16;

  display.setRotation(45);
  display.setFont(f);
  display.setTextColor(GxEPD_BLACK);

  display.fillRect(box_x, box_y, box_w, box_h, GxEPD_WHITE);
  display.setCursor(box_x, cursor_y+38);
  display.print(ctStr);
  display.updateWindow(box_x, box_y, box_w, box_h, true);
}
