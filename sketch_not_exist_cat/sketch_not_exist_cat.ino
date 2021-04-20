#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  delay(1000);
  
  // 「ファイル名を指定して実行」を起動
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(1000);

  // 存在しない猫を見せる
  DigiKeyboard.print("https\'//thiscatdoesnotexist.com/");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1500);

  // 画面を最大化する
  DigiKeyboard.sendKeyStroke(KEY_F11);
  delay(500);
}

void loop() {
  // 10秒おきに更新をかける
  delay(10000);
  DigiKeyboard.sendKeyStroke(KEY_F5);
}
