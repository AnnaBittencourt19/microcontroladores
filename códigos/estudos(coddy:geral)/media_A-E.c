#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota final (0 a 10): ");
    scanf("%f", &nota);

    if (nota >= 9.0) {
        printf("A – Excelente!\n");
    } else if (nota >= 7.5) {
        printf("B – Muito bom\n");
    } else if (nota >= 6.0) {
        printf("C – Aprovado\n");
    } else if (nota >= 4.0) {
        printf("D – Recuperação\n");
    } else {
        printf("F – Reprovado\n");
    }

    return 0;
}