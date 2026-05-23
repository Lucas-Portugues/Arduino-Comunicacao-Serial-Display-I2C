#include <Wire.h>                 
#include <LiquidCrystal_I2C.h>   

LiquidCrystal_I2C lcd(0x20, 16, 2);

void setup() 
{ 
    Serial.begin(1000);
    lcd.init();
    lcd.backlight(); 
    lcd.print("Em espera...");
}

void loop() 
{
    if (Serial.available() > 0) 
    { 
        lcd.clear();
        lcd.setCursor(0, 0);
        String mensagem = Serial.readStringUntil('\n');
        
     
        if (mensagem.length() > 16) 
        {
            lcd.print(mensagem.substring(0, 16));
            lcd.setCursor(0, 1);
            lcd.print(mensagem.substring(16, 32));
        } 
        else 
        {
            lcd.print(mensagem);
        }
    }
}