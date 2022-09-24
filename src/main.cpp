#include <Arduino.h>

#include "Pixie_Chroma.h"

PixieChroma pix;

void setup() {
  delay(5000);

  Serial.begin(115200);
  delay(1000);
  Serial.println("hello world");

  pix.begin(16, 3, 1);
  pix.set_brightness(10);

  pix.clear();
  pix.color(CRGB(0xff, 0xa5, 0x00));
  pix.print("[:HEART:][:HEART:]");
  pix.show();

  pix.delay(1000);

  pix.clear();

  xpix.delay(1);
}

void loop() {
  static int i = 0;

  pix.clear();
  pix.print(i++);
  pix.show();
  pix.delay(1);
}



