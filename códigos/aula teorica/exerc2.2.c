//
// Created by Anna Bittencourt on 29/03/26.
//
#include <avr/io.h>
#define TRAVA PD3
int main(void)
{
    DDRB  &= ~(1<<PB1 + 1<<PB2 + 1<<PB3 + 1<<PB4);
    PORTB |=  (1<<PB1 + 1<<PB2 + 1<<PB3 + 1<<PB4);
    DDRD |= (1 << TRAVA);
    PORTD &= ~(1 << TRAVA);
    uint8_t passo = 0;
    while(1)
    {
        uint8_t b = PINB;
        switch(passo)
        {
            case 0:
                if ((b & (1<<PB2)) == 0 && (b & (1<<PB1 | 1<<PB3 | 1<<PB4)) != 0)
                    passo = 1;
                break;
            case 1:
                if ((b & (1<<PB2 | 1<<PB3)) == 0 && (b & (1<<PB1 | 1<<PB4)) != 0)
                    passo = 2;
                else if ((b & (1<<PB2)) != 0)
                    passo = 0;
                break;
            case 2:
                if ((b & (1<<PB2 | 1<<PB3 | 1<<PB4)) == 0 && (b & (1<<PB1)) != 0)
                    passo = 3;
                else if ((b & (1<<PB2 | 1<<PB3)) != 0)
                    passo = 0;
                break;
            case 3:
                if ((b & (1<<PB1 | 1<<PB2 | 1<<PB3 | 1<<PB4)) == 0)
                {
                    PORTD |= (1 << TRAVA);
                    passo = 4;
                }
                else if ((b & (1<<PB2 | 1<<PB3 | 1<<PB4)) != 0)
                    passo = 0;
                break;
            case 4:
                if ((b & (1<<PB1 | 1<<PB2 | 1<<PB3 | 1<<PB4)) == (1<<PB1 | 1<<PB2 | 1<<PB3 | 1<<PB4))
                {
                    PORTD &= ~(1 << TRAVA);
                    passo = 0;
                }
                break;
        }
    }
    return 0;
}