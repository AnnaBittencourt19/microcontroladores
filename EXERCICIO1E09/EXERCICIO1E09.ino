ISR(PCINT0_vect)
{
  PORTD|=(1<<PD7);
   _delay_ms(1000);
   PORTD & = ~ (1<<PD7)
}


ISR(PCINT2_vect)
{
  PORTD|=(1<<PD6);
   _delay_ms(500);
   PORTD & = ~ (1<<PD6);

    PORTD|=(1<<PB1);
   _delay_ms(2000);
   PORTD & = ~ (1<<PB1)
}

int main(void)
{
    PCICR = 0b00000111;
    DDRD |=((1<<PD5)|(1<<PD7)|(1<<PD6));
    DDRB|=(1<<PB1);

  
    PCMSK0|=((1<<PCINT0)|(1<<PCINT2));
    PCMSK2|=(1<<PCINT20);

    sei();

    for (;;)
    {
    PORTD|=(1<<PD5);
    _delay_ms(250);
    PORTD & = ~ (1<<PD5)
    }
}