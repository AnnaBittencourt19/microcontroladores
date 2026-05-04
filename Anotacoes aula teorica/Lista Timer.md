3) Timer1 
	Frequência de 4MHz
	Interrupções a cada 10ms
	No código deve seguir essa ordem:
	![[Pasted image 20260504161900.png]]
	```C
	TCCR1A |= (1 << WGM12)
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
