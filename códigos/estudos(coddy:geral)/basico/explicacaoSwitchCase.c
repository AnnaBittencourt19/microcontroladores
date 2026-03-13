//
// Created by Anna Bittencourt on 12/03/26.
//
#include <stdio.h>

int main() {
    int day;  //cria a variavel day
    scanf("%d", &day); //usuario entra com um valor para day
    switch (day) { // Os casos do switch serao baseados na variavel day
        case 1: //se o valor de day é 1 então é esse caso
            printf("Monday\n");
            break; //sem
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Other day\n");
    }
    // é um menu de opcoes
}