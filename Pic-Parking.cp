#line 1 "C:/Users/Bsm/Desktop/Pic-Parking/Pic-Parking.c"
#line 1 "c:/users/bsm/desktop/pic-parking/src/lcd.h"




sbit LCD_RS at RD0_bit;
sbit LCD_EN at RD1_bit;
sbit LCD_D4 at RD2_bit;
sbit LCD_D5 at RD3_bit;
sbit LCD_D6 at RD4_bit;
sbit LCD_D7 at RD5_bit;

sbit LCD_RS_Direction at TRISD0_bit;
sbit LCD_EN_Direction at TRISD1_bit;
sbit LCD_D4_Direction at TRISD2_bit;
sbit LCD_D5_Direction at TRISD3_bit;
sbit LCD_D6_Direction at TRISD4_bit;
sbit LCD_D7_Direction at TRISD5_bit;



void Init_LCD();
#line 1 "c:/users/bsm/desktop/pic-parking/src/eeprom.h"
#line 1 "c:/users/bsm/desktop/pic-parking/src/lm35.h"




void Init_LM35();

void Read_LM35(char **);
#line 1 "c:/users/bsm/desktop/pic-parking/src/sensor.h"



void Init_Sensor();
void interruption();
void Open_Bar();
void Close_Bar();
#line 6 "C:/Users/Bsm/Desktop/Pic-Parking/Pic-Parking.c"
char Temp[] = "000";

void main() {
 Init_LCD();
 Init_LM35();
 Init_Sensor();
 do{
 Read_LM35( Temp);
 LCD_Out(1,1,Temp);
 }while(1);
}
