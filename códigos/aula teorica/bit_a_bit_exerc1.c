//
// Created by Anna Bittencourt on 09/03/26.
//
#include<stdio.h>
#include<stdint.h>

int main() {
    //A:
    uint8_t status = 0b01111111;
    //B:
    status = status | (0b10000000);
    //C:
    status = status &~ (0b00000011);
    //D:
    status = status | (0b00001000);

    //A:
    if (status & (1 << 6)){
        printf("Check! O bit 6 está em 1\n");
    }else {
        printf("O bit 6 está em 0\n");
    }
    //B:
    if (!(status && 1<<3)){
        printf("Check!O bit 3 está em 0");
    }else {
        printf("O bit 3 está em 1");
    }
    //C:
    status = ~(status);
}