#include <DigiMouse.h>

void setup() {
   pinMode(1, OUTPUT);
   DigiMouse.begin();
}

void loop() {
  DigiMouse.delay(50000);

  digitalWrite(1, HIGH);

  DigiMouse.moveX(2);
  DigiMouse.delay(100);
  DigiMouse.moveX(-2);
  
  digitalWrite(1, LOW);
}
