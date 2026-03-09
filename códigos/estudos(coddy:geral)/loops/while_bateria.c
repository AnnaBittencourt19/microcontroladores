//
// Created by Anna Bittencourt on 08/03/26.
//
/*
Imagine uma bateria que começa em 100%. A cada "ciclo", ela perde um valor aleatório (ou fixo) de carga.
O loop deve rodar enquanto a bateria for maior que 0%, imprimindo a carga atual.
 */
#include<stdio.h>

int main() {
    int bateria = 100;
    int ciclos = 0;
    do {
        bateria -= 5;
        ciclos++;
        printf("A bateria está com a saude %d e no ciclo %d\n", bateria, ciclos);
    } while (bateria != 0);
    return 0;
}
