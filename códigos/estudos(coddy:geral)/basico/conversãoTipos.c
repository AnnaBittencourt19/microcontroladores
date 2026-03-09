//
// Created by Anna Bittencourt on 09/03/26.
//
#include <stdio.h>

int main() {
    double result = 5.65;
    int grade;

    // Use explicit casting to convert result (double) to grade (int)
    grade = result;
    printf("The grade is: %d\n", grade);
    // Foi usada conversão implicita, declarando um valor para um double e depois o colocando em uma variavel inteira
    // há perda de informações, 5.65 vira 5
    return 0;
}