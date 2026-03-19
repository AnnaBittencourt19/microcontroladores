//
// Created by Anna Bittencourt on 19/03/26.
//
#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int sumOfPrimes(int num1, int num2) {
    int soma = 0;
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            soma += i;
        }
    }
    return soma;
}
int main() {
    int num1, num2;
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input\n");
        return 0;
    }
    if (num1 <= 0 || num2 <= 0 || num1 >= num2) {
        printf("Invalid input\n");
        return 0;
    }
    int result = sumOfPrimes(num1, num2);
    printf("%d\n", result);
    return 0;
}