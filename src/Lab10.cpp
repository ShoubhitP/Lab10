/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/shoubhitsstuff/Desktop/Lab10/src/Lab10.ino"
void setup();
void loop();
#line 1 "/Users/shoubhitsstuff/Desktop/Lab10/src/Lab10.ino"
#define led D5
#define btn D2

SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);

  Serial.begin(9600);

  while (!Serial.isConnected()) {

    Serial.println("Connect the argon into the computer.");

  }
  Serial1.begin(9600);
}

void loop() {
  if (Serial1.available()) {
    char value = Serial1.read();
    Serial.println(value);
    if (value == '0') {
      digitalWrite(led, LOW);
    } else if (value == '1') {
      digitalWrite(led, HIGH);
    } else if (value == '?') {
      Serial1.println(digitalRead(btn));
    }
  }

}

    






