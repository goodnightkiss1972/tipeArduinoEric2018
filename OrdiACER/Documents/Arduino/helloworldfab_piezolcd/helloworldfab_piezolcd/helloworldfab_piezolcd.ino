#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

void setup() 
{
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    lcd.setRGB(128,128,128);
    
    // Print a message to the LCD.
    lcd.setCursor(0, 0);
    lcd.print("Test Numerique");
    lcd.setCursor(0, 1);
    lcd.print("Contact ");

    delay(500);
}

void loop() 
{
    // on a connecte le piezo en digital 2-3
    int sensorState = digitalRead(2);

    // affichage de l'etat numerique du capteur
    lcd.setCursor(9, 1);
    if(sensorState == HIGH)
    {
      lcd.print("@@@@@");  
    }
    else
    {
      lcd.print("-----");
    }
    delay(100);
}

