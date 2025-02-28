#include <Arduino.h>
// Definisi pin untuk LED
#define LED_GREEN 33  // Lampu hijau di GPIO 33
#define LED_RED 25    // Lampu merah di GPIO 25
#define LED_YELLOW 14 // Lampu kuning di GPIO 14

void setup() {
  // Atur pin LED sebagai output
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
}

void loop() {
  // 1. Lampu Merah menyala (3 detik)
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_GREEN, LOW);
  delay(3000);

  // 2. Lampu Kuning menyala (3 detik)
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_YELLOW, HIGH);
  digitalWrite(LED_GREEN, LOW);
  delay(3000);

  // 3. Lampu Hijau menyala (3 detik)
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_GREEN, HIGH);
  delay(3000);
}
