#ifndef Pins_H
#define Pins_H
#include "arduino.h"
class Pins
{
    public:
         Pins();
         Pins(int pi,int pf);
         ~Pins();
         int getPin_initial();
         int getPin_final();
         void buildUpTension();
         void setAllLEDs(int intens);
         int pin_initial;
         int pin_final;
         
};
#endif
