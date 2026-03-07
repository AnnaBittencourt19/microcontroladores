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