//
// Created by Anna Bittencourt on 13/03/26.
//
#include <stdio.h>

int main() {
    int num = 255;
    float pi = 3.14159;
    char letter = 'A';

    // Your code here
    printf("Decimal: %d\n", num);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);
    printf("Pi: %.2f\n", pi);
    printf("Letter: %c\n", letter);
    printf("ASCII value: %d\n", letter);
    return 0;
}