#include <Arduino.h>

#define LED_PIN 2
#define RELAY_PIN 4

void setup() {
  Serial.begin(115200);       // Inicia la comunicación serie a 115200 baudios
  pinMode(LED_PIN, OUTPUT);   // Configura el pin 2 como salida
  pinMode(RELAY_PIN, OUTPUT); // Configura el pin 4 como salida
}
// esto es por el problema que tengo con inisir github en vsc
void loop() {
  digitalWrite(LED_PIN, HIGH);   // Enciende el LED
  digitalWrite(RELAY_PIN, HIGH); // Activa el relay
  Serial.println("LED encendido, Relay activado");
  delay(500);
  digitalWrite(LED_PIN, LOW);   // Apaga el LED
  digitalWrite(RELAY_PIN, LOW); // Desactiva el relay
  Serial.println("LED apagado, Relay desactivado");
  delay(500);
}
