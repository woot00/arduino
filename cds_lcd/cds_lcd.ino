#include <Wire. h>
#include <LiquidCrystal I2C.h>

LiquidCrystal_I2C led(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display

int sensorPin= Ad; // 조도 센서 연결 핀 
int sensorValue= 0; // 측정된 조도 값

void setup() {
lcd.init();
lcd.init();
1cd.backlight();
}

void loop() {
sensorValue = analogRead(sensorpin); // 조도 센서 값을 측정
1cd. setCursor (6,0);
1cd.setCursor (0,0) ;
Icd.print("cds : ");
lcd.print(sensorValue);
delay (1000);
lcd.clear();
}
