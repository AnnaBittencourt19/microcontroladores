//
// Created by Anna Bittencourt on 13/03/26.
//
#include<stdio.h>
int main() {
    int a = 7;
    int b = 29;
    int max = (a > b) ? a : b; // oq fica apos a ? é oq sera retornado se for verdadeiro e o que fica após o : é oq vai ser retornado se for falso
    /* é igual a:
    int max;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    */
    printf("%d", max);
}