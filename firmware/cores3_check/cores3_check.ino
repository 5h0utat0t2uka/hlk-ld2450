#include <M5Unified.h>

void setup() {
  auto config = M5.config();
  config.internal_mic = false;
  config.internal_spk = false;
  M5.begin(config);

  M5.Display.setRotation(1);
  M5.Display.setBrightness(128);
  M5.Display.fillScreen(TFT_BLACK);
  M5.Display.setTextColor(TFT_WHITE, TFT_BLACK);
  M5.Display.setTextSize(2);
  M5.Display.setCursor(20, 20);
  M5.Display.println("CoreS3 Ready");
}

void loop() {
  M5.update();
  delay(10);
}
