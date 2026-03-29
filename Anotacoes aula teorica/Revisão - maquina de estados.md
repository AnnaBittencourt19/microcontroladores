## Máquinas de estado
- Os sistemas podem estar em diferentes situações ao longo do tempo, uma lampada pode estar acessa ou apagada, um portão aberto ou fechado, cada situação (aberto ou fechado, apagado ou acesso) é chamada de estado
- E uma máquina de estado é o mapeamento dessas situações
- Uma máquina de estado tem 3 elementos principais:
	- Estados: Em que situação o sistema está? (os circulos)
	- Transições: O que faz o sistema mudar de estado? (setas entre estados)
	- Ações: O que o sistema faz enquanto está num estado? (texto dentro do estado)
	![[Captura de Tela 2026-03-29 às 11.55.37.png]]
- Exemplo:
	![[Captura de Tela 2026-03-29 às 11.58.05.png]]
	- Se está frio (temp < 22) liga o aquecedor 
	- Ideal (temp >= 22 e temp < 28) tudo desligado
	- Quente (temp >= 28) aciona o ar condicionado
	- Os estados são as temperaturas (frio, ideal, quente), as transições são as temperaturas(como se fosse um if e else) e as ações (Heat = on, heat = off, ac = on e ac = off)
	- Sempre começar identificando as entradas e saídas: 
		- Entradas: Definem as transições (o que vai mudar o estado) (nesse caso as entradas são as temperaturas pois elas que vão mudar o estado)
		- Saídas: Definem as ações (o que o sistema faz em cada estado)(nesse caso as saídas são ligar ou desligar o ar ou o aquecedor)
- Ordem correta para fazer uma máquina de estado:
	1.  Definir os estados (como está o sistema)
	2. Transições (o que vai fazer um estado ir pro outro) (entradas)
	3. Ações (vai ligar ou desligar algo? aberto ou fechado?) (saídas)
- Em códigos de sistemas embarcados as coisas devem ficar em um loop infinito pra sempre ler os sensores e atualizar estados

### MÁQUINA DE ESTADOS - RESUMO
1. Identifique ENTRADAS e SAÍDAS do sistema
2. Defina os ESTADOS possíveis
3. Desenhe as TRANSIÇÕES (controladas pelas entradas)
4. Defina as AÇÕES em cada estado (controlam as saídas)
5. Implemente em C usando switch-case