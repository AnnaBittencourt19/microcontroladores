### Manipulando registradores
- Uso de registradores:
	- | OU (usado para ativar bits)
	- & E (usado para limpar bits)
	- ^ OU EXCLUSIVO (trocar estado de bits)
	- ~ complemento de 1 (1 vira 0, 0 vira 1)(não)

- 0b como prefixo = é uma nomenclatura para indicar que é binário
- É basicamente as portas lógicas de digital
- OU (|): Ligar um bit
	- 0 ou 0: 0
	- 1 ou 0: 1
	- 0 ou 1: 1
	- 1 ou 1: `
- Para desligar um bit usa &˜
- Código de OU:
	```C
	uint_8 status;
	status = 0b00110011;
	status = status | (0b10000000);
	//Vai ligar o primeiro bit, status vira 10110011
	```

	![[Captura de Tela 2026-03-09 às 16.01.27.png]]
	- Significa ativar o quarto bit
- Código desligar bit:
```C
uint_8 status;
status = 0b00110011;
status = status &˜ (0b00010000);
//vai desligar o quarto 1, status vira 00100011
```
- O código acima equivale a:
![[Captura de Tela 2026-03-09 às 16.02.03.png|352]]
- Significa desligar o quarto bit

- Deslocamento:  
![[Captura de Tela 2026-03-09 às 15.54.15.png]]
	um dos 1s foi pro além pois ele deslocou uma casa para a esquerda e não existe essa casa no binário dado
 
![[Captura de Tela 2026-03-09 às 15.54.34.png]]
	Onde era 1 virou 0 e onde era 0 virou 1, porém foi devido ao deslocamento de uma casa

- (1<<2) significa bit 2 ativado

- Tabela do valor dos bits:

| valor | 128 | 64  | 32  | 16  | 8   | 4   | 2   | 1   |
| ----- | --- | --- | --- | --- | --- | --- | --- | --- |
| bit   | 7º  | 6º  | 5º  | 4º  | 3º  | 2º  | 1º  | 0º  |
## Exercícios

![[Captura de Tela 2026-03-09 às 16.06.43.png]]
	A. 01111111
	B. 01111111 | 10000000 = 11111111
	C. 11111111 &~ 00000011 = 11111100
	D.  11111100 | 00100000 = 11111100

```C
uint_8 status;
//A:
status = 0b01111111;
//B:
status = status | (0b10000000);
//C:
status = status &~ (0b00000011);
//D:
status = status | (0b00100000);
```
![[Captura de Tela 2026-03-09 às 16.18.08.png]]
```C
//A:
if (status & (1 << 6)){
	printf("Check! O bit 6 está em 1");
}
//B:
if (!(status & (1<<3))){
	printf("Check!O bit 3 está em Zero");
}
//C: 
status = ~(status);
```

- Para testar se um bit está em um local se usa if 
- Sintaxe do teste de bit:
	- if (status & (1<<6)) : Isso pega o status (o binário que está dentro da variável status) e pega o binário 01000000, ao usar o registrador & estamos comparando 11111100 com 01000000
		- como funciona:

|           | 11111100 |     |
| --------- | -------- | --- |
| &         | 01000000 |     |
| Resultado | 01000000 |     |
 - O resultado 01000000 é diferente de 0 então o C entende como verdadeiro e entra no if
 - Ao fazer esse & recebemos 1 apenas se tiver o 1 na posição 6

- Ao usar (!(status & (1<<3))) quer dizer que estamos procurando o zero 

- 1 & 1 = 1 (true em C)
- 1 & 0 = 0 (false em C)