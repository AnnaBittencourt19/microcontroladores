#include <stdlib.h>
#include <stdio.h>

void classificar(int vetor, int *quantpares, int *quantiposi, int *quantineg, int *quantimpares);

int main(void){
    int n;
    scanf("%d", &n);
    int quantpares = 0;
    int quantimpares = 0;
    int quantiposi = 0;
    int quantineg = 0;
    int vetor; 
    
    for (int j = 0; j < n; j++){
        scanf("%d", &vetor);  
        classificar(vetor, &quantpares, &quantiposi, &quantineg, &quantimpares);
    }
    printf("quantidade de numeros pares: %d", quantpares);
}

void classificar(int vetor, int *quantpares, int *quantiposi, int *quantineg, int *quantimpares){
    if (vetor % 2 == 0){
        (*quantpares)++;
    } else {
        (*quantimpares)++;
    }
    if(vetor > 0){
        (*quantiposi)++;
    } else {
        (*quantineg)++;
    }
}
