//
// Created by Anna Bittencourt on 21/03/26.
//
#include <stdio.h>

int add (int a, int b);
int subtract (int a, int b);
int multiply(int a, int b);
int divide (int a, int b);
int calculate (char op, int num, int num2);

int main() {
    int a, b;
    char op;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf(" %c", &op);

    int resultado = calculate(op, a, b);

    if (resultado != -1){
        printf("%d", resultado);
    }

    return 0;
}

int calculate(char op, int num, int num2){
    if (op == '+'){
        return add(num, num2);
    }
    else if (op == '-'){
        return subtract(num, num2);
    }
    else if (op == '*'){
        return multiply(num, num2);
    }
    else if(op == '/'){
        if (num2 == 0){
            printf("Invalid input");
            return -1;
        }
        return divide(num, num2);
    }

    printf("Invalid input");
    return -1;
}

int add (int a, int b){
    return a + b;
}

int subtract (int a, int b){
    return a - b;
}

int multiply (int a, int b){
    return a * b;
}

int divide (int a, int b){
    return a / b;
}