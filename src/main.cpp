/*
*
* This sketch clears radioId, relayId and routing info in EEPROM 
*
*/
#include <Arduino.h>

#include <SPI.h>
#include <EEPROM.h>  

void before()
{
  // Optional method - for initialisations that needs to take place before MySensors transport has been setup (eg: SPI devices).
  Serial.begin(115200);

}

void presentation()
{

}

void setup()  
{ 
  Serial.println();
  Serial.println();
  Serial.println("=====> Lancement le l'effacement de EEPROM");
  delay(100); //dans Arduino

  //for (int i=0;i<512;i++) {
  for (int i=0;i<1024;i++) {
    EEPROM.write(i, 0xff);
  }
  
  Serial.println("=====> Effacement de EEPROM terminé");
  delay(100); 

  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  
}

void loop()      
{ 
  // Nothing to do here...

  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second

} 