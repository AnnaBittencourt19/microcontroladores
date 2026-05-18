1. ![[Captura de Tela 2026-05-11 às 15.46.41.png]]
2. ![[Captura de Tela 2026-05-11 às 15.47.00.png]]
3. Timer1 
	Frequência de 4MHz
	Interrupções a cada 10ms
	No código deve seguir essa ordem:
	![[Pasted image 20260504161900.png]]
	```C
	TCCR1A |= (1 << WGM12)// só pro timer1
	TCCR1B |= (1 << CS00) //prescale de 1
	OCR1A |= 39999
	TIMSK1 |= (1 << OCIE1A); 
	sei();
	```
	A frequência de 4MHz é para achar o período 
	O período encontrado junto com o tempo desejado (10ms) ajuda a achar a contagem
	1. Achar o periodo:$$\frac{1}{4 \cdot 10^{6}} = 0,00000025 s = 0,00025ms$$
	2. Contagem:$$\frac{tempoDesejado}{PeriodoDoClock} - 1 $$
		Substituindo os valores::$$\frac{10ms}{0,00025ms} - 1 = 39.999$$
	3. Após descobrir a contagem, para fazer 10 ms em periodos de 0,00025ms precisa de 39.999 que podemos pensar no número de estouro. Com isso podemos observar que não será necessário usar um prescale e sim o OCR1A (mudar o TOP para 39999)
	 - Obs: Se deu frequência e tempo desejado, encontra a contagem para descobrir se tem que usar prescale ou OCRnA
- Para achar o valor de TCCRnA: ![[Captura de Tela 2026-05-04 às 17.01.20.png]]
4. 1º passo é converter 1,5s -> ms = 1500 ms
 2º passo é achar quantas vezes vai fazer a contagem para chegar em 1,5s (quantas vezes 10ms): 1500/10 = 150 
ISR(TIMER1_COMPA_vect)
{
    contador++;

    if (contador >= 150)
    {
        // acionar motor DC
        contador = 0;
    }
}
5.  Faça uma configuração no TIMER0 do ATMEGA328p para que conte no modo normal e gere uma interrupção a cada evento de overflow.
Tempo de estouro TIMER0 = 255 (overflow)
Modo normal
```C
	TCCR0A &=~ (1<<WGM02) | (1<< WGM01) | (1<<WGM00);
	OCR0A = 255;
	TIMSK |= (1<<TOIE0);
	sei();
```
6. Canal do hardware, no INT0/INT1 -> Cada pino tem um canal de acesso exclusivo para o hardware e no caso do PCINT o acesso ao hardware é atraves do grupo inteiro 
7. ?? ERRAMOS AQUI ?? 
Condição: 5s
Frequência padrão do Atmega328p: 4MHz (`4*10ˆ6`)
Periodo: `1/(4*10ˆ6`) = 0.00025 ms
Contagem = 5000 ms (5s -> ms)
5000 / 0.00025  - 1 = 19
??
 ```C 
#include <avr/io.h>
#include <avr/interrupt.h>

int contador = 0;
int emergencia = 0;

int main(void)
{
	DDRD |= (1<<PD3);
	PORTD |= (1<<PD3);
	EICRA |= (1<<ISC01);
	OCR1A = 255;
	TIMSK1 |= (1<<OCIE0A);
	sei();


    while (1)
    {

    }
}

ISR(TIMER1_COMPA_vect)
{
    if (PIND & (1<<PD3))
    {
        contador++;
        if (contador >= 19)
        {
            contador = 0;
        }
    }
}

ISR(INT0_vect)
{
    emergencia = !emergencia;

    if (emergencia)
    {
	    PORTD &= ~(1<<PD3);
        // desligar LED
        // zerar contador
		TCNT1 = 0;
        // parar/desabilitar timer
        TIMSK1 &=~ (1<<OCIE0A);
    }
    else
    {
        TIMSK1 |= (1<<OCIE0A);
    }
}
```
