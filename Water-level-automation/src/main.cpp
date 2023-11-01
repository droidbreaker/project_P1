#include <Arduino.h>

void setup()
{
    pinMode(LED_BUILTIN,HIGH);

}

void loop()
{
    pinMode(LED_BUILTIN,HIGH);
    delay(100);
    pinMode(LED_BUILTIN,LOW);
    delay(1000);
}