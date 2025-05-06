#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado1[50], cidade1[50], cod_carta1[20], estado2[50], cidade2[50], cod_carta2[20]; // Variáveis tipo char
    int populacao1, turistico1, populacao2, turistico2, total_turistico, total_populacao; // Variáveis do tipo int
    float area1, pib1, area2, pib2, den_pop1, den_pop2, pib_per_capita1, pib_per_capita2, total_area, total_pib, total_pib_cap, total_densidade; // Variáveis do tipo float

    // Instruções para o usuário
    printf("============JOGO SUPER TRUNFO===========\n");
    printf("========================================\n");

    // Leitura dos dados da primeira carta
    printf("Carta 1 \n");
    printf("Digite uma letra de 'A' a 'H' representando um dos 8 Estados:\n");
    fgets(estado1, sizeof(estado1), stdin); // Entrada de dados para variável estado1
    printf("Digite o código da carta: A letra do estado seguida de um número de 01 a 04 ex:A01-B03:\n");
    fgets(cod_carta1, sizeof(cod_carta1), stdin); // Entrada de dados para variável cod_carta1
    printf("Digite o nome da Cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin); // Entrada de dados para variável cidade1
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao1); // Entrada de dados para variável populacao1
    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1); // Entrada de dados para variável area1
    printf("Digite o produto interno bruno da cidade:\n");
    scanf("%f", &pib1); // Entrada de dados para variável pib1
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turistico1); // Entrada de dados para variável turistico1
    getchar(); // Limpa o buffer do teclado

    den_pop1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("============================================\n");

    printf("Carta 2 \n");
    printf("Digite uma letra de 'A' a 'H' representando um dos 8 Estados:\n");
    fgets(estado2, sizeof(estado2), stdin); // Entrada de dados para variável estado2
    printf("Digite o código da carta: A letra do estado seguida de um número de 01 a 04 ex:A01-B03:\n");
    fgets(cod_carta2, sizeof(cod_carta2), stdin); // Entrada de dados para variável cod_carta2
    printf("Digite o nome da Cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin); // Entrada de dados para variável cidade2
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao2); // Entrada de dados para variável populacao2
    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2); // Entrada de dados para variável area2
    printf("Digite o produto interno bruno da cidade:\n");
    scanf("%f", &pib2); // Entrada de dados para variável pib2
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turistico2); // Entrada de dados para variável turistico2
    getchar(); //limpa o buffer do teclado

    den_pop2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados das cartas 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1); // Exibe a saída de dados da variável estado1
    printf("Código: %s \n", cod_carta1); // Exibe a saída de dados da variável cod_carta1
    printf("Nome da Cidade: %s \n", cidade1); // Exibe a saída de dados da variável cidade1
    printf("População: %d \n", populacao1); // Exibe a saída de dados da variável populacao1
    printf("Área: %.3f Km² \n", area1); // Exibe a saída de dados da variável area1
    printf("PIB: %.3f bilhões de reais \n", pib1); // Exibe a saída de dados da variável pib1
    printf("Número de Pontos Turísticos: %d \n", turistico1); // Exibe a saída de dados da variável turistico1
    printf("Densidade Populacional: %.3f \n", den_pop1);
    printf("PIB per capita: %.3f \n", pib_per_capita1);

    printf("===============================================\n");

    // Exibição dos dados das cartas 2
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2); // Exibe a saída de dados da variável estado2
    printf("Código: %s \n", cod_carta2); // Exibe a saída de dados da variável cod_carta2
    printf("Nome da Cidade: %s \n", cidade2); // Exibe a saída de dados da variável cidade2
    printf("População: %d \n", populacao2); // Exibe a saída de dados da variável populacao2
    printf("Área: %.3f Km² \n", area2); // Exibe a saída de dados da variável area2
    printf("PIB: %.3f bilhões de reais \n", pib2); // Exibe a saída de dados da variável pib2
    printf("Número de Pontos Turísticos: %d \n", turistico2); // Exibe a saída de dados da variável turistico2
    printf("Densidade Populacional: %.3f \n", den_pop2);
    printf("PIB per capita: %.3f \n", pib_per_capita2);

    printf("===============================================\n");
    printf("===============================================\n");

    //Comparação das cartas
    if (populacao1 > populacao2) {
        total_populacao = populacao1;
    }else{
        total_populacao = populacao2;
    }

    if (area1 > area2) {
        total_area = area1;
    }else{
        total_area = area2;
    }

    if (pib1 > pib2) {
        total_pib = pib1;
    }else{
        total_pib = pib2;
    }

    if (turistico1 > turistico2) {
        total_turistico = turistico1;
    }else{
        total_turistico = turistico2;
    }
    
    if (pib_per_capita1 > pib_per_capita2) {
        total_pib_cap = pib_per_capita1;
    }else{
        total_pib_cap = pib_per_capita2;
    }

    //Para Densidade Populacional, a carta com o menor valor vence.
    if (den_pop1 < den_pop2) {
        total_densidade = den_pop1;
        printf("Carta 1 VENCEU! \n");
        printf("Estado: %s \n", estado1); // Exibe a saída de dados da variável estado2
        printf("Código: %s \n", cod_carta1); // Exibe a saída de dados da variável cod_carta2
        printf("Nome da Cidade: %s \n", cidade1); // Exibe a saída de dados da variável cidade2
        printf("População: %d \n", total_populacao); // Exibe a saída de dados da variável populacao2
        printf("Área: %.3f Km² \n", total_area); // Exibe a saída de dados da variável area2
        printf("PIB: %.3f bilhões de reais \n", total_pib); // Exibe a saída de dados da variável pib2
        printf("Número de Pontos Turísticos: %d \n", total_turistico); // Exibe a saída de dados da variável turistico2
        printf("Densidade Populacional: %.3f \n", den_pop2);
        printf("PIB per capita: %.3f \n", pib_per_capita2);
    }else{
        total_densidade = den_pop2;
        printf("Carta 2 VENCEU! \n");
        printf("Estado: %s \n", estado2); // Exibe a saída de dados da variável estado2
        printf("Código: %s \n", cod_carta2); // Exibe a saída de dados da variável cod_carta2
        printf("Nome da Cidade: %s \n", cidade2); // Exibe a saída de dados da variável cidade2
        printf("População: %d \n", total_populacao); // Exibe a saída de dados da variável populacao2
        printf("Área: %.3f Km² \n", total_area); // Exibe a saída de dados da variável area2
        printf("PIB: %.3f bilhões de reais \n", total_pib); // Exibe a saída de dados da variável pib2
        printf("Número de Pontos Turísticos: %d \n", total_turistico); // Exibe a saída de dados da variável turistico2
        printf("Densidade Populacional: %.3f \n", den_pop2);
        printf("PIB per capita: %.3f \n", pib_per_capita2);
    }
    return 0;
}
