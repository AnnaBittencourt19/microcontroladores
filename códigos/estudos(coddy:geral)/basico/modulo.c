//
// Created by Anna Bittencourt on 10/03/26.
//
#include <stdio.h>

int main() {
    // Declare and initialize variables here
    int number = 17;
    // Calculate remainder
    int remainder = number % 5;
    // Check if number is even or odd
    int is_even = ((number % 2) == 0); //bool em C pode ser um int, coloca a condição ele retorna 0 se for falso e 1 se for verdadeiro
    // Print results
    printf("Number: %d\n", number);
    printf("Remainder when divided by 5: %d\n", remainder);
    printf("%d is even? %d\n", number, is_even);
    return 0;
}