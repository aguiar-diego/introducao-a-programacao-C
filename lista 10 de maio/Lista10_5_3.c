#include <stdio.h>
int main(){
    int tam1,tam2;
    while(tam1<=0 || tam1>20){
    printf("Digite o tamanho do vetor%d:",1);
    scanf("%d", &tam1);
    } 
    while(tam2<=0 || tam2>20){
    printf("Digite o tamanho do vetor%d:",2);
    scanf("%d", &tam2);
    }
    int vetor1[tam1],vetor2[tam2];
    for (int i=0; i<tam1; i++){
        printf("Digite o %d valor do vetor%d:", i+1, 1);
        scanf("%d",&vetor1[i]);
    }
    for (int i=0; i<tam2; i++){
        printf("Digite o %d valor do vetor%d:", i+1, 2);
        scanf("%d",&vetor2[i]);
    }
    printf("Elementos repetidos:\n");
    for (int i=0; i<tam1;i++){
        for(int j=0; j<tam2;j++){
            if(vetor1[i]==vetor2[j]){
                printf("%d; ", vetor1[i]);
                i++;
            }
        }
    }
    return 0;
}