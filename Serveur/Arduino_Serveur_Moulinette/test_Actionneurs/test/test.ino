#include <LiquidCrystal.h>
#include <SoftwareSerial.h>

#define Test 32

void setup() {
   pinMode(Test, OUTPUT);
   Serial.begin(9600);

}

void loop() {
//  put your main code here, to run repeatedly:
   //digitalWrite(Test, LOW);
   delay(2000); 
   digitalWrite(Test, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(5000);
}
