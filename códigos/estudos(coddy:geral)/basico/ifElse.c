//
// Created by Anna Bittencourt on 12/03/26.
//
#include <stdio.h>

int main() {
    int temperature;
    char scale;

    scanf("%d", &temperature);
    scanf(" %c", &scale);
    if (scale == 'F'){
        temperature = (temperature - 32) * 5/9;
    }
    if (temperature < 0){
        printf("Freezing");
    } else if (temperature >= 0 && temperature <= 20){
        printf("Cold");
    } else if (temperature >= 21 && temperature <= 30){
        printf("Pleasant");
    } else {
        printf("Hot");
    }
    // Don't change above this line

    // Write your code here

    return 0;
}