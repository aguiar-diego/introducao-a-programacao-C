#include <stdio.h>

// Função para verificar se um número é palíndromo
int verificaPalindromo(int numero) {
    int original = numero;
    int reverso = 0;

    // Inverte o número
    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    // Verifica se o número é igual ao seu reverso
    if (original == reverso) {
        return 1; // É um palíndromo
    } else {
        return 0; // Não é um palíndromo
    }
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("0\n"); // Retorna 0 para números negativos ou zero
    } else {
        printf("%d\n", verificaPalindromo(num)); // Retorna 1 se for palíndromo, 0 caso contrário
    }

    return 0;
}
