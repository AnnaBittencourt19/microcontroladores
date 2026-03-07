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