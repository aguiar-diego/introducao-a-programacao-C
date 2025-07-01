#include <stdio.h>
int main(){
    int tam1,tam2;
    //____________________________________________________________________
    while(tam1<=0 || tam1>20){
    printf("Digite o tamanho do vetor%d:",1);
    scanf("%d", &tam1);
    }
    int vetor1[tam1];                                                       //vetor 1
    for (int i=0; i<tam1; i++){
        printf("Digite o %d valor do vetor%d:", i+1, 1);
        scanf("%d",&vetor1[i]);
    } 
    //____________________________________________________________________
    while(tam2<=0 || tam2>20){
    printf("Digite o tamanho do vetor%d:",2);
    scanf("%d", &tam2);
    int vetor2[tam2];
    }                                                                       //vetor2
        for (int i=0; i<tam2; i++){
        printf("Digite o %d valor do vetor%d:", i+1, 2);
        scanf("%d",&vetor2[i]);
    }
    //____________________________________________________________________
    int vetor3[20];

    for (int i = 0; i < tam1; i++){
        for (int j = 0; j < tam2; j++){
            for (int k = 0; k < 20; k++){
                if (vetor1[i]==vetor2[j]){
                    vetor3[k]=vetor1[i];

                }
                
                
            }
            
        }
        
    }
    
    
    
    
    


    return 0;
}  