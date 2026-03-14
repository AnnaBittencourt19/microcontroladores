//
// Created by Anna Bittencourt on 14/03/26.
//
#include <stdio.h>

int main() {
    float height;
    int id, age;
    scanf("%d", &id);
    scanf("%d", &age);
    scanf("%f", &height);
    // Calculate age in days and height in cm
    int ageDays = age * 365;
    int cmHeight = height * 100;
    // Print the formatted output
    printf("ID: %d\n", id);
    printf("Age: %d years (%d days)\n", age, ageDays);
    printf("Height: %.2f m (%d cm)", height, cmHeight);
    return 0;
}