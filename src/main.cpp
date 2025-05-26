#include <Arduino.h>
int pin[3] = {11, 12 ,13};
int time = 500;
void setup() {
    for(int i = 0; i < 3; i++) {
      pinMode(pin[i], OUTPUT);
    }
}
void loop() {
    for(int i = 0; i < 3; i++) {
      digitalWrite(pin[i], HIGH);
      delay(time);
      digitalWrite(pin[i], LOW);
      delay(time);
    }
}