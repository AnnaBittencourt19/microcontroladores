- General Purpose Input/ Output = Pinos de uso geral de entrada/ saída
- Características de pinos configurados como:
	- Entrada: O pino lê o mundo exterior (temperatura/botão)
	- Saída: O pino envia sinal para o mundo externo (acende LED)
- Os pinos são organizados em portais, o ATmega328p possui os seguintes portais: 
	- B, C e D (cada um com 8 pinos)
### Entrada e saída 
| Tipo        | Direção do sinal              | Exemplos de componentes  |
| ----------- | ----------------------------- | ------------------------ |
| **Entrada** | Componente → Microcontrolador | Botões, sensores, chaves |
| **Saída**   | Microcontrolador → Componente | LEDs, motores, buzzers   |
- Os pinos são declarados no código em C 
- Cada porta possui 8 pinos de 0 a 7
- A nomenclatura segue o padrão PXn, onde:
	- X = letra do portal (B, C ou D)
	- n = número do pino dentro do portal (0 a 7)
### Registradores
- Os registradores tem 8 bits de tamanho
- Um registrador pode controlar 8 pinos de uma vez (cada bit representa um pino)
- 