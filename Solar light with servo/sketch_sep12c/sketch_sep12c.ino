// die Bibliothek Servo.h wird eingebunden, sie steuert den Motor
#include "Servo.h"  

// der Servomotor erhält den Namen Servomotor
Servo Servomotor; 

void setup()
{
  // dem Servomotor wird der Pin 8 zugeordnet
  Servomotor.attach(8);
  Serial.begin(9600);
  pinMode(A0, INPUT);  
}

void loop()
{ 
  int wert = analogRead(A0);

  if (wert < 1000) {
    Servomotor.write(45);
      
  } 
  else {
    Servomotor.write(0);
  }
  Serial.println(wert);  
}

// https://www.az-delivery.de/blogs/azdelivery-blog-fur-arduino-und-raspberry-pi/solar-tracker-mit-schrittmotoren-und-oled-display

// Cool Website
