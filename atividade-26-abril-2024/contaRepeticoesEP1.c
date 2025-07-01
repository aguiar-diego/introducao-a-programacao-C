#include <stdio.h>

// Fun��o para contar repeti��es de um d�gito em um n�mero
int contarRepeticoes(int numero, int digito) {
    int contador = 0; // Inicializa o contador de repeti��es
    int ultimoDigito = -1; // Inicializa��o para garantir que o primeiro d�gito n�o seja contado

    // Enquanto ainda houver d�gitos no n�mero
    while (numero > 0) {
        int digitoAtual = numero % 10; // Obt�m o �ltimo d�gito do n�mero
        if (digitoAtual == digito && digitoAtual == ultimoDigito) {
            contador++; // Se o d�gito atual for igual ao d�gito desejado e igual ao �ltimo d�gito, incrementa o contador
        }
        ultimoDigito = digitoAtual; // Atualiza o �ltimo d�gito para a pr�xima itera��o
        numero /= 10; // Remove o �ltimo d�gito do n�mero
    }

    return contador; // Retorna o total de repeti��es
}

int main() {
    int numero; // N�mero de entrada
    printf ("Digite o primeiro parametro:");
    scanf ("%d", &numero);
    int digito; // D�gito a ser contado
    printf ("Digite o segundo parametro:");
    scanf ("%d", &digito);
    int resultado = contarRepeticoes(numero, digito); // Chama a fun��o para contar repeti��es
    printf("Para o numero %d, o digito %d aparece repetido %d vezes na sequencia do primeiro parametro.\n", numero, digito, resultado);

    // Repita o processo para os outros exemplos (3444, 3434 e 8549) aqui...

    return 0; // Finaliza o programa
}
