#include <stdio.h>

int main(){
    int N=0;
    while (N<=0){
        printf("Digite N: ");
        scanf("%d", &N);
    }
    float num=0, maior=0, menor=0, soma=0, media=0;
    printf("\nDigite o %d numero: ", 1);
    scanf("%f", &num );
    maior=menor=soma=num;
    for (int i = 1; i < N; i++){
        printf("\nDigite o %d numero: ", i+1);
        scanf("%f", &num);
        soma+=num;
        if (num>maior){
            maior=num;
        }
        if (num<menor){
        menor=num;
        }
    }
    media=soma/N;
    printf("\nMaior: %.2f", maior);
    printf("\nMenor: %.2f", menor);
    printf("\nMedia: %.2f", media);
    return 0;
}