#include <stdio.h>
int main (){
    char produtoA[30] = "A";
    char produtoB[30] = "B";
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;
    float valorA = 10.50;
    float valorB = 20.40;
    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;
    double valortotalA;
    double valortotalB;
    int resultadoA, resultadoB;


    printf("produto A: %s tem estoque: %u e o valor unitario é R$ :%.2f\n", produtoA,estoqueA,valorA);
    printf("produto b: %s tem estoque: %u e o valor unitario R$ : %.2f\n", produtoB,estoqueB,valorB);
    resultadoA = estoqueA > estoqueminimoA;
    resultadoB = estoqueB > estoqueminimoB;
    printf("o produto : %s tem estoque minimo: %d\n",produtoA,resultadoA);
    printf("o produto : %s tem estoque minimo: %d\n", produtoB,resultadoB);
    printf("o Valor total de: %s (R$: %.2f) é maior que valor total de: %s (R$: %.2f), resultado: %d",
    produtoA,estoqueA * valorA, produtoB ,estoqueB *valorB, (estoqueA * valorA) > (estoqueB * valorB));

    return 0;




}