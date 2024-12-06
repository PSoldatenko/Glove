#include <Arduino.h>

const int analog[5] = {32, 33, 25, 26, 27}; 
 
void setup()
{
    Serial.begin(9600);
}
 
void loop()
{
    for (int i=0; i<5; i++){
    Serial.print("Analog " + String(i+1) + ":");
    Serial.println(analogRead(analog[i]));
    }
    //delay(500);
}