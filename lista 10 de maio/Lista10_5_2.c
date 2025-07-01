#include <stdio.h>
#include <stdlib.h>

int repeticao( int vetor[], int tam, int parametro){
    int cont=0;
    
    for (int i=0; i<tam; i++){
        if(parametro==vetor[i]){
            cont++;
        }
    }
    printf("O parametro %d aparece %d vez(es) no vetor nas posicoes:", parametro, cont);
    for (int i=0; i<tam; i++){
        if(parametro==vetor[i]){
            printf("\nPosicao: %d", i+1);
        }
    }
    return 0;
}

int main (){
    
    int tam=0, maior=0, menor=0, soma=0, parametro, indMaior = 1, indMenor = 1;   //declara as variaveis
    float media=0;

    while (tam<=0 || tam>20){
        printf("Digite o tamanho do vetor(maximo 20): ");       //tam recebe o tamanho do vetor
        scanf("%d", &tam);
    }
    
    int vetor[tam];

    printf("Digite o %d valor:\n", 1);
    scanf("%d", &vetor[0]);
    //caso o primeiro valor inserido for negativo o vetor nao recebe nenhum valor e maior/menor/indices/media/soma/parametro nao se aplicam
    if (vetor[0]<0){
        printf("Valor negativo inserido");
        printf("\nValores do vetor:");
        exit(0);
    }

    soma = maior = menor = vetor[0];                            // soma, menor, maior e vetor0 recebem o primeiro valor digitado
    
    for (int i=1; i<tam; i++){
        printf("Digite o %d valor:\n", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i]<0){
            tam=i;
        }
        else{
            soma += vetor[i];                                       // soma e vetor recebem cada valor digitado
            if (vetor[i]>maior){
            maior=vetor[i];
            indMaior = i+1;                                     // indice do maior e maior
            }
            else if (vetor[i]<menor){
            menor=vetor[i];
            indMenor = i+1;                                     // indice do menor e menor
            }
        }
    }
    media = (float) soma /tam;                                  //calculo da media                                      

    printf("Os valores do vetor sao:\n");                     //printa o vetor
    for (int i=0; i<tam; i++){
        printf("%d", vetor[i]);
        printf("; ");
    }

    printf("\nMenor valor: %d\n\n", menor);                   //printa maior, menor, soma, media e indices
    printf("Posicao no vetor: %d\n\n", indMenor);
    printf("Maior valor : %d\n\n", maior);
    printf("Posicao no vetor: %d\n", indMaior);
    printf("\nSoma: %d \n", soma);
    printf("\nMedia: %.2f\n", media);
    
    printf("\nDigite o parametro:\n");
    scanf("%d", &parametro);

    repeticao(vetor, tam, parametro);

    return 0;
}