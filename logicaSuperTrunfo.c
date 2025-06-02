#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");

    // Carta 1
    char estado[3];               // Ex: "SC"
    char codigo[4];               // Ex: "001"
    char nomedaCidade[50];        // Ex: "Jaragua_do_Sul" (sem espaços!)
    int numero_habitantes;        // Ex: 200000
    float areaTotal;              // Ex: 500.5
    float pib;                    // Ex: 10000.5
    int pontos_turisticos1;       // Ex: 3

    printf("Digite o estado (ex: SC): ");
    scanf("%2s", estado);

    printf("Digite o codigo: ");
    scanf("%3s", codigo);

    printf("Digite o nome da cidade (sem espacos! Use _ para separar): ");
    scanf("%49s", nomedaCidade);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &numero_habitantes);

    printf("Digite a area total: ");
    scanf("%f", &areaTotal);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Exibindo as informações
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", nomedaCidade);
    printf("Numero de habitantes: %d\n", numero_habitantes);
    printf("Area total: %.2f\n", areaTotal);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    return 0;
}
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


