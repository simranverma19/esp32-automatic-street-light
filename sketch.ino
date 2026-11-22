/*
  PROJECT: AUTOMATIC STREET LIGHT
  Board: ESP32
  Author: Simran
  Branch: Electrical and Electronics Engineering
*/

#define LDR_PIN 34
#define LED_PIN 2

int threshold = 2000;

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
}

void loop() {

  int lightValue = analogRead(LDR_PIN);

  Serial.print("Light Sensor Value: ");
  Serial.println(lightValue);

  if (lightValue > threshold) {

    digitalWrite(LED_PIN, HIGH);
    Serial.println("DARK - STREET LIGHT ON");

  } else {

    digitalWrite(LED_PIN, LOW);
    Serial.println("BRIGHT - STREET LIGHT OFF");

  }

  delay(500);
}
