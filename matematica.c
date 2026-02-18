#include <stdio.h>
int main(){

int numero1, numero2, resultado;
int soma, subtracao, multiplicacao, divisao;

printf("entre com o numero 1:");
scanf("%d", &numero1);

printf("entre com o numero 2:");
scanf("%d", &numero2);


soma = numero1 + numero2;

subtracao = numero1 - numero2;

multiplicacao= numero1 * numero2;

divisao= numero1 / numero2;
resultado = numero1;
resultado = numero1++;

printf("Soma é :%d\n", soma);
printf("subtracao é:%d\n", subtracao);
printf("multiplicacao é:%d\n",multiplicacao);
printf("divisao é:%d\n", divisao);
printf("resultado: %d", resultado);
printf("numero1: %d", numero1);
return 0;



}