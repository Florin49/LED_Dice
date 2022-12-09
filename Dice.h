#ifndef Dice_H
#define Dice_H


#include "Pins.h"
#include "arduino.h"

class Dice: public Pins
{
  public:
      int number;
      Dice();
      Dice(int ,int);
      ~Dice();
      void DisplayNumber();
      
      
};



#endif
