#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    // Operadores relacionais retornam 1 (verdadeiro) ou 0 (falso)
    printf("a > b   (maior que):        %d\n", a > b);
    printf("a < b   (menor que):        %d\n", a < b);
    printf("a >= b  (maior ou igual):   %d\n", a >= b);
    printf("a <= b  (menor ou igual):   %d\n", a <= b);
    printf("a == b  (igual):            %d\n", a == b);
    printf("a != b  (diferente):        %d\n", a != b);

    return 0;
}