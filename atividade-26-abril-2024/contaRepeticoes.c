#include <stdio.h>

// Função para contar repetições de um dígito em um número
int contarRepeticoes(int numero, int digito) {
    int contador = 0; // Inicializa o contador de repetições
    int ultimoDigito = -1; // Inicialização para garantir que o primeiro dígito não seja contado

    // Enquanto ainda houver dígitos no número
    while (numero > 0) {
        int digitoAtual = numero % 10; // Obtém o último dígito do número
        if (digitoAtual == digito && digitoAtual == ultimoDigito) {
            contador++; // Se o dígito atual for igual ao dígito desejado e igual ao último dígito, incrementa o contador
        }
        ultimoDigito = digitoAtual; // Atualiza o último dígito para a próxima iteração
        numero /= 10; // Remove o último dígito do número
    }

    return contador; // Retorna o total de repetições
}

int main() {
    int numero; // Número de entrada
    printf ("Digite o primeiro parametro:");
    scanf ("%d", &numero);
    int digito; // Dígito a ser contado
    printf ("Digite o segundo parametro:");
    scanf ("%d", &digito);
    int resultado = contarRepeticoes(numero, digito); // Chama a função para contar repetições
    printf("Para o numero %d, o digito %d aparece repetido %d vezes na sequencia do primeiro parametro.\n", numero, digito, resultado);

    // Repita o processo para os outros exemplos (3444, 3434 e 8549) aqui...

    return 0; // Finaliza o programa
}
