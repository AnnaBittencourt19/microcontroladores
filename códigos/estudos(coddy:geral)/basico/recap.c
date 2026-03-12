//
// Created by Anna Bittencourt on 12/03/26.
//
#include <stdio.h>

int main() {
    // Declare and initialize variables
    int num1 = 25;
    int num2 = 7;
    // Calculate arithmetic operations
    int soma = num1 + num2;
    int diferenca = num1 - num2;
    int produto = num1 * num2;
    int quociente = num1 / num2;
    int resto = num1 % num2;
    // Print arithmetic results
    printf("num1 = %d, num2 = %d\n" , num1, num2);
    printf("Sum: %d\n", soma);
    printf("Difference: %d\n", diferenca);
    printf("Product: %d\n", produto);
    printf("Quotient: %d\n", quociente);
    printf("Remainder: %d\n", resto);
    // Calculate logical operations
    int result1 = (num1 > num2) && ((num1 % 2) == 1);
    int result2 = (num2 < 10) || ((num1 % 2)==0);
    // Print logical operation results
    printf("result1: %d\n" , result1);
    printf("result2: %d\n", result2);
    return 0;
}