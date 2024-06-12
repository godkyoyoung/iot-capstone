#include "Pump.h"

Pump::Pump(int pinA, int pinB) {
  // Use 'this->' to make the difference between the
  // 'pin' attribute of the class and the 
  // local variable 'pin' created from the parameter.
  this->pinA = pinA;
  this->pinB = pinB;
  init();
}
void Pump::init() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  // Always try to avoid duplicate code.
  // Instead of writing digitalWrite(pin, LOW) here,
  // call the function off() which already does that
  off();
  state = PUMP_OFF;
}
void Pump::on() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  delay(1000);
  state = PUMP_ON;
}
void Pump::off() {
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  state = PUMP_OFF;
}

byte Pump::getState() {
  return state;
}