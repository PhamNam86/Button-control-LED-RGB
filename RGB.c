#include<16F887.h>
#DEVICE *=16 ADC=10 
#FUSES HS,NOWDT,NOPUT,NOLVP 
#USE DELAY(CLOCK=16M) 
#include<luutinh.h>

void main() {
ADCON0=0;
ADCON1=0;
TRISB=0xFF;
TRISD=0;
PORTD=0;
while(TRUE){
switch(PORTB){
case 0b00000001: //first switch pushed
PORTD=1;    //red color
break;
case 0b00000010: //second switch pushed
PORTD=2; //green color
break;
case 0b00000100: //third switch pushed
PORTD=4; //blue color
break;
case 0b00001000: //4th switch pushed
PORTD=5; //magenta color
break;
case 0b00010000: //5th switch pushed
PORTD=6; //cyan color
break;
case 0b00100000: //6th switch pushed
PORTD=3; //yellow color
break;
case 0b01000000: //7th switch pushed
PORTD=7; //white color
break;

}}

}