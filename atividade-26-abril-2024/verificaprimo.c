#include <stdio.h>
#include <stdbool.h>

bool verifica_primo(int numero) {//funcao verifica primo verifica se um numero dado é primo ou não, ela retorna 1 caso for primo ou 0 caso não for
    if (numero <= 1) {//verifica se um numero é <=1, se sim retorna falso, pois numeros primos sao >1
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {//enquanto i*i for <= numero, adiciona 1 ao i
        if (numero % i == 0) {// se o resto for 0 return false
            return false;
        }
    }
    return true;// caso contrario retorna true, o numero é primo!
}

int main() {
    int qtd_numeros;//armazena a variavel qtd_numeros
    printf("Quantos numeros voce deseja inserir? "); // pergunta ao usuario a quantidade de numeros que deseja inserir
    scanf("%d", &qtd_numeros);//atribui a quantidade de numeros para a variavel qtd_numeros

    if (qtd_numeros <= 0) {
        printf("Por favor, insira um número positivo maior que zero.\n");// se a quantidade de numeros for <= 0 pede para o usurario digitar uma quantidade de numeros maior
        return 1;
    }

    int numeros[qtd_numeros];//cria um array para armazenar a os numeros digitados pelo usuario, de acordo com a quantidade desejada
    for (int i = 0; i < qtd_numeros; ++i) {//cria variavel contadora para que se repita a mensagem "digite um numero inteiro e positivo" de acordo com a quantidade informada
        printf("Digite um numero inteiro e positivo: ");
        scanf("%d", &numeros[i]);//atribui os numeros digitados para o array numeros
        if (numeros[i] <= 0) {
            printf("Numero invalido. Insira um número positivo.\n");// caso o usuario digite um numero invalido
            return 1;
        }
    }

    int primos = 0;// declara variavel primos
    for (int i = 0; i < qtd_numeros; ++i) {
        if (verifica_primo(numeros[i])) {//verifica todos os numeros armazenados no array
            primos++;//adiciona 1 no marcador dos numeros primos,
        }
    }

    printf("Quantidade de numeros primos: %d\n", primos);
    return 0;
}
