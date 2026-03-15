//
// Created by Anna Bittencourt on 15/03/26.
//
#include <stdio.h>
int main() {
    // Initialize variables
    int sum = 0;
    int number = 1;

    // Your code here
    do{
        sum = sum + number;
        number = number +2;
        printf("Sum is: %d\n", sum);
        printf("Num is: %d\n", number);
    }while(number <= 50);

    // Print the final sum
    printf("Final Sum: %d\n", sum);
    return 0;
}
