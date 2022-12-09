#include "Pins.h"


Pins::Pins()
{
  pin_initial=0;
  pin_final=0;
}
Pins::Pins(int pi,int pf)
{
  pin_initial=pi;
  pin_final=pf;
}
Pins::~Pins()
{
  
}
int Pins::getPin_initial()
{
  return pin_initial;
}
int Pins::getPin_final()
{
  return pin_final;
}
void Pins::buildUpTension() {
  
  // left to right
  for (int i=pin_initial; i<=pin_final; i++) {
    if (i!=pin_initial) {
      digitalWrite(i-1, LOW);
    }
    digitalWrite(i, HIGH);
    delay(100);
  }
  // right to left
  for (int i=pin_final; i>=pin_initial; i--) {
    if (i!=pin_final) {
      digitalWrite(i+1, LOW);
    }
    digitalWrite(i, HIGH);
    delay(100);
  }
}
void Pins::setAllLEDs(int value)
{
  for (int i=pin_initial; i<=pin_final; i++) 
    digitalWrite(i, value);
}
