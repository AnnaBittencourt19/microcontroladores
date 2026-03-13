//
// Created by Anna Bittencourt on 13/03/26.
//
#include <stdio.h>

int main() {
    int age, height;
    int hasAdult;
    scanf("%d %d %d", &age, &height, &hasAdult); // Don't change this line

    // Write your code below
    if (age < 12){
        printf("Sorry, you are too young");
    }
    else if (height <= 150){
        printf("Sorry, you are not tall enough");
    }
    else if (age < 15){
        if (hasAdult){
            printf("You can ride with adult supervision!");
        } else {
            printf("Sorry, you need an adult with you");
        }
    } else{
        printf("You can ride by yourself!");
    }

    return 0;
}