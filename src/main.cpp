/*
 circuitdigest.com
 Sample STM32 Blink Program for Blue Pill board
 */
#include <Arduino.h>
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin PC13 as an output.
  pinMode(PC13, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(PC13, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1200);              // wait for a second
  digitalWrite(PC13, LOW);  // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
  digitalWrite(PC13, HIGH); // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
  digitalWrite(PC13, LOW);  // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
}
