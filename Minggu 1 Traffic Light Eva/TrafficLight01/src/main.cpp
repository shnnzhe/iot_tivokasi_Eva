#include <Arduino.h>  // Wajib ditambahkan agar PlatformIO mengenali fungsi Arduino

void setup() {
  // Setup hanya dijalankan sekali
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  pinMode(23, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(21, OUTPUT);
}

void loop() {
  // Menyalakan LED pada pin 23, mematikan lainnya
  digitalWrite(23, HIGH);
  digitalWrite(22, LOW);
  digitalWrite(21, LOW);
  delay(500);

  // Menyalakan LED pada pin 22, mematikan lainnya
  digitalWrite(23, LOW);
  digitalWrite(22, HIGH);
  digitalWrite(21, LOW);
  delay(500);

  // Menyalakan LED pada pin 21, mematikan lainnya
  digitalWrite(23, LOW);
  digitalWrite(22, LOW);
  digitalWrite(21, HIGH);
  delay(500);
}
