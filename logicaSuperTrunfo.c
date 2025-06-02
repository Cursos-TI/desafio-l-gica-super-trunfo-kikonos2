#include <stdio.h>

#define NUM_CARTAS 2  // Número de cartas que você quer cadastrar

// Definindo a estrutura Carta (sem typedef)
struct Carta {
    char estado[3];
    char codigo[4];
    char nomedaCidade[50];
    int numero_habitantes;
    float areaTotal;
    float pib;
    int pontos_turisticos;
};

int main() {
    printf("Desafio Super Trunfo!\n");

    // Cria um array de structs Carta
    struct Carta cartas[NUM_CARTAS];

    // Loop para ler informações de cada carta
    for (int i = 0; i < NUM_CARTAS; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        printf("Digite o estado (ex: SC): ");
        scanf("%2s", cartas[i].estado);

        printf("Digite o codigo: ");
        scanf("%3s", cartas[i].codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nomedaCidade);

        printf("Digite o numero de habitantes: ");
        scanf("%d", &cartas[i].numero_habitantes);

        printf("Digite a area total: ");
        scanf("%f", &cartas[i].areaTotal);

        printf("Digite o PIB: ");
        scanf("%f", &cartas[i].pib);

        printf("Digite os pontos turisticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);
    }

    // Exibe as informações de cada carta
    for (int i = 0; i < NUM_CARTAS; i++) {
        printf("\n--- Carta %d ---\n", i + 1);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].nomedaCidade);
        printf("Numero de habitantes: %d\n", cartas[i].numero_habitantes);
        printf("Area total: %.2f\n", cartas[i].areaTotal);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos turisticos: %d\n", cartas[i].pontos_turisticos);
    }

    return 0;
}