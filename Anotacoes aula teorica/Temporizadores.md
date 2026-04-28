- Tem questões de prova
- Interrupção sincrona 
- É um contador dentro do microcontrolador
- Registrador de 8 bits: 0 a 255 (clock ticks)
- Quando chegar em uma contagem: interrupção
- Chega no máximo -> reseta
- tempo de estouro: tempo que demora para contar
- Timer no ATMEGA:
	- TIMER0: Temporizador de 8 bits
	- TIMER1: Temporizador de 16 bits (conta até 65535)
	- TIMER2: Temporizador de 8 bits
- No estouro consegue criar uma interrupção
- Período e frequência: 
	- Frequência: Velocidade com que vai contar (tempo de estouro mais ou menos rápido) 
- Valor de contagem:
```
Contagem = (Tempo desejado / Periodo de clock) - 1
```

- PB4 = Pino 2 da porta B (4 decimal para bit)
- Inverso da frequência da CPU = Período de clock
- ```Número de contagem * Periodo de clock = delay maximo```
- Trocar frequência da CPU: Tudo roda mais devagar, pra não deixar muito devagar usa Prescaler (resolução diminui)(muda só do timer, não dá CPU)
- Prescaler divide por: 8, 64, 256 e 1024
- Vai aparecer na prova o slide (funcionamento em temporizadores):
![[Captura de Tela 2026-04-27 às 16.03.27.png]]
- Funcionamento modo normal:
	- Conta continuamente até atingir seu limite
	- OVERFLOW (estouro/máximo)
- Funcionamento modo comparação:
	- O valor limite do contador pode ser mudado atraves do registrador OCRnA
	- Limite do controlador (TOP)
- Uso de registradores (parte do código):
	- TCCR0A: 0 por causa do timer 0 (Geração forma de onda)
		- 4 últimos bits não usa
		- 2 primeiros são os mais importantes
		- Modo normal: 00 (2 primeiros bits = 0)
		- Configura modos no TIMER 0
	- TCCR0B: Se não coloca nada, não tem clock
![[Captura de Tela 2026-04-27 às 16.14.46.png]]
- Saber fazer o gráfico e saber usar o passo a passo
- Prescale:
	- Permite subdividir a frequência de clock da CPU para ser usada exclusivamente pelo temporizador (Não altera o clock da CPU)
	- Serve para aumentar a duração máxima que o temporizador consegue contar
	- Subdivisões: 8, 64, 256 e 1024
	- Se usar um prescale de 8, a frequencia do temporizador será: Frequência da cpu/8
	- Se for 64: Frequência da cpu/64
### Lista de exercicios
![[Captura de Tela 2026-04-27 às 16.20.03.png]]
1. Acha o número de etapas:
	$2^{numero de bits}$
	$2 ^ {10}$ : 1024 etapas, vai de 0 a 1023 
2. Frequencia temporizador prescale:
	${fcpu}/{prescale}$
	$(4*10ˆ{6})/8$ = 500000 -> 500kHz
3. Periodo do temporizador:
	$1/frequenciaTemporizador$
	$1/(500*10ˆ3) = 2*10^{-6}$ -> 2ms
4. $Tempo de estouro = (número de etapas + 1) * Periodo do temporizador$
	tempo de estouro = $(1023 + 1) * 2^{-6} = 2048*10^{-3}$  -> 2048ms
![[Captura de Tela 2026-04-27 às 21.16.12.png]]