/*
  Created by: Linh Huynh
  Created on: Feb 2025
  
  Turn on the LED for one second, then turn off for one second, repeatedly.
*/

const int pin5 = 5;
int blinkTime = 1000; //set variable to 1000

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin5, OUTPUT);
}

void loop() {
  digitalWrite(pin5, HIGH);  //turn the LED on (HIGH is the voltage level)
  delay(blinkTime);                 //waiit for length of variable blinkTime
  digitalWrite(pin5, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

  blinkTime = blinkTime + 1000;    // add 1 second (or 1000) to variable blinkTime
}
