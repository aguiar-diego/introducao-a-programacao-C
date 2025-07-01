#include <stdio.h>

int main(){
   
    int N=0, aux=0, tam=0;
    while (N <= 0){
        printf("Digite N: ");
        scanf("%d", &N);    
    }
    
    aux = N;
    while(aux > 0){
        aux = aux / 2;
        tam++;
    }
    
    int vetor[tam];
    aux = N;
    for(int i = tam; i > 0; i--){
        vetor[i-1] = aux % 2;
        aux = aux / 2;
    }

    printf("Binario: ");
    for (int i = 0; i < tam; i++){
        printf("%d", vetor[i]);
    }
    return 0;
}