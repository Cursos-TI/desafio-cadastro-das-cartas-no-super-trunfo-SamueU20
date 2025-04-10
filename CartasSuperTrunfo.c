#include <stdio.h>

// Programa principal
int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];           // 3 caracteres + '\0'
    char nomeCidade1[50];      // Limite de 49 caracteres para o nome
    unsigned long int populacao1;  // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;         // Nova variável para o Super Poder

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];           // 3 caracteres + '\0'
    char nomeCidade2[50];      // Limite de 49 caracteres para o nome
    unsigned long int populacao2;  // Alterado para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;         // Nova variável para o Super Poder

    // Instruções para o usuário - Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);    // Lê string com espaços
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);         // %lu para unsigned long int
    printf("Digite a area (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita para Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // PIB em reais totais dividido pela população

    // Cálculo do Super Poder para Carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    // Instruções para o usuário - Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);    // Lê string com espaços
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);         // %lu para unsigned long int
    printf("Digite a area (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita para Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;  // PIB em reais totais dividido pela população

    // Cálculo do Super Poder para Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Exibição dos dados cadastrados
    printf("\n=== Dados Cadastrados ===\n");
    
    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\nComparacao de Cartas:\n");
    
    // População: maior vence
    printf("Populacao: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    
    // Área: maior vence
    printf("Area: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    
    // PIB: maior vence
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    
    // Pontos Turísticos: maior vence
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    
    // Densidade Populacional: menor vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 2, densidadePopulacional1 < densidadePopulacional2);
    
    // PIB per Capita: maior vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    
    // Super Poder: maior vence
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

    return 0;
}
