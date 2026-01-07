#include <stdio.h>

int main() {
    // Dados básicos da carta
    char estado[30];
    char codigo[10];
    char cidade[50];
    
    int populacao;
    int pontosTuristicos;
    
    float pib;
    float area;

    // Propriedades derivadas
    float densidadePopulacional;
    float pibPerCapita;

    // Entrada de dados
    printf("=== Cadastro de Carta - Super Trunfo de Países ===\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado);

    printf("Digite o código da carta: ");
    scanf(" %[^\n]", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite a área (km²): ");
    scanf("%f", &area);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Cálculos (operadores matemáticos + casting)
    densidadePopulacional = (float) populacao / area;
    pibPerCapita = (pib * 1000000000) / (float) populacao;

    // Exibição da carta
    printf("\n=== Carta Cadastrada ===\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Área: %.2f km²\n", area);
    printf("Pontos turísticos: %d\n", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita);

    // Operadores relacionais (exemplo de regra do jogo)
    if (pibPerCapita > 30000) {
        printf("Classificação econômica: Alta renda\n");
    } else {
        printf("Classificação econômica: Média/Baixa renda\n");
    }

    return 0;
}
