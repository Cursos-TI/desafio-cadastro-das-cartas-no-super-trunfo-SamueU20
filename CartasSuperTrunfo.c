#include <stdio.h>

//Nível Novato
int main() {

    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

// Instruções para o usuário - Cadastro da Carta 1
    printf("CADASTRO DA CARTA 1\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);          // Lê string com espaços
    
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    
    printf("Digite a area em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

// Instruções para o usuário - Cadastro da Carta 2
    printf("\nCADASTRO DA CARTA 2\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);       // Lê string com espaços
    
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    
    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    
    // Exibição dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    
    // Exibição dos dados cadastrados
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
