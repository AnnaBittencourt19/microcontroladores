//
// Created by Anna Bittencourt on 14/03/26.
//
#include <stdio.h>

int main() {
    // Write your code here
    int inputUsuario;
    if (scanf("%d", &inputUsuario) == 1) { // logica por tras disso: se o scanf conseguiu receber um valor é pq o valor é inteiro
        if(inputUsuario >= 10 && inputUsuario <= 50){
            printf("Valid input!");
        }else {
            printf ("Out of range!");
        }
    }else {
        printf("Invalid input type!");
    }
    return 0;
}