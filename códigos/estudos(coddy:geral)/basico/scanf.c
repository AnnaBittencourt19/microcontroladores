//
// Created by Anna Bittencourt on 13/03/26.
//
#include <stdio.h>

int main() {
    // Declare your variables here
    int num1;
    float num2;
    scanf("%d", &num1);
    scanf("%f", &num2);
    float sum = num1 + num2;
    printf("num1 = %d\n", num1);
    printf("num2 = %.2f\n", num2);
    printf("sum = %.2f", sum);

    // Your code here

    return 0;
}