- Regrinha de loops: 

| Você sabe quantas vezes vai repetir?       | Use      |
| ------------------------------------------ | -------- |
| Sim (contador)                             | for      |
| Não (depende de entrada)                   | while    |
| Não importa (quero executar pelo menos 1x) | do-while |
## For
- O for condensa três partes em uma linha: inicialização(i=0;), condição ``(i<=n;)``  e incremento(i++).
- O for vai executar n vezes, enquanto o i for menor ou igual a n executa o bloco(quando a condição for falsa sai do for)
- Exemplo:
	- Contar de 1 até 10
```C
for (int i =1; i<=10; i++){
	printf("%d", i);
}	
```

## While
- Você não sabe quantas vezes se deve executar um bloco de código mas existe uma condição que faz entrar nesse bloco
- Se a condição for falso nunca entra no while
- Roda ENQUANTO a condição for verdadeira
```C
inicialização  
while (condição) {  
	ação  
	atualização  
}
```
- Toda estrutura de repetição precisa de uma inicialização, condição, ação e atualização
- Exemplo:
	- Contar até 10
```C
#include <stdio.h>

int main(void)
{
  int contador = 1; //declarando e inicializando a variável de controle
  
  while (contador <= 10) // Testando a condição
  {
    printf("%d ", contador); //Executando um comando dentro do laço
    
    contador++; //atualizando a variável de controle
  }  
  
  return 0;
}
```
- Jeito fácil de pensar sobre while: 
	while(condição verdadeira)
	    continua
- ENQUANTO ISSO FOR VERDADEIRO CONTINUA REPETINDO
## Do-while
- A estrutura que garante que o código será executado pelo menos uma vez
```C
do {
    // Código que será executado
} while (condicao); // Ponto e vírgula obrigatório!

```
- Sempre roda o que está dentro do 'do', não faz nenhuma verificação antes de entrar no 'do'
- Jeito fácil de pensar sobre do-while:
	REPITA
	    código
	ATÉ condição ser falsa
- Repetir o que está no do até que a condição dentro do while seja falsa
- Exemplo em código:
```C
do {  
    scanf("%d", &nums);  
    soma += nums;  
    printf("O total da soma até agora é %d\n", soma);  
} while (nums != 0);
```
- Esse do significa:
	REPITA
	    leia numero
	    some numero
	ATÉ numero == 0

```C
do{
sum = sum + number;
number = number +2;
printf("Sum is: %d\n", sum);
printf("Num is: %d\n", number);
}while(number <= 50);
```
- Realize a soma de sum + number e number +2 até number ser 50
## Break
- Sai do loop
```C
for (int i = 1; i <= 20; i++) {
	if (i == 16){
		break;
	}
	printf("%d ", i);
}
```
- O loop para quando i for igual a 16 (para de contar no 15)
## Continue
```C
for (int i = 1; i <= 20; i++) {
	if ((i % 2)!= 0){
		continue;
	}
	printf("%d ", i);
}
```
- vai pular os numeros que não são pares
## Loops infinitos
- continua indefinidamente porque sua condição de término nunca é atendida
- Usando while:
```C
while (1) {
    // code to be executed
}
```
- Usando for (usado no lab):
```C
for (;;) {
    // code to be executed
}
```
- Usando do while:
```C
do {
    // code to be executed
} while (1);
```
