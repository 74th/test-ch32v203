#include "Wire.h"

#define LED PC13

void setup()
{
    Serial.begin(192000);
    pinMode(LED, OUTPUT);
    Wire.begin();
}

int n = 0;

void loop()
{
    Serial.printf("@@%d\n", n++);
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
}
