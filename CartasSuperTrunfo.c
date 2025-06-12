#include <stdio.h>

// Estrutura para armazenar os dados da carta
struct CartaSuperTrunfo {
    char estado;
    char codigo[4];
    char nomeCidade[100];
    unsigned long int populacao; // Mudança para unsigned long int
    float area;
    float pib; // PIB em bilhões
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder; // Para armazenar o Super Poder
};

int main() {
    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    // Entrada de dados da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%lu", &carta1.populacao); // Mudança para %lu

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;
    carta1.superPoder = carta1.populacao + carta1.area + carta1.pib * 1000000000 + carta1.pontosTuristicos + carta1.pibPerCapita + (1 / carta1.densidadePopulacional);

    // Entrada de dados da carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%lu", &carta2.populacao); // Mudança para %lu

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;
    carta2.superPoder = carta2.populacao + carta2.area + carta2.pib * 1000000000 + carta2.pontosTuristicos + carta2.pibPerCapita + (1 / carta2.densidadePopulacional);

    // Exibição da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);  // Mudança para %lu
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    // Exibição da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);  // Mudança para %lu
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // Comparação dos atributos e exibição dos resultados

    printf("\nComparação de Cartas:\n");

    // Comparação População
    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);

    // Comparação Área
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area);

    // Comparação PIB
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);

    // Comparação Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontosTuristicos > carta2.pontosTuristicos);

    // Comparação Densidade Populacional (menor densidade vence)
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", carta1.densidadePopulacional > carta2.densidadePopulacional);

    // Comparação PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pibPerCapita > carta2.pibPerCapita);

    // Comparação Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.superPoder > carta2.superPoder);

    return 0;
}
