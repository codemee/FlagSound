#include "FlagSound.h"

void setup()
{
  startPlaySound();
}

void loop()
{
  updateSound(analogRead(A5) / 4);
}


