#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int cds = A0; 
int cdsValue = 0 ; // value read from the pot
void setup() {
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  
}
void loop() {
cdsValue  = analogRead(cds); // read the analog in value:
lcd.setCursor(3,0);
lcd.print("cds:");
lcd.print(cdsValue);
}
