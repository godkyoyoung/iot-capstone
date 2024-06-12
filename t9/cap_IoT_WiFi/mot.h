#include <Arduino.h>

#define mot_OFF 0
#define mot_ON 1

class mot {
  private:
    int pinA;
    int pinB;
    byte state;

  public:
    mot(int pinA, int pinB);
    void init();
    void on();
    void off();
    byte getState();
};