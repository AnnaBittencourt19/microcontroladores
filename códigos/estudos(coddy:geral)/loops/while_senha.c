//
// Created by Anna Bittencourt on 08/03/26.
//O programa deve solicitar uma senha de 4 dígitos. Enquanto a senha digitada for diferente de 2026, o programa continua pedindo a senha.

#include<stdio.h>

int main() {
    int senha = 2026;
    int senha_usu;
    printf("Digite a senha:");
    scanf("%d", &senha_usu);
    while (senha_usu != senha) { // enquanto senha for diferente entre aqui
        printf("Senha incorreta!\nDigite novamente:");
        scanf("%d", &senha_usu);
    }
    printf("Senha correta!\nSeja bem-vindo");
    return 0;
}

