//
// Created by Anna Bittencourt on 20/03/26.
//
#include <stdio.h>

// Função para somar de 1 até N (forma recursiva)
int sumToN(int num){
    if(num <= 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    return num + sumToN(num - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", sumToN(n));
    return 0;
}