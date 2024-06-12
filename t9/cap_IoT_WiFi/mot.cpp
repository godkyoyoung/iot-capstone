#include "mot.h"

mot::mot(int pinA, int pinB) {
  // Use 'this->' to make the difference between the
  // 'pin' attribute of the class and the 
  // local variable 'pin' created from the parameter.
  this->pinA = pinA;
  this->pinB = pinB;
  init();
}
void mot::init() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  // Always try to avoid duplicate code.
  // Instead of writing digitalWrite(pin, LOW) here,
  // call the function off() which already does that
  off();
  state = mot_OFF;
}
void mot::ona() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  delay(1000);
  state = mot_ON;
}
void mot::onb() {
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  delay(1000);
  state = mot_ON;
}
void mot::off() {
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  state = mot_OFF;
}

byte Pump::getState() {
  return state;
}