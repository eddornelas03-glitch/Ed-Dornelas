#include <stdio.h>

int main() {
    // Tipos inteiros

    // int: máximo ≈ +2.147.483.647 (INT_MAX = 2.114.748.364.7 em 32 bits)
    int numero_int = 2147483647;                    // valor máximo típico de int 32 bits

    // long int: máximo ≈ +9.223.372.036.854.775.807 (em sistemas 64 bits modernos)
    // (em alguns sistemas Windows ainda pode ser 32 bits: +2.147.483.647)
    long int numero_long = 9223372036854775807L;             // L = sufixo para long
    /*Para long int, o valor máximo (LONG_MAX) varia dependendo do sistema e compilador:
    Em muitos sistemas 64 bits modernos (como Linux, macOS ou gcc no Windows), long int é 64 bits e o máximo também é 9223372036854775807 (igual ao long long).
    Mas em alguns sistemas (ex: compiladores Microsoft Visual C++ no Windows), long int ainda é 32 bits, e o máximo é 2147483647 (2^31 - 1).
    O padrão C não fixa o tamanho de long int (pode ser 32 ou 64 bits), então para portabilidade, prefira long long int quando precisar de valores muito grandes.*/
    // long long int: máximo ≈ +9.223.372.036.854.775.807 (LLONG_MAX)
    // (sempre 64 bits em compiladores C99+)
    long long int numero_long_long = 9223372036854775807LL;  // LL = sufixo para long long

    // Tipos de ponto flutuante

    // double: precisão ≈ 15-17 dígitos decimais significativos
    // faixa aproximada: ±1.7E±308 (não tem "máximo inteiro", mas limite de representação)
    double numero_double = 3.14159265358979323846;   // precisão ~15-17 dígitos

    // long double: precisão maior (geralmente 18-19 dígitos ou mais)
    // faixa aproximada: ±1.1E±4932 (depende muito do compilador e hardware)
    long double numero_long_double = 3.141592653589793238462643383279502884L;  // precisão maior (depende do sistema)

    // Impressão com printf - especificadores corretos
    printf("=== Tipos inteiros ===\n");
    printf("int:              %d\n", numero_int);                  // %d para int
    printf("long int:         %ld\n", numero_long);                // %ld para long int
    printf("long long int:    %lld\n", numero_long_long);          // %lld para long long int

    printf("\n=== Tipos ponto flutuante ===\n");
    printf("double:           %.15f\n", numero_double);            // %.15f mostra mais casas
    printf("long double:      %.18Lf\n", numero_long_double);      // %Lf para long double

    // Mostrando os valores das variáveis (modificado conforme pedido)
    printf("\n=== Valores máximos atribuídos às variáveis ===\n");
    printf("int:              %d\n", numero_int);
    printf("long int:         %ld\n", numero_long);
    printf("long long int:    %lld\n", numero_long_long);

    return 0;
}