//Diego Aguiar Garcia 15574221

#include <stdio.h>

int main(){
    //determina o numero de linhas e colunas da matriz (determina o tamanho da matriz)
    int linha=0,coluna=0;
    while(linha==0 || linha>10){
        printf("Digite a quantidade de linhas(max:%d): \n",10);
        scanf("%d", &linha);
    }
    while(coluna==0 || coluna>10){
        printf("Digite a quantidade de colunas(max:%d): \n",10);
        scanf("%d", &coluna);
    }
    //insere elementos na matriz
    int matriz[linha][coluna];
    for (int i=0; i<linha; i++){
        for (int j=0;j<coluna;j++){
            printf("Insira o %d elemento da %d linha:\n",j+1,i+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    //printa a matriz
    printf("Matriz:\n");
    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    
    //mostra maior e menor por linha alem da soma por linhas
    int maxL, minL, somaL, maior_somaL,isomaL;
    
    for(int i=0;i<linha;i++){
        maior_somaL = somaL = maxL = minL = matriz[i][0];
        for(int j=1;j<coluna; j++){
            if(matriz[i][j]>maxL){
                maxL=matriz[i][j];;
            }
            if (matriz[i][j]<minL){
                minL=matriz[i][j];
            }
            somaL += matriz[i][j];
            if(somaL>maior_somaL){
                maior_somaL=somaL;
                isomaL=i+1;
            }
        }
        printf("Menor da %d linha: %d\n",i+1, minL);
        printf("Maior da %d linha: %d\n",i+1, maxL);
        printf("Soma da %d linha: %d\n", i+1, somaL);
    }

    printf("A linha com a maior soma e a linha %d\n", isomaL);
    
    //mostra maior e menor por coluna alem da soma por colunas
    int maxC, minC,somaC,maior_somaC,isomaC;
    for(int i=0;i<coluna;i++){
        maior_somaC = somaC = maxC = minC = matriz[0][i];
        for(int j=1;j<linha; j++){
            if(matriz[j][i]>maxC){
                maxC=matriz[j][i];
            }
            if (matriz[j][i]<minC){
                minC=matriz[j][i];
            }
            somaC += matriz[j][i];
            if(somaC>maior_somaC){
                maior_somaC=somaC;
                isomaC=i+1;
            }
        }
        printf("Menor da %d coluna: %d\n", i+1, minC);
        printf("Maior da %d coluna: %d\n", i+1, maxC);
        printf("Soma da %d coluna: %d\n", i+1, somaC);

    }

    printf("A coluna com a maior soma e a coluna %d\n", isomaC);
    
    
    //mostra maior e menor elementos da matriz e seus indices

    int maxElement,minElement, iColmax, iLinmax,iColmin, iLinmin;
    
    maxElement=matriz[0][0];
    
    for (int i=0;i<linha;i++){
        for (int j=0;j<coluna;j++){
                if(matriz[i][j]>maxElement){
                    maxElement=matriz[i][j];
                    iColmax=j+1;
                    iLinmax=i+1;
                }
                if(matriz[i][j]<minElement){
                    minElement=matriz[i][j];
                    iColmin=j+1;
                    iLinmin=i+1;
                }
        }
    }
    printf("O maior elemento da matriz esta na linha %d e coluna %d: %d\n", iLinmax, iColmax, maxElement);
    printf("O menor elemento da matriz esta na linha %d e coluna %d: %d\n", iLinmin, iColmin, minElement);
    
    return 0;
}