#include <stdio.h>

int main() {
    // Variáveis para as duas cartas
    char estado1[20], estado2[20];
    char codigocarta1[20], codigocarta2[20];
    char nomecidade1[50], nomecidade2[50];  // Aumentei para nomes reais com espaços
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superpoder;
    
    // Leitura da primeira carta
    printf("Digite o nome do primeiro estado: ");
    scanf("%19s", estado1);

    printf("Digite o codigo da primeira carta: ");
    scanf("%19s", codigocarta1);

    printf("Digite o nome da primeira cidade: ");
    scanf(" %49[^\n]", nomecidade1);  // Permite espaços no nome

    printf("Digite a populacao da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("Digite a area da primeira cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);

    // Leitura da segunda carta
    printf("\n--- Segunda carta ---\n");
    printf("Digite o nome do segundo estado: ");
    scanf("%19s", estado2);

    printf("Digite o codigo da segunda carta: ");
    scanf("%19s", codigocarta2);

    printf("Digite o nome da segunda cidade: ");
    scanf(" %49[^\n]", nomecidade2);

    printf("Digite a populacao da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("Digite a area da segunda cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    // Cálculos automáticos
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    // Exibição da primeira carta
    printf("\n---- PRIMEIRA CARTA ----\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    // Exibição da segunda carta
    printf("\n---- SEGUNDA CARTA ----\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    return 0;
}