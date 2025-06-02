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

        printf("Digite o codigo (ex: 001): ");
        scanf("%3s", cartas[i].codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nomedaCidade);

        printf("Digite o numero de habitantes: ");
        scanf("%d", &cartas[i].numero_habitantes);

        printf("Digite a area total km²: ");
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

    // Comparação: quem tem mais pontos turisticos vence
    printf("\n=== Resultado do Duelo ===\n");
    if (cartas[0].pontos_turisticos > cartas[1].pontos_turisticos) {
        printf("A carta 1 vence com %d pontos turisticos!\n", cartas[0].pontos_turisticos);
    } else if (cartas[1].pontos_turisticos > cartas[0].pontos_turisticos) {
        printf("A carta 2 vence com %d pontos turisticos!\n", cartas[1].pontos_turisticos);
    } else {
        printf("Empate! Ambas as cartas têm %d pontos turisticos.\n", cartas[0].pontos_turisticos);
    }

    // Comparação: quem tem mais numero_habitantes vence
printf("\n=== Resultado do Duelo (Número de Habitantes) ===\n");
if (cartas[0].numero_habitantes > cartas[1].numero_habitantes) {
    printf("A carta 1 vence com %d habitantes!\n", cartas[0].numero_habitantes);
} else if (cartas[1].numero_habitantes > cartas[0].numero_habitantes) {
    printf("A carta 2 vence com %d habitantes!\n", cartas[1].numero_habitantes);
} else {
    printf("Empate! Ambas as cartas têm %d habitantes.\n", cartas[0].numero_habitantes);
}

// Comparação: quem tem maior areaTotal vence
printf("\n=== Resultado do Duelo (Área Total) ===\n");
if (cartas[0].areaTotal > cartas[1].areaTotal) {
    printf("A carta 1 vence com %.2f km² de área total!\n", cartas[0].areaTotal);
} else if (cartas[1].areaTotal > cartas[0].areaTotal) {
    printf("A carta 2 vence com %.2f km² de área total!\n", cartas[1].areaTotal);
} else {
    printf("Empate! Ambas as cartas têm %.2f km² de área total.\n", cartas[0].areaTotal);
}

// Comparação: quem tem maior pib vence
printf("\n=== Resultado do Duelo (PIB) ===\n");
if (cartas[0].pib > cartas[1].pib) {
    printf("A carta 1 vence com R$ %.2f de PIB!\n", cartas[0].pib);
} else if (cartas[1].pib > cartas[0].pib) {
    printf("A carta 2 vence com R$ %.2f de PIB!\n", cartas[1].pib);
} else {
    printf("Empate! Ambas as cartas têm R$ %.2f de PIB.\n", cartas[0].pib);
}

    return 0;
}