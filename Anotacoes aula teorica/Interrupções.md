- Cai na prova, questão aberta
- Interrompe a execução do programa principal para atender a uma solicitação "urgente"
-  ISR: função que já tem o nome pré definido, já pre definida 
- Fluxograma: Ciclo de execução do micro (na prova pede pra explicar ele)
- ![[Captura de Tela 2026-03-30 às 15.49.59.png]] ESSE FLUXOGRAMA CAI NA PROVAAAA
	- Tem que ligar a interrupção para que haja a verificação (caso não tenha o micro só realiza o amarelo)
	- Registrador de flag no registrador, flags (EIFR)

### Int0 e Int1
![[Captura de Tela 2026-03-30 às 15.52.21.png]]
- Int0 no pino PD2 e o int1 PD3
- sei é nativa do Atmega
- é mais rápido que o if

### Eicra
 - Configura o que vc quer
 ![[Captura de Tela 2026-03-30 às 16.00.17.png]]
 - Bit0 e Bit1 (ISC00 e ISC01) -> INT0
 - Bi2 e Bit3 (ISC10 e ISC11) -> INT1 
 - Usa mais configurar a detecção de subida e descida (os 2 últimos (10 e 11))
 ```C
 EICRA |= (1<<ISC01); // A de descida
 EICRA |= (1<<ISC01) + (1 << ISC00); // A de subida
 ```
- EIFR: Aciona flags, sinaliza quando INT0 e INT1 foram disparados, o ATmega tem isso automatico (desativação da flag), alguns micros tem que desligar !!! Cai na prova

### Questões
![[Captura de Tela 2026-03-30 às 16.10.34.png]]

Descida: 1 0 (EICRA) // como se trata do INT1 e de descida vai ativar apenas o bit ISC11
Subida: 1 1 (EICRA) // como se trata do INT0 e de subida vai ativar os bits ISC01 e ISC00
Descida no INT0: 1 0 (EICRA) // ativa só ISC01

a) ```
```c
int main(){
	EICRA |= (1<<ISC11);
}
```

b)
```C
int main(){
	EICRA |= (1<<ISC01) + (1<<ISC00);
}
```
c)
```C
int main(){
	EICRA |= (1<<ISC11);
	EICRA |= (1<<ISC01);
}
```
![[Captura de Tela 2026-03-30 às 16.27.13.png]]
Delay
motor
botão emergencia
fornecer pulso (talvez subida)
LED (saída) (ligado até reiniciar)

