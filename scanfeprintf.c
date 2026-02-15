#include <stdio.h>
 
int main() {
    int idade = 25;
    float altura = 1.75;
    float saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[20] = "Bruno";
 
    /*printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
    */
   printf("digite sua idade:\n");
   scanf("%d",&idade);
   printf("a sua idade é: %d\n", idade);
   printf("digite sua altura:\n");
   scanf("%f",&altura);
   printf("sua altura é: %.2f\n",altura);
   printf("digite o seu nome:\n");
   scanf("%s",nome);
   printf("seu nome é:%s\n",nome);
   printf("digite seu saldo bancario:");
   scanf("%f",&saldoBancario);
   printf("seu saldo é:%.2f\n",saldoBancario);
   printf("digite o inicial:");
   scanf(" %c",&inicial);
   printf("seu inicial é: %c",inicial);
     return 0;
}