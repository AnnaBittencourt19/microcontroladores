//
// Created by Anna Bittencourt on 13/03/26.
//
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    // Write your code below
    char* result = (number > 0) ? "positive" : (number < 0) ? "negative" : "zero";
    // se number maior que zero retorna positivo se não testa se o number é menor que 0, se for menor que zero retorna negative e se nao zero
    printf("The number is %s\n", result);
    return 0;
}