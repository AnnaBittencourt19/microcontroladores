//
// Created by Anna Bittencourt on 10/03/26.
//
#include <stdio.h>
#define MAX_SCORE 100
int main() {
    // Declare and initialize variables
    int age = 25;
    float price = 19.99;
    char grade = 'A';
    float discounted_price;
    int rounded_price;

    // Calculate discounted price
    discounted_price = price - (price * 0.15);
    // Convert to integer using casting
    rounded_price = (int) discounted_price;
    // Print all variables
    printf("Age: %d\n", age);
    printf("Price: $%.2f\n", price);
    printf("Discounted Price: $%.2f\n", discounted_price);
    printf("Rounded Price: $%d\n", rounded_price);
    printf("Grade: %c\n", grade);
    printf("Max Score: %d\n", MAX_SCORE);

    return 0;
}