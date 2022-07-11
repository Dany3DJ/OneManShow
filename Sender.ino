#include <OnePinShow.h>

//The pin sending the pulses
#define pulsePin 2

//void sendSignal(int selection);
OPS sender(pulsePin);

void setup() {
}

void loop() 
{
  delay(1000);
  sender.SendMSG("Hello world");
  sender.SendMSG("My name is Daniel"); 
}
