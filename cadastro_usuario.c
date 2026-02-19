#include <stdio.h>

int main() {
    int idade;
    int matricula;
    float altura;
    char nome[50];  // Aumentei para 50 para nomes mais longos

    // Leitura dos dados do usuário
    printf("Qual sua idade? ");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf(" %49[^\n]", nome);  // Permite nomes com espaços, limite 49 chars

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    // Exibição dos dados formatados
    printf("\n--- Dados do usuário ---\n");
    printf("Nome: %s\n", nome);
    printf("Matricula: %d\n", matricula);
    printf("Altura: %.2f metros\n", altura);
    printf("Idade: %d anos\n", idade);

    return 0;
}