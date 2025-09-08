#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char populacao1, pib1, pontosTuristicos1;

    // Variáveis da carta 2
    char populacao2, pib2, pontosTuristicos2;

    printf("=== SUPER TRUNFO SIMPLES ===\n\n");

    // Leitura da primeira carta
    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite o PIB da carta 1: ");
    scanf("%d", &pib1);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Leitura da segunda carta
    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite o PIB da carta 2: ");
    scanf("%d", &pib2);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n=== RESULTADO ===\n");

    printf("Carta 1 - Populacao: %d | PIB: %d | Pontos Turisticos: %d\n",
           populacao1, pib1, pontosTuristicos1);
    printf("Carta 2 - Populacao: %d | PIB: %d | Pontos Turisticos: %d\n",
           populacao2, pib2, pontosTuristicos2);

    return 0;
}