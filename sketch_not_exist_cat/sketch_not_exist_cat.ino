#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);
  
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
  delay(2000);

  // 画面を最大化する
  DigiKeyboard.sendKeyStroke(KEY_F11);
}

void loop() {
  // 10秒待機
  delay(10000);
  digitalWrite(1, HIGH);

  // 更新をかける
  DigiKeyboard.sendKeyStroke(KEY_F5);
  delay(100);

  // LED消灯
  digitalWrite(1, LOW);  
}
