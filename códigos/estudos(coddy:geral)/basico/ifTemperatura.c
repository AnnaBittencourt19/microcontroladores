//
// Created by Anna Bittencourt on 12/03/26.
//
#include <stdio.h>

int main() {
    int temperaturen = 35;
    scanf("%d", &temperaturen);
    // Don't change above this line

    // Write your if statements below
    if (temperaturen > 30){
        printf("It's a hot day!");
    } else if (temperaturen >= 20 && temperaturen <= 30 ){
        printf("The weather is nice.");
    }else {
        printf("It's a bit cold today.");
    }

    return 0;
}