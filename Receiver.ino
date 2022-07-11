#include <OnePinShow.h>

//The pin sending the pulses
#define pulsePin 2

OPS Receiver(pulsePin);

void setup(){
  Serial.begin(9600);
}

void loop()
{
  String data;
  data = Receiver.GetMSG();
  Serial.println(data);
  delay(500);
}
