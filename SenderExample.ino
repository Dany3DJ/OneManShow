#include <OnePinShow.h>

//The pin sending the pulses
#define pulsePin 2

//Create an instance
OPS sender(pulsePin);

void setup() {
}

void loop() 
{
  delay(1000);
  sender.SendMSG("Hello world");
  sender.SendMSG("My name is Daniel"); 
}
