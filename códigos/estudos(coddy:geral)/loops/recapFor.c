//
// Created by Anna Bittencourt on 15/03/26.
//
#include <stdio.h>
int main() {
    int n, num, sum = 0;
    // Read the first number (number of inputs to follow)
    scanf("%d", &n);
    // Loop to read 'n' numbers and calculate the sum
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        sum = sum + num;
    }
    // Print the result
    printf("%d", sum);
    return 0;
}