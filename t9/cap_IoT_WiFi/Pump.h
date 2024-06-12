#include <Arduino.h>

#define PUMP_OFF 0
#define PUMP_ON 1

class Pump {
  private:
    int pinA;
    int pinB;
    byte state;

  public:
    Pump(int pinA, int pinB);
    void init();
    void on();
    void off();
    byte getState();
};