#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  delay(1000);
  
  // スタートメニューを表示
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  delay(500);

  // シャットダウンする
  DigiKeyboard.sendKeyStroke(KEY_U);
  delay(400);
  DigiKeyboard.sendKeyStroke(KEY_U);
  delay(1000);
}

void loop() {
}
