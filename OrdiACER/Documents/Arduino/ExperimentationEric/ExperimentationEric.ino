#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

// declaration capteur
int mesure0;
int mesure1;

String sortie = "";
int mesuremin = 1023;

void setup() 
{
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.setRGB(128, 0, 0);
  lcd.print("Preparation.....");
  Serial.begin(9600);
  delay(2000);
  lcd.setCursor(0,0);
  lcd.print("Temps  Min      ");
  lcd.setRGB(0, 128, 0);
  lcd.setCursor(0,1);
  Serial.println("millisecond;mesure1");
}

void loop() 
{
  mesure0 = analogRead(0);
  mesure1 = analogRead(1);
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
  sortie = "";
  if (mesure0 > 100) // mettre > 100 pour enlever le bruit, > 10 pour avoir le bruit
  {
    sortie.concat(millis());
    sortie.concat(";");
//    sortie.concat(mesure0); // 1023 si appui sinon du bruit en dessous de 100
//    sortie.concat(";");
    sortie.concat(mesure1);
    Serial.println(sortie);
    if (mesure1 < mesuremin)
      {
        mesuremin = mesure1;
        lcd.setCursor(7,1);
        lcd.print("         ");
      }
  }
  lcd.setCursor(7,1);
  lcd.print(mesuremin);
  delay(10); // pour ralentir la console mais mesure moins super fine
}


