#include <stdio.h>

int main() {
    char chovendo[4];
    printf("Está chovendo? ");
    scanf("%s", chovendo);

    //erro pois não se compara strings com ==  e sim com strcmp mas ainda não aprendi isso (é apenas um exemplo ilustrativo da lógica)
    if (chovendo == "sim") {
    //Se o valor de chovendo for sim (condição: chovendo == "sim)
        printf("Pegue o guarda chuva\n"); //se condição verdadeira imprime isso 
    }

    printf("Fim do programa.\n");  // sempre executa
    return 0;
}