//
// Created by Anna Bittencourt on 15/03/26.
//
#include <stdio.h>

int main() {

    for (int i = 1; i <= 20; i++) {
        // Add an if statement here before using printf
        if (i == 16){
            break; 
        }
        printf("%d ", i);
    }

    return 0;
}