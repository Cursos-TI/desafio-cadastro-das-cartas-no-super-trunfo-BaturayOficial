#include <stdio.h>

int main(){
    char estado[50], estado2[50];
    char codigo[50], codigo2[50];
    char nomecidade[50], nomecidade2[50];
    int pontosturisticos, pontosturisticos2;
    float area, PIB, populacao, area2, PIB2, populacao2;
    char carta[50], carta2[50];
    float densidade1, densidade2;
    float PIBcap1, PIBcap2;
    float media, media2;
    

    //Carta 1

    printf("\nCarta 1:\n");

    printf("Estado: ");
    scanf(" %s", &estado);

    printf("Código: ");
    scanf("%s", &codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &nomecidade);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos);

    printf("População: ");
    scanf("%e", &populacao);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Área: ");
    scanf("%f", &area);

    media = (populacao + area) / 2;
    media = (populacao + PIB) / 2;

    //Carta 2

    printf("\nCarta 2:\n");

    printf("Estado: ");
    scanf(" %s", &estado2);

    printf("Código: ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &nomecidade2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("População: ");
    scanf("%e", &populacao2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Área: ");
    scanf("%f", &area2);

    media2 = (populacao2 + area2) / 2;
    media2 = (populacao2 + PIB2) / 2;

    //Impressão Carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
    printf("População: %.2f de habitantes\n", populacao);
    printf("PIB: %.2f Bilhões de Reais\n", PIB);
    printf("Área: %.2f km²\n", area);
    printf("Densidade populacional: %.2f hab/km²\n", media);
    printf("PIB per Capita: %.2f reais\n", media);

    //Impressão Carta 2

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("População: %.2f de habitantes\n", populacao2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Área: %.2f km²\n", area2);
    printf("Densidade populacional: %.2f hab/km²\n", media2);
    printf("PIB per Capita: %.2f reais", media2);

    return 0;

}
