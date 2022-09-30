#include <Arduino.h>
/*
  3030 Controller Code
  Board: AliExpress CNC Shield V4 arduino Nano V3 TMC2209
*/

#define STEPPING_DDR  DDRD
#define STEPPING_PORT PORTD
#define X_STEP_BIT      5
#define Y_STEP_BIT      6
#define Z_STEP_BIT      7
#define X_DIRECTION_BIT 2
#define Y_DIRECTION_BIT 3
#define Z_DIRECTION_BIT 4
#define ENABLE_BIT      8

unsigned int myDelay = 1000;
#define MIN_DELAY 130

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ENABLE_BIT, OUTPUT);
  pinMode(X_DIRECTION_BIT, OUTPUT);
  pinMode(X_STEP_BIT, OUTPUT);
  digitalWrite(X_DIRECTION_BIT, HIGH);
  digitalWrite(ENABLE_BIT, LOW);
}

void loop() {
  if(myDelay > MIN_DELAY) {
    myDelay--;
  }
  //digitalWrite(LED_BUILTIN,HIGH);
  digitalWrite(X_STEP_BIT, HIGH);
  delayMicroseconds(myDelay);
  //delay(1);
  //digitalWrite(LED_BUILTIN,LOW);
  delayMicroseconds(myDelay);
  digitalWrite(X_STEP_BIT, LOW);
  //delay(1);
}