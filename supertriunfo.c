#include <stdio.h>
    int main(){
        char estado1[20], estado2[20], codigocarta1[20], codigocarta2[20], nomecidade1[20], nomecidade2[20];
        int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
        float area1, area2, pib1, pib2,densidade1,pibpercapita1,densidade2,pibpercapita2;
        
        printf("digite o nome do primeiro estado:");
        scanf("%19s", estado1);
        printf("digite o codigo da primeira carta:");
        scanf("%19s", codigocarta1);
        printf("digite o nome da primeira cidade:");
        scanf("%19s", nomecidade1);
        printf("digite a população da primeira cidade:");
        scanf("%d", &populacao1);
        printf("digite o numero de pontos turisticos da primeira cidade:");
        scanf("%d", &pontosturisticos1);
        printf("digite a area da primeira cidade:");
        scanf("%f", &area1);
        printf("digite o pib da primeira cidade:");
        scanf("%f", &pib1);


        printf("digite o nome do segundo estado:");
        scanf("%19s", estado2);
        printf("digite o codigo da segunda carta:");
        scanf("%19s", codigocarta2);
        printf("digite o nome da segunda cidade:");
        scanf("%19s", nomecidade2);
        printf("digite a população da segunda cidade:");
        scanf("%d", &populacao2);
        printf("digite o numero de pontos turisticos da segunda cidade:");
        scanf("%d", &pontosturisticos2);
        printf("digite a area da segunda cidade:");
        scanf("%f", &area2);
        printf("digite o pib da segunda cidade:");
        scanf("%f", &pib2);
        densidade1 = (float) populacao1 / area1;
        densidade2 = (float) populacao2 / area2;
        pibpercapita1 = (float) pib1 / populacao1;
        pibpercapita2 = (float) pib2 / populacao2;

        


        printf("----PRIMEIRA CARTA----\n");
        printf("o nome do estado é:%s\n", estado1);
        printf("o codigo da carta é:%s\n", codigocarta1);
        printf("o nome da cidade é:%s\n", nomecidade1);
        printf("a população é:%d\n", populacao1);
        printf("o numero de pontos turisticos é:%d\n", pontosturisticos1);
        printf("a area é:%.2f\n", area1);
        printf("o pib é:%.2f\n", pib1);
        printf("a densidade é:%.2f\n", densidade1);
        printf("o pib per capita é:%.2f\n", pibpercapita1);       

        printf("----SEGUNDA CARTA----\n");
        printf("o nome do estado é:%s\n", estado2);
        printf("o codigo da carta é:%s\n", codigocarta2);
        printf("o nome da cidade é:%s\n", nomecidade2);
        printf("a população é:%d\n", populacao2);
        printf("o numero de pontos turisticos é:%d\n", pontosturisticos2);
        printf("a area é:%.2f\n", area2);
        printf("o pib é:%.2f\n", pib2);
        printf("a densidade é:%.2f\n", densidade2);
        printf("o pib per capita é:%.2f\n", pibpercapita2);       




            return 0;








    }