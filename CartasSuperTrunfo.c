#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado1[50], cidade1[50], cod_carta1[20], estado2[50], cidade2[50], cod_carta2[20]; // Variáveis tipo char
    int populacao1, turistico1, populacao2, turistico2; // Variáveis do tipo int
    float area1, pib1, area2, pib2; // Variáveis do tipo float

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

    // Exibição dos dados das cartas 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1); // Exibe a saída de dados da variável estado1
    printf("Código: %s \n", cod_carta1); // Exibe a saída de dados da variável cod_carta1
    printf("Nome da Cidade: %s \n", cidade1); // Exibe a saída de dados da variável cidade1
    printf("População: %d \n", populacao1); // Exibe a saída de dados da variável populacao1
    printf("Área: %.4f Km² \n", area1); // Exibe a saída de dados da variável area1
    printf("PIB: %.3f bilhões de reais \n", pib1); // Exibe a saída de dados da variável pib1
    printf("Número de Pontos Turísticos: %d \n", turistico1); // Exibe a saída de dados da variável turistico1

    printf("===============================================\n");

    // Exibição dos dados das cartas 2
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2); // Exibe a saída de dados da variável estado2
    printf("Código: %s \n", cod_carta2); // Exibe a saída de dados da variável cod_carta2
    printf("Nome da Cidade: %s \n", cidade2); // Exibe a saída de dados da variável cidade2
    printf("População: %d \n", populacao2); // Exibe a saída de dados da variável populacao2
    printf("Área: %.4f Km² \n", area2); // Exibe a saída de dados da variável area2
    printf("PIB: %.3f bilhões de reais \n", pib2); // Exibe a saída de dados da variável pib2
    printf("Número de Pontos Turísticos: %d \n", turistico2); // Exibe a saída de dados da variável turistico2

    return 0;
}
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
