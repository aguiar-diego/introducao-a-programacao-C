#include <stdio.h>

// Fun��o para verificar se um n�mero � pal�ndromo
int verificaPalindromo(int numero) {
    int original = numero;
    int reverso = 0;

    // Inverte o n�mero
    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    // Verifica se o n�mero � igual ao seu reverso
    if (original == reverso) {
        return 1; // � um pal�ndromo
    } else {
        return 0; // N�o � um pal�ndromo
    }
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("0\n"); // Retorna 0 para n�meros negativos ou zero
    } else {
        printf("%d\n", verificaPalindromo(num)); // Retorna 1 se for pal�ndromo, 0 caso contr�rio
    }

    return 0;
}
