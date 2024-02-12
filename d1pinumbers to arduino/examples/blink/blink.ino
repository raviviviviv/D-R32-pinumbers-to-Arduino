#include "D1toArduino.h"

d1pinumbers pinumbers;
int led = 4;




void setup() {
 pinumbers.setnumbers();
 pinMode(led, OUTPUT);
}

void loop() {
digitalWrite (led, HIGH);
delay(1000);
digitalWrite (led, LOW);
}
