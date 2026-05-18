
1. O TIMER0 opera em modo Fast PWM com saída no pino OC0A (PD6). O botão está conectado ao INT0 (PD2) e a cada clique o programa troca o modo da ventoinha.

| Modo       | Duty Cycle |
|------------|-----------|
| Silencioso | 30%       |
| Normal     | 60%       |
| Turbo      | 100%      |


$$OCR0A = \frac{Duty \cdot 255}{100}$$

$$OCR0A_{30\%} = \frac{30 \cdot 255}{100} = 76{,}5 \approx 77$$

$$OCR0A_{60\%} = \frac{60 \cdot 255}{100} = 153$$

$$OCR0A_{100\%} = \frac{100 \cdot 255}{100} = 255$$

```c
#define F_CPU 4000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

volatile uint8_t modo = 0;
volatile uint8_t trocar_modo = 0;

void atualizar_pwm(void)
{
    if (modo == 0)      OCR0A = 77;
    else if (modo == 1) OCR0A = 153;
    else                OCR0A = 255;
}

ISR(INT0_vect)
{
    trocar_modo = 1;
}

int main(void)
{
    DDRD |= (1 << PD6);
    DDRD &= ~(1 << PD2);
    PORTD |= (1 << PD2);

    TCCR0A = (1 << COM0A1) | (1 << WGM01) | (1 << WGM00);
    TCCR0B = (1 << CS01);
    atualizar_pwm();

    EICRA = (1 << ISC01);
    EIMSK = (1 << INT0);
    sei();

    while (1)
    {
        if (trocar_modo)
        {
            trocar_modo = 0;
            _delay_ms(30);
            if (!(PIND & (1 << PD2)))
            {
                modo++;
                if (modo > 2) modo = 0;
                atualizar_pwm();
                while (!(PIND & (1 << PD2))) {}
                _delay_ms(30);
            }
        }
    }
}
```

2. 
tempo entre interrupções:

$$T_{int} = \frac{(OCR1A + 1) \cdot N}{f_{CPU}}$$


$$T_{int} = \frac{(49 + 1) \cdot 8}{4.000.000} = \frac{400}{4.000.000} = 100\,\mu s$$

$$T_{PWM} = 100 \cdot 100\,\mu s = 10\,ms$$

$$f_{PWM} = \frac{1}{10\,ms} = 100\,Hz$$

```c
#define F_CPU 4000000UL
#include <avr/io.h>
#include <avr/interrupt.h>

volatile uint8_t contador_pwm = 0;
volatile uint8_t duty = 60;

ISR(TIMER1_COMPA_vect)
{
    contador_pwm++;
    if (contador_pwm >= 100) contador_pwm = 0;

    if (contador_pwm < duty) PORTB |= (1 << PB0);
    else                     PORTB &= ~(1 << PB0);
}

int main(void)
{
    DDRB |= (1 << PB0);

    TCCR1A = 0;
    OCR1A  = 49;
    TCCR1B = (1 << WGM12) | (1 << CS11);
    TIMSK1 = (1 << OCIE1A);
    sei();

    while (1) {}
}
```
