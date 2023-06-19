#include <Wire. h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C led(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display

int sensorPin= A0; // 조도 센서 연결 핀 
int sensorValue= 0; // 측정된 조도 값

void setup() {
1cd.init();
1cd.init();
1cd.backlight();
}

void loop() {
sensorValue = analogRead(sensorPin); // 조도 센서 값을 측정
1cd.setCursor (6,0);
1cd.setCursor (0,0) ;
1cd.print("cds : ");
1cd.print(sensorValue);
delay (1000);
1cd.clear();
}
