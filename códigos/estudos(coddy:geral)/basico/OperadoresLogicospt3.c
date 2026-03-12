//
// Created by Anna Bittencourt on 12/03/26.
//
#include <stdio.h>

int main() {
    // Initialize variables
    int isSunny = 1;
    float windSpeed = 5.4;
    int temperature = 23;
    int solarPanelOutput = 9;
    int isCloudy = 0;

    // Create the logical expression
    int isGoodDay = (isSunny == 1) && (windSpeed < 10) && (solarPanelOutput < 15) && (temperature > 20 || isCloudy == 0);
    // na condição OU (||) temperature já retorna 1 então o programa não passa pelo isCloudy pq na condição OU basta 1 ser positivo para retornar verdadeiro
    // Quando se tem uma condição E e logo já dá 0, o programa não testa a proxima condição pois já sabe que a resposta é falsa
    //Saber disso ajuda a fazer um codigo otimizado

    // Don't change below
    if (isGoodDay) {
        printf("Good day for solar energy\n");
    } else {
        printf("Not ideal for solar energy\n");
    }

    return 0;
}