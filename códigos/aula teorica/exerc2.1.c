//
// Created by Anna Bittencourt on 29/03/26.
//
#include <avr/io.h>

#define PADRAO_A  0b10101
#define PADRAO_B  0b01010
#define PADRAO_ON 0b11111
#define PADRAO_OFF 0b00000
#define LED1  PD2
#define LED2  PC3

int main(void)
{
    DDRB &= ~0b00011111;
    DDRD |= (1 << LED1);
    DDRC |= (1 << LED2);
    while(1)
    {
        uint8_t botoes = PINB & 0b00011111;
        PORTD &= ~(1 << LED1);
        PORTC &= ~(1 << LED2);
        if (botoes == PADRAO_A || botoes == PADRAO_B)
        {
            PORTD |= (1 << LED1);
        }
        else if (botoes == PADRAO_ON || botoes == PADRAO_OFF)
        {
            PORTC |= (1 << LED2);
        }
    }
    return 0;
}