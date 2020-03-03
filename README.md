# FlagSound

This is a llibrary derived from [damellis PCM library](https://github.com/damellis/PCM) to playback sound recieved from a microphone pluggrd in analog pins of Arduino UNO/NANO.

Since it use the timer interrupt of Arduino, the speaker should be controled by Pin 11.The usage of this library is quite eazy:

```c++
#include "FlagSound.h" // include the library header file.

void setup()
{
  startPlaySound();    // turn the play back funcion enable.
}

void loop()
{
  // you should update the sound data periodically.since
  // the underlying sound playing in 8bit data/8KHz,
  // you should mapping the analog data to 8bit and 
  updateSound(analogRead(A5) / 4);
}


