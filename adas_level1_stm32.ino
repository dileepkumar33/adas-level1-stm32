#include <NewPing.h>

#define TRIG_PIN PA0
#define ECHO_PIN PA1
#define BUZZER_PIN PA5
#define LED_SAFE_PIN PA6
#define LED_ALERT_PIN PA7

#define SAFE_DISTANCE 20

NewPing sonar(TRIG_PIN, ECHO_PIN);

void setup() {
  Serial.begin(9600);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_SAFE_PIN, OUTPUT);
  pinMode(LED_ALERT_PIN, OUTPUT);
}

void loop() {
  delay(100);
  int distance = sonar.ping_cm();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance < SAFE_DISTANCE) {
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_ALERT_PIN, HIGH);
    digitalWrite(LED_SAFE_PIN, LOW);
  } else {
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_ALERT_PIN, LOW);
    digitalWrite(LED_SAFE_PIN, HIGH);
  }
}
