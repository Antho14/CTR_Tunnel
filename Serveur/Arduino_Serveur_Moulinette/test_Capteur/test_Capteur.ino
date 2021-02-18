#include <LiquidCrystal.h>
#include <SoftwareSerial.h>

#define CapteurF A5
#define CapteurC A4
#define CapteurL A3
int valF=0,valC=0,valL=0;
void setup() 
{
   pinMode(A5, INPUT);
   pinMode(A4, INPUT);
   pinMode(A3, INPUT);
   Serial.begin(9600);

}

void loop() {
  
   valF=analogRead(CapteurF);   // turn the LED on (HIGH is the voltage level)
   valC=analogRead(CapteurC);   // turn the LED on (HIGH is the voltage level)
   valL=analogRead(CapteurL);   // turn the LED on (HIGH is the voltage level)
   
   Serial.print(" Tension Capteur Fumee =");
   Serial.println(valF);
   
   Serial.print(" Tension Capteur CO2 = ");
   Serial.println(valC);
  
   Serial.print(" Tension Capteur Lumi = ");
   Serial.println(valL);
   delay(2000);
   
}
