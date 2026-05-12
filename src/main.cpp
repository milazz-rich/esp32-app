#include <Arduino.h>

uint8_t BUZZER = 23;

uint32_t FREQUENCY = 400;

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  tone(BUZZER, FREQUENCY, 500);
  delay(1000);
}
