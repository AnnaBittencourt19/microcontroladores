//
// Created by Anna Bittencourt on 08/03/26.
/*Crie um programa que exiba quatro opções:
 *1. Sensor de Umidade,
 *2. Sensor de Temperatura,
 *3. Sensor de Pressão e 0. Sair.
 *O usuário digita o número e o programa deve imprimir qual sensor foi selecionado.
 *Não esqueça de tratar caso o usuário digite um número que não está no menu.
 */
#include<stdio.h>
int main() {
    int sensor_escolhido;
    printf("Escolha qual sensor deseja: \n 1. Sensor de Umidade \n 2. Sensor de Temperatura \n 3. Sensor de Pressão \n 0.Sair\n");
    scanf("%d", &sensor_escolhido);
    switch(sensor_escolhido) {
        case 1:
            printf("Sensor de Umidade\n");
            break;
        case 2:
            printf("Sensor de Temperatura\n");
            break;
        case 3:
            printf("Sensor de Pressão\n");
            break;
        case 0:
            return 0;
            break;
        default:
            printf("Opcao invalida\n Saindo...");
            return 0;
    }
}