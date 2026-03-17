//
// Created by Anna Bittencourt on 17/03/26.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // Create nested loops to print the multiplication table
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%2d ", i * j);
        }
        printf("\n");
    }
    return 0;
}