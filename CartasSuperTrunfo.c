#include <stdio.h>

// Programa principal
int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];           // 3 caracteres + '\0'
    char nomeCidade1[50];      // Limite de 49 caracteres para o nome
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;  // Nova variável para densidade
    float pibPerCapita1;          // Nova variável para PIB per capita

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];           // 3 caracteres + '\0'
    char nomeCidade2[50];      // Limite de 49 caracteres para o nome
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;  // Nova variável para densidade
    float pibPerCapita2;          // Nova variável para PIB per capita

    // Instruções para o usuário - Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);    // Lê string com espaços
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita para Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;  // Conversão para float
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;   // PIB em reais totais dividido pela população

    // Instruções para o usuário - Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);    // Lê string com espaços
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita para Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;  // Conversão para float
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;   // PIB em reais totais dividido pela população

    // Exibição dos dados cadastrados
    printf("\n=== Dados Cadastrados ===\n");
    
    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
