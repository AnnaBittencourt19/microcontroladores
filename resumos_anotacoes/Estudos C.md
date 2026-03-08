tag: #C Link: [[Tipos primitivos variaveis C]]
- Linguagem de programação de nível médio;
- Procedural, funções que executam tarefas sequenciais (passo a passo)
- Imperativo: Variáveis são alteradas ao longo da execução;
- Placeholders (usados em printf ou scanf, usados para exibir valores de variáveis dentro de uma string):
	- %d = int;
	- %f = float (para 2 números após a virgula: %.2f);
	- %c = char
	- %s = string
- Constantes: São definidas no começo do código ou no meio do código
	 ```C
	 #define PI 3.14
	 
	 const float PI = 3.14;
	 ```
	 - No começo do código usando o define não precisa declarar o tipo e nem usar ponto e virgula
	 - Já no meio do código usando const é preciso declarar o tipo e usar ponto e virgula
	 
#### Exercício tipos de dados
- Crie variáveis para nome (string – veja seção 6), idade e calcule ano de nascimento.
```C
#include<stdio.h>

int main(){
	char str[100]; //tem que declarar o tamanho da string
	int idade;
	int anoAtual;
	printf("Digite seu nome:\n");
	scanf("%s", str); //strings n usam o & no scanf
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	printf("Em que ano estamos?\n");
	scanf("%d", &anoAtual);
	int anoNascimento = anoAtual - idade;
	printf("O usuario %s nasceu provavelmente (depende do seu mês de aniversário) em %d", str, anoNascimento);
}
```
- OBS: Em C não se tem booleanos, para verdadeiros usamos o valor 1 (mas valores ≠ 0 são considerados verdadeiros no C) e 0 para falso. 
- A partir do C99 podemos usar o bool tradicional com um cabeçalho(#include <stdbool.h>):
```C
#include <stdbool.h>

bool isTrue = true;   // Agora usando o tipo booleano real
bool isFalse = false; // Usando constantes predefinidas
```
#### Operadores
- Em C temos os seguintes tipos de operadores:
	- Aritméticos ``(+, -, *, /, %)``: Para operações matemáticas/calculos
	- Relacionais ``(==, !=, >)``: Servem para comparações (ex: verifica se tal coisa é igual a outra)
	- Lógicos (&&, ||, !): São usados para dizer uma coisa E outra, uma coisa OU outra, ou NÃO (negação)
	- bitwise (&, |, ^): Manipulação de bits
#### Exercício operadores
- Calcule área de um retângulo (largura * altura) e verifique se é quadrado (largura == altura).

```C
#include<stdio.h>

int main(){
	int altura;
	int largura;
	
	printf("Digite a altura da forma geometrica:");
	scanf("%d", &altura);
	printf("Digite a largura da forma geometrica:");
	scanf("%d", &largura);
	int area = altura * largura;
	
	if (altura == largura){
		printf("Não é um retangulo, é um quadrado! E sua área é: %d", area);
	} else{
		printf("Area do retangulo: %d", area);
	}
}
```

#### Estrutura de controle
- As estruturas de controle permitem que o programa não seja linear, ou seja, tome decisões ou repita ações
- Decisões(Condicionais): Se isso acontecer faça aquilo
- Repetições(loops): Enquanto, até, por X vezes faça isso
##### If simples
```C
if (condição){
	//só acontece quando a condição for verdadeira
}else //se a condição for falsa 
```
- Se estiver chovendo, pegue o guarda chuva
- No código abaixo tem um pequeno erro pois não se compara strings com ==  e sim com strcmp mas ainda não aprendi isso (é apenas um exemplo ilustrativo da lógica)
```C
#include <stdio.h>

int main() {
    char chovendo[4];
    printf("Está chovendo? ");
    scanf("%s", chovendo);

    if (chovendo == "sim") {
    //Se o valor de chovendo for sim (condição: chovendo == "sim)
        printf("Pegue o guarda chuva\n"); //se condição verdadeira imprime isso 
    }

    printf("Fim do programa.\n");  // sempre executa
    return 0;
}
```
##### If + else
```C
if (condição) {
    // verdadeiro
} else {
    // se a condição do if for falsa
}
```
- Se tiver dinheiro compra sorvete, senão vai embora triste
```C
#include <stdio.h>

int main(){
	float dinheiroDisponivel;
	float precoSorvete;
	float troco;
	printf("Quantos reais voce tem?");
	scanf("%f", &dinheiroDisponivel);
	printf("Quanto custa o sorvete?");
	scanf("%f", &precoSorvete); //no scanf se usa %f (não pode usar %.2f)
	if(dinheiroDisponivel >= precoSorvete){
		printf("Pode comprar o sorvete! ");
		troco = dinheiroDisponivel - precoSorvete;
		if(troco > 0){
			printf ("Sobra R$%.2f de troco", troco);
		
		}
	}else {
		printf("Sem sorvete hoje, vai trabalhar pobre");
	}
	return 0;
}
```

##### if - else if - else
```C
if (condição1) {
    // ...
} else if (condição2) {
    // se condicao1 falsa
} else if (condição3) {
    // se condicao1 e condicao2 falsas
} else {
    // se condicao1, condicao2 e condicao3 falsas
}
```
- Média escolar, de A até F 
```C
#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota final (0 a 10): ");
    scanf("%f", &nota);

    if (nota >= 9.0) {
        printf("A – Excelente!\n");
    } else if (nota >= 7.5) {
        printf("B – Muito bom\n");
    } else if (nota >= 6.0) {
        printf("C – Aprovado\n");
    } else if (nota >= 4.0) {
        printf("D – Recuperação\n");
    } else {
        printf("F – Reprovado\n");
    }

    return 0;
}
```
- Quando se tem if e else if a ordem do código importa, caso tivesse o nota >= a 6.0 antes do 9.0 o program nunca chegaria no 9 (após achar uma condição verdadeira para de percorrer os demais), tem que ser em ordem decrescente 
- 