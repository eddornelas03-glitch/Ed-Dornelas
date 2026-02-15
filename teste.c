#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("qual sua idade:\n");
    scanf("%d",&idade);
    printf("digite sua altura:\n");
    scanf("%f",&altura);
    printf("digite seu nome:\n");
    scanf("%s", nome);
    printf("digite sua matricula:\n");
    scanf("%d",&matricula);

    /*printf("Nome:%s\n",nome);
    printf("matricula:%d\n",matricula);
    printf("altura:%.2f\n",altura);
    printf("Idade:%d\n", idade);*/
    printf("nome:%s- matricula: %d\n", nome, matricula);
    printf("altura:%.2f - idade:%d", altura, idade);
    return 0;




}