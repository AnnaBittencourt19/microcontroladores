#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int quantpares = 0;
    int quantimpares = 0;
    int quantiposi = 0;
    int quantineg = 0;
    int result = 0;
    int vetor; 
    
    for (int j = 0; j<=n; j++){
            for(int i =0; i<=5; i++){
                scanf("%d", vetor);  
                classificar(vetor);
        }
    }
    printf ("quantidade de numeros pares: %d", quantpares );
}
void classificar (){
    if (vetor % 2 == 0){
        quantpares++;
    }else {
        quantpares++;
    }
    if(vetor > 0){
        quantiposi++;
    }else{
        quantineg++;
    }
}