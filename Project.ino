#include "Dice.h"



// set to 1 if we're debugging
#define DEBUG 0

// 6 consecutive digital pins for the LEDs
Pins P(2,7);


// pin for the button switch
int button = 12;
// value to check state of button switch
int pressed = 0;

void setup() {
  // set all LED pins to OUTPUT
  for (int i=P.getPin_initial(); i<=P.getPin_final(); i++) {
    pinMode(i, OUTPUT);
  }
  // set buttin pin to INPUT
  pinMode(button, INPUT);
  
  // initialize random seed by noise from analog pin 0 (should be unconnected)
  randomSeed(analogRead(0));

  // if we're debugging, connect to serial 
  #ifdef DEBUG
    Serial.begin(9600);
  #endif

}

void loop() {
  // if button is pressed - throw the dice
  pressed = digitalRead(button);

  if (pressed == HIGH) {
    // remove previous number
    P.setAllLEDs(LOW);
    P.buildUpTension();
    Dice Z(P.getPin_initial(),P.getPin_final());
    Z.DisplayNumber();
  } 

}
