#include <stdio.h>

int main() {
    // Tipos inteiros

    // int: máximo ≈ +2.147.483.647 (INT_MAX em 32 bits)
    int numero_int = 2147483647;                    // valor máximo típico de int 32 bits

    // long int: máximo ≈ +9.223.372.036.854.775.807 (em sistemas 64 bits)
    // Pode ser 32 bits em alguns Windows → máximo 2147483647
    long int numero_long = 9223372036854775807L;    // L = sufixo para long

    // long long int: sempre 64 bits, máximo garantido
    long long int numero_long_long = 9223372036854775807LL;  // LL = sufixo

    // Tipos de ponto flutuante
    double numero_double = 3.14159265358979323846;           // precisão ~15-17 dígitos
    long double numero_long_double = 3.141592653589793238462643383279502884L;

    // Impressão dos valores
    printf("=== Tipos inteiros ===\n");
    printf("int:              %d\n", numero_int);
    printf("long int:         %ld\n", numero_long);
    printf("long long int:    %lld\n", numero_long_long);

    printf("\n=== Tipos ponto flutuante ===\n");
    printf("double:           %.15f\n", numero_double);
    printf("long double:      %.18Lf\n", numero_long_double);

    return 0;
}