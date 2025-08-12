#include <stdio.h>

int main()
{
    // Declaração das variáveis para a Carta 1
    char estado1, codigo1[5], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Declaração das variáveis para a Carta 2
    char estado2, codigo2[5], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Variáveis para cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Instruções para o usuário inserir os dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (exemplo: A01): ");
    scanf(" %s", &codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &nomeCidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Instruções para o usuário inserir os dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (exemplo: B02): ");
    scanf(" %s", &codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &nomeCidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Exibição das informações da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição das informações da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Cálculos para a primeira cidade
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cálculos para a segunda cidade
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos resultados para a primeira cidade
    printf("\n--- Informações da Primeira Cidade ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %c\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    // Exibição dos resultados para a segunda cidade
    printf("\n--- Informações da Primeira Cidade ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %c\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    printf("\n--- Resultado Final ---\n");
    printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);

    // comparando atributo "População"
    if (populacao1 > populacao2)
    {
        printf("Resulatado: Carta 1 (%s) venceu!", nomeCidade1);
    }
    else
    {
        printf("Resulatado: Carta 2: (%s) venceu!", nomeCidade2);
    }

    return 0;
}
