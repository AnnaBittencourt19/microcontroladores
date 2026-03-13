//
// Created by Anna Bittencourt on 12/03/26.
//
#include <stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);
    grade = grade / 10; //simplificar a nota para dezena
    // Don't change above this line
    switch (grade){
        case 10: //quando um case tem um mesmo resultado que outro pode colocar um embaixo do outro
        case 9:
            printf ("A");
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

    return 0;
}