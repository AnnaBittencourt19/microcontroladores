//
// Created by Anna Bittencourt on 17/03/26.
//
#include <stdio.h>

// Declare your function here
void printNumbers(){ //void não usa return (não retorna um valor), usa printf imprime dados
    for (int i = 1; i <= 5; i++){
        if(i == 5){
            printf("%d", i);
            break;
        }
        printf("%d ", i);
    }
    printf("\n");
}
int main() {
    // Call your function twice here
    printNumbers();
    printNumbers();
    return 0;
}