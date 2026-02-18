#include <stdio.h>
int main(){
    float numero1, numero2, numero3,media;
   

    printf("entre com o primeiro numero:");
    scanf(" %f",&numero1);
    printf("entre com o segundo numero:");
    scanf(" %f",&numero2);
    printf("entre com o terceiro numero:");
    scanf(" %f",&numero3);
    printf("numero 1 é:%.2f e o numero 2 é:%.2f e o numero 3 é:%.2f",numero1, numero2, numero3);
    media = (numero1 + numero2+numero3) / 3;
    printf("a media é igual a:%.2f",media);

    return 0;


}