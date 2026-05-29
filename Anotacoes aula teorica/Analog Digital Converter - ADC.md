- Conversor Analogico-Digital
- Possui 10 bits de resolução (de 0 a 1023) (de 0000000000 até 1111111111)
- Transforma uma tensão analógica como a tensão em um número digital (binário) para que o microcontrolador consiga processar (o microcontrolador trabalha internamente com valores digitais, 0 ou 1 (0 nivel baixo e 1 nível alto))
- 0V = Nível baixo
- 5V = Nível alto
- Exemplo :(é uma regra de 3 onde a tensão máxima equivale a 1023, a metade da rensão máxima 512 e assim por diante)
```
0 V   → valor digital próximo de 0
2,5 V → valor digital próximo de 512
5 V   → valor digital próximo de 1023
```
- Passa para valor binário pra fazer processamento via código
- Resolução do ADC: 
	- É a menor variação de tensão que o conversor consegue perceber
	- Como o ADC tem 10 bits, ele consegue representar 1024 níveis digitais (de 0 até 1023)
	- A pergunta que a resolução responde é: `Quanto de tensão representa cada unidade do ADC?`ou seja `Se o ADC aumentou de 500 para 501, quanto a tensão aumentou?` 
	- Formula: 
		- $Resolução = \frac {Vref} {(2^n - 1)}$
		- Vref = tensão de referência do ADC, o sinal de entrada não pode passar de Vref
		- n = número máximo de bits do ADC
	- Exemplo:
		- Dados: 
			 Vref = 5 V
			 n = 10 bits
		- Resolução:
			$$\frac{5}{(2^{10} - 1)}$$
		$$\frac {5}{1023} = 0,00488 V$$
			A resolução é 4,88 mV
		- O que significa esse 4,88mV:
			- ADC = 0    → aproximadamente 0 V
			- ADC = 1    → aproximadamente 4,88 mV
			- ADC = 2    → aproximadamente 9,76 mV
			- ADC = 100  → aproximadamente 488 mV
			- ADC = 512  → aproximadamente 2,5 V
			- ADC = 1023 → aproximadamente 5 V
- Como descobrir a tensão correspondente: Vin = ADC × resolução (Vin = Tensão de input)
- Na conversão ADC existe uma pequena perda de precisão, porque o ADC arredonda ou aproxima a tensão real para o nível digital mais próximo
- Pinos ADC:
	ADC0 → PC0
	ADC1 → PC1
	ADC2 → PC2
	ADC3 → PC3
	ADC4 → PC4
	ADC5 → PC5
- Etapas da conversão:
	- Input: Entrada analogica (X(t))
	1. Filtro passa baixa
	2. Amostragem e armazenamento 
	3. Quantizador (arredondamento, transforma uma grandeza contínua em degraus)
	4. Codificador
	- Output: Código digital (X(n))
- Quantização: Valor analogico
	- 8 níveis: 3 bits
	- Aproxima a amostra ao valor digital correspondente 
- 5V na entrada e uma tensão máxima de 1023, 2.5V = x, x = 511 (regra de 3) (o 5V é a tensão de referência (o VCC))
- ADMUX (registrador): Evita desperdício de Volts, opção padrão usa a tensão aplicada no pino. 
	- O registrador ADMUX configura duas coisas muito importantes:
		1. Qual será a tensão de referência do ADC
		2. Qual canal analógico será lido
	- Bits do ADMUX:
	`Bit:   7     6     5    4    3    2    1    0`
        `REFS1 REFS0 ADLAR  -  MUX3  MUX2  MUX1  MUX0`
    
	- REFS1 e REFS0: Esses bits escolhem a tensão de referência
	- MUX3 a MUX0: escolhem qual canal será lido
		``MUX3 MUX2 MUX1 MUX0 = 0000 -> ADC0  ``
		``MUX3 MUX2 MUX1 MUX0 = 0001 -> ADC1  ``
		``MUX3 MUX2 MUX1 MUX0 = 0010 -> ADC2``
	- ADCSRA: Habilitar ADC e interrupção
- ADC usa prescaler, prescaler reduz a frequência que reduz o tempo de amostragem (muito rápido perde a precisão)
- o ADC possui 10 bits de resolução (leitura de 0 até 1023)
- Registrador ADCSRA
	- Controla o funcionamento do ADC
	- Estrutura dele:
	```
	Bit:    7     6     5     4     3     2     1     0
          ADEN  ADSC  ADATE  ADIF  ADIE  ADPS2  ADPS1 ADPS0
    ```
	- O bit ADEN (bit 7) liga ou desliga o ADC. Para ligar o conversor: `ADCSRA |= (1 << ADEN);` (Sem esse bit ativado o conversor não funciona)
	- Bit ADSC (bit 6): Inicia a conversão. Quando esse bit está em 1, o ADC começa a converter a tensão analógica em número digital enquanto a conversão está acontecendo, esse bit permanece em 1 e quando a conversão termina o próprio hardware zera esse bit
	- 
	