//
// Created by Anna Bittencourt on 14/03/26.
//
#include <stdio.h>

int main() {
    float weight, height, bmi;
    int weight_result, height_result;
    weight_result = scanf("%f", &weight);
    height_result = scanf("%f", &height);
    if(weight_result != 1 | height_result != 1){
        printf("Invalid input type!");
        return 0;
    }
    if (weight < 30.0 || weight > 300.0) {
        printf("Weight out of range!\n");
        return 0;
    }
    if (height < 1.0 || height > 2.5) {
        printf("Height out of range!\n");
        return 0;
    }
    bmi = weight / (height * height);
    printf("BMI: %.1f\n", bmi);
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Category: Normal weight\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }

    return 0;
}
