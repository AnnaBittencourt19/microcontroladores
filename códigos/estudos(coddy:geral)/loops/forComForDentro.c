//
// Created by Anna Bittencourt on 16/03/26.
//
#include <stdio.h>
int main() {
    int rows, columns;
    scanf("%d", &rows);
    scanf("%d", &columns);
    // Write your code here to print the pattern
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}