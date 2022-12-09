#include "Dice.h"



Dice::Dice()
{
  pin_initial=0;
  pin_final=0;
  number=0;
}
Dice::Dice(int pi,int pf)
{
     pin_initial=pi;
     pin_final=pf;
     number=random(1,7);
     #ifdef DEBUG
        Serial.println(number);
     #endif
}
Dice::~Dice()
{
  
}
void Dice::DisplayNumber()
{
  for(int i=0;i<number;i++)
     digitalWrite(pin_initial+i, HIGH);
  
}
