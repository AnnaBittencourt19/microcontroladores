//
// Created by Anna Bittencourt, Lucas Marcelo e Leonardo on 10/03/26.
//
#include<stdio.h>
int main(void){
  DDRD = 0b00001110 ;
  

  for(;;){
   PORTD = 0b00001110 ;
   _delay_ms(500);
   PORTD = 0b00000000;
   _delay_ms(1500);
     }

}
