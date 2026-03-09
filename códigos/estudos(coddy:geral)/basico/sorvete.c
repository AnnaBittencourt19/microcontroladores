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