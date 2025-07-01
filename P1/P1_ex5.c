#include <stdio.h>

int main(){
    float notas[6], maior=0, menor=0,soma=0,NF=0;
    printf("Digite a %d nota: ", 1);
    scanf("%f", &notas[0]);
    soma=maior=menor=notas[0];
    for (int i = 1; i < 6; i++){
        printf("Digite a %d nota: ", i+1);
        scanf("%f", &notas[i]);
        if (notas[i]<menor){
            menor=notas[i];
        }
        if (notas[i]>maior){
            maior=notas[i];
        }
        soma+=notas[i];
    }
    NF = (soma-maior-menor)/4;
    printf("A nota final e: %.2f", NF);
    return 0;
}   