#include <stdio.h>

int main() {
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;
    int resultado;

    printf("Entre com o numero 1: ");
    scanf("%d", &numero1);

    printf("Entre com o numero 2: ");
    scanf("%d", &numero2);

    // Cálculos básicos
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;  // Divisão inteira (descarta decimal)

    // Demonstração de pós-incremento (como você tinha)
    resultado = numero1;
    resultado = numero1++;  // Usa o valor antigo, depois incrementa numero1

    // Exibição dos resultados
    printf("\n--- Resultados ---\n");
    printf("Soma:           %d\n", soma);
    printf("Subtracao:      %d\n", subtracao);
    printf("Multiplicacao:  %d\n", multiplicacao);
    printf("Divisao inteira: %d\n", divisao);
    printf("Resultado (pós-incremento): %d\n", resultado);
    printf("numero1 após incremento: %d\n", numero1);

    return 0;
}