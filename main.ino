//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"

// the setup function runs once when you press reset or power the board
void setup()
{
    pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
}
