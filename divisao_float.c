#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    // Sem casting: divisão inteira (resultado truncado)
    printf("Divisao inteira (sem casting): %d\n", a / b);  // 3

    // Com casting: força resultado float
    float quociente = (float)a / b;
    printf("Quociente com casting (float): %.2f\n", quociente);  // 3.33

    // Alternativa: casting no segundo operando
    float quociente2 = a / (float)b;
    printf("Outra forma de casting: %.2f\n", quociente2);  // 3.33

    return 0;
}