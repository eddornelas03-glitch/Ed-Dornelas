#include <stdio.h>
int main(){

    int a = 10;
    int b = 3;
    float quoeciente = (float) a / b;
    printf("quoeciente= %.2f", quoeciente);
/*Usando float()
Você só precisa usar (float) (ou (double)) quando está fazendo uma divisão entre dois inteiros (int / int) e quer que o resultado seja com casas decimais (float ou double).
Se pelo menos um dos operandos já for float ou double, o C faz a conversão automática (chamada de promoção automática), e você não precisa colocar (float).
*/



}