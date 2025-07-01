#include <stdio.h>

int main(){
    float vetor1[10],vetor2[10],menor[10],maior[10];
    for(int i=0;i<10;i++){
        printf("Insira o %d valor para o vetor1: ",i+1);
        scanf("%f", &vetor1[i]);
    }
    for(int i=0;i<10;i++){
        printf("Insira o %d valor para o vetor2: ",i+1);
        scanf("%f", &vetor2[i]);
    }
    for (int i = 0; i < 10; i++){
        if(vetor1[i]>vetor2[i]){
            menor[i]=vetor2[i];
            maior[i]=vetor1[i];
        }
        if(vetor2[i]>vetor1[i]){
            menor[i]=vetor1[i];
            maior[i]=vetor2[i];
        }
        if(vetor1[i]==vetor2[i]){
            menor[i]=maior[i]=vetor1[i];
        }
    }
    printf("\nVetor1: \n");
    for (int i = 0; i < 10; i++){
        printf("%.2f; ",vetor1[i]);
    }
    printf("\nVetor2: \n");
    for (int i = 0; i < 10; i++){
        printf("%.2f; ",vetor2[i]);
    }
    printf("\nMaiores: \n");
    for (int i = 0; i < 10; i++){
        printf("%.2f; ",maior[i]);
    }
    printf("\nMenores: \n");
    for (int i = 0; i < 10; i++){
        printf("%.2f; ",menor[i]);
    }
    
    return 0;
}