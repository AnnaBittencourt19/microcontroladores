//
// Created by Anna Bittencourt on 10/03/26.
//
#include <stdio.h>

int main() {
    // Write your code here
    int number = 10;
    int prefixResult = ++number; // ++ como prefixo adiciona o valor de number + 1 em prefix, primeiro soma e depois passa para prefix
    int postfixResult = number++; // ++ como sufixo adiciona o valor de number na variavel postfix, postfix será number(sem ser somado) e number será number +1

    printf("Number: %d\n",number);
    printf("Prefix result: %d\n", prefixResult);
    printf("Postfix result: %d", postfixResult);


    return 0;
}