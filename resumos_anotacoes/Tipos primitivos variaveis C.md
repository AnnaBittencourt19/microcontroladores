Tag: #C Link: [[Estudos C]]
![[Captura de Tela 2026-02-23 às 15.54.46.png]]
- idade de uma pessoa= unsigned char
- tensão = mudar unidade da variavel (volts para mv), aí vai ser int que tem 32bit no lugar de 64 do double
- Diferença double e float: Float tem que ser declarado assim: float pi = 3.14f (tem que ter o f no final)
	- Precisão: Double tem maior precisão que float
	    - Float: ~7 dígitos decimais
	    - Double: ~15 dígitos decimais
	- Tamanho:
	    - Float: 4 bytes
	    - Double: 8 bytes
	
### Função inline
- Função normal muda de contexto, vai da onde chama até onde mostra a função (declara ela), a inline economiza memória pq executa na mesma linha que é chamada

### Macro 
- define um código reutilizavel, constante é um valor definido (não aloca memória)

- Tem que ficar economizando memória 
0b informações em binário

- & é a porta lógica E mesmo, no código é pra filtrar os bits (cada hora com um bit (bit a bit))
- Estudar manipulação de bits (| &)