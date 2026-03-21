//
// Created by Anna Bittencourt on 21/03/26.
//
#include <stdio.h>

// Write your function prototype here
int calculateArea(int comprimento, int largura);
int main() {
    // Declare and read variables
    int comprimento;
    int largura;
    scanf("%d", &comprimento);
    scanf("%d", &largura);
    int calcu = calculateArea(comprimento, largura);
    // Call your function and print the result here
    printf("%d", calcu);
    return 0;
}
int calculateArea(int comprimento, int largura){
    return comprimento * largura;
}

// Implement your function here