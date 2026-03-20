- Pinos genericos de entra e saída, agrupados em portais (B,C e D). Cada portal possui 8 pinos (0 a 7)(8 bits) (pino 0 a 7)
- Registradores (menor unidade de memoria), próxima a CPU, uma variavel colada na CPU (sem nome e com tamanho 8bits)
- Componentes podem fornecer informação (entrada)
- Ou serem controlados (saída)
- PC2: Bit 2 do portal C

- Registradores:
	- DDRx: Registrador para configurar se os pinos serão entradas ou saídas
- Primeiro definir se o pino vai ser entrada ou saida (botão = entrada, LED = saída) (DDRx)
	- DDRB |= (1 << PB2) (ativar o pino B2 para saída). OU (|) força um bit pra 1 (tem que ter a lógica OU para não sobrescrever nada)
	- Pra configurar para entrada: DDRB & =  ˜(1<<PB2)
	- Como saída OU 
	- Como entrada & = ˜
- Quando for entrada leremos o estado com (PINxn)
	- if (PINB & 1<<PB3) (ler pra saber se está em 0 ou 1). Se retornar 1 é pq está ativado o pino 3 do portal B 
- Quando for saída mudaremos o estado com PORTxn)
	- PORT é pra ativar 
	- Na saída: (o que for 0 é 0v e o 1 é 5v) **PROVAAAAAA**
		- 0 -> 0V
		- 1 -> 5V
- Existem ambiguidade entre as portas (estado flutuante) 
- Pull up (resistor para proteger a carga e dar nível lógico oposto)
- Pull up já vem integrado
- PORTxn controla a chave para o VCC, usa o PORT nesse contexto também 
- Ligar resistor em entrada: (Tem pull up)
	- Configurando pino C1 como entrada:
		- DDRC &=˜ (1<<PC1)
	- Ativando o resistor: 
		- PORTC |= (1<<PC1) 
- Se quiser mexer só em 1 bit usa os & ou | 

- pino PB7 e PB6 como saída: (saída ligar os pinos B7 e B6) (Configurar como saída ou entrada: DDR)
```C
DDRB |= (1<<PB7); 
DDRB |= (1<<PB6);
```
- Setar (Setar = PORT) apenas o PB6 para '1':
```C
PORTB |= (1<<PB6);
```
- Resetar (PORT) PB6:
```C
PORTB &=~ (1<<PB6);
```
## Macro (Atalhos com funções)
```C
#define set_bit(Y, bit_x)
# Y = Porta
# bit_x = bit
```
tst_bit(PIND,4) (le o quarto pino da porta D)
CLEAR_BIT(PORTB, PB6); (desativa sexto pino da porta B)
cpl_bit(PORTC,3) (inverte o valor)