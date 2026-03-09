#include <stdio.h>

int main() {
    int nums;
    int soma = 0;
    printf("Digite os numeros para serem somados ou 0 para sair:\n");
    do {
        scanf("%d", &nums);
        soma += nums;
        printf("O total da soma até agora é %d\n", soma);
    } while (nums != 0);
    return 0;
}