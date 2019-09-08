//Code Written by RAJDEEP BARUAH

#include <Servo.h>

Servo servo1,servo2;  

int potpin = A5;
int val1;

void setup() {
  Serial.begin(9600); 
  servo1.attach(9); 
}

void loop() {
  val1 = analogRead(potpin);  
  val1 = map(val1, 0, 1023, 0, 180);   
  Serial.println(val1) ;
  servo1.write(val1);                                         
}
