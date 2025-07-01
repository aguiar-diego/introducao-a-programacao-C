 #include <stdio.h>

float repeticao( float vetor[], int tam, float parametro){
    int cont=0;
    printf("Posicoes onde o parametro %.2f aparece no vetor:", parametro);
    
    for (int i=0; i<tam; i++){
        if(parametro==vetor[i]){
            printf("\nPosicao: %d", i+1);
            cont++;
        }
    }
    printf ("\nTotal de repeticoes do parametro: %d\n", cont);
    return 0;
}

int main (){
    
    int tam=0, indMaior = 1, indMenor = 1;   //declara as variaveis
    float media=0, maior=0, menor=0, soma=0, parametro;

    while (tam<=0 || tam>20){
        printf("Digite o tamanho do vetor(maximo 20): ");       //tam recebe o tamanho do vetor
        scanf("%d", &tam);
    }
    
    float vetor[tam];
    printf("Digite o %d valor:\n", 1);
    scanf("%f", &vetor[0]);
    
    
    soma = maior = menor = vetor[0];                            // soma, menor, maior e vetor0 recebem o primeiro valor digitado
    

    for (int i=1; i<tam; i++){
        printf("Digite o %d valor:\n", i+1);
        scanf("%f", &vetor[i]);
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
    media = (float) soma /tam;                                  //calculo da media                                      
    

    printf("Os valores do vetor sao:\n");                     //printa o vetor
    for (int i=0; i<tam; i++){
        printf("%.2f", vetor[i]);
        printf("; ");
    }

    printf("\nMenor valor: %.2f\n", menor);                   //printa maior, menor, soma, media e indices
    printf("Posicao no vetor: %d\n", indMenor);
    printf("Maior valor : %.2f\n", maior);
    printf("Posicao no vetor: %d", indMaior);
    printf("\nSoma: %.2f ", soma);
    printf("\nMedia: %.2f", media);
    
    printf("\nDigite o parametro:");
    scanf("%f", &parametro);

    repeticao(vetor, tam, parametro);

    return 0;
}