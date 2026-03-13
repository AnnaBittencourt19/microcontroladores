//
// Created by Anna Bittencourt on 13/03/26.
//
#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    int scoreLetra = score /10;
    // Don't change above this line
    //nota invalida (menor que 0 ou maior que 100) com if:
    if (score < 0 || score > 100){
        printf("Invalid score");
        return 0;
    }
    //score em numeros para letra usando switch
    switch (scoreLetra){
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }
    // ternario para dizer se o aluno passou ou nao
    (score) >= 60 ? printf("\nStatus: Passed") : printf("\nStatus: Failed");
    // Write your code here

    return 0;
}