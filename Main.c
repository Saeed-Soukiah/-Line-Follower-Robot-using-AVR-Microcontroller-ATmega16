/* Line Follower Robot Using Atmega16
   Circuit Digest(www.circuitdigest.com) */
#include<avr/io.h>
#define leftSen PA0                //Connect Left Sensor At PA0
#define rightSen PA1               //Connect Right Sensor At PA1
int main(void)
{ 
DDRA=0xFC;                // make PA0,PA1 as input for both sensors 0x0b11111100
DDRC=0xFF;      // make Port  as output to connect motor pins 
while(1)
{
 PINA=0x03;             //initialize PA0 and PA1
 if(bit_is_clear(PINA,leftSen)){        // check if left sensor is OFF 
   if(bit_is_clear(PINA,rightSen)) {    // check if right sensor is OFF
    PORTC=0b00000000;       // if both sensor zero 
    }       // then stop the robot
   else{
    PORTC=0b00000001;                  // if right is ON then take left
  }
}
 else                                  // check if left sensor in ON
{
   if(bit_is_clear(PINA,rightSen)) {   // check if right sensor is OFF
    PORTC=0b00000010;      // it means left sensor is ON
}      // so take right
   else{
    PORTC=0b00000011;            // if both sensor is ON 
       }     // then keep moving the robot
    }
   }
 }
