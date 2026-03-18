//
// Created by Anna Bittencourt on 18/03/26.
//
#include <stdio.h>

// Write your calculateArea function here
int calculateArea (int length, int width){ //tem que colocar o int (ou tipo do parametro)
    return length * width;
}
int main() {
    // Read variables
    int lengthUsu, widthUsu;
    scanf("%d", &lengthUsu);
    scanf("%d", &widthUsu);
    // Call calculateArea and print the result
    int result = calculateArea(lengthUsu, widthUsu);
    printf("Area: %d", result);
    return 0;
}