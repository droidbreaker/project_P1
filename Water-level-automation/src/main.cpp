#include <Arduino.h>


void setup()
{
    pinMode(BUILTIN_LED,HIGH);

}

void loop()
{
    pinMode(BUILTIN_LED,HIGH);
    delay(100);
    pinMode(BUILTIN_LED,LOW);
    delay(1000);
}