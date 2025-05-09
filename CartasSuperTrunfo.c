#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char pais1[50], pais2[50]; // Variáveis tipo char
    int populacao1, turistico1, populacao2, turistico2, total_turistico, total_populacao, opcao1, opcao2; // Variáveis do tipo int
    float area1, pib1, area2, pib2, den_pop1, den_pop2, pib_per_capita1, pib_per_capita2, total_area, total_pib, total_pib_cap, total_densidade; // Variáveis do tipo float

    // Instruções para o usuário
    printf("============JOGO SUPER TRUNFO===========\n");
    printf("========================================\n");

    printf("### Bem-vindo ao jogo Super Trunfo!###\n");
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao1);

    switch (opcao1) {
        case 1:
            printf("Você deve escolher os atributos para cada carta! \n");
            // Leitura dos dados da primeira carta
            printf("Carta 1 \n");
            printf("Digite o nome do País\n");
            scanf("%s", pais1); // Entrada de dados para variável país1
            printf("Digite o número de habitantes do País:\n");
            scanf("%d", &populacao1); // Entrada de dados para variável populacao1
            printf("Digite a área do País em quilômetros quadrados:\n");
            scanf("%f", &area1); // Entrada de dados para variável area1
            printf("Digite o produto interno bruto do País:\n");
            scanf("%f", &pib1); // Entrada de dados para variável pib1
            printf("Digite o número de pontos turísticos:\n");
            scanf("%d", &turistico1); // Entrada de dados para variável turistico1
            getchar(); // Limpa o buffer do teclado
    
            den_pop1 = populacao1 / area1;
            pib_per_capita1 = pib1 / populacao1;
            
            printf("============================================\n");

            // Leitura dos dados da segunda carta
            printf("Carta 2 \n");
            printf("Digite o nome do País\n");
            scanf("%s", pais2); // Entrada de dados para variável país2
            printf("Digite o número de habitantes País:\n");
            scanf("%d", &populacao2); // Entrada de dados para variável populacao2
            printf("Digite a área do País em quilômetros quadrados:\n");
            scanf("%f", &area2); // Entrada de dados para variável area2
            printf("Digite o produto interno bruto do País:\n");
            scanf("%f", &pib2); // Entrada de dados para variável pib2
            printf("Digite o número de pontos turísticos:\n");
            scanf("%d", &turistico2); // Entrada de dados para variável turistico2
            getchar(); // Limpa o buffer do teclado
        
            den_pop2 = populacao2 / area2;
            pib_per_capita2 = pib2 / populacao2;

            // Verificar os atributo
            if (pais1 == pais2 ){
                printf("Os atributos não podem ser iguais!");
            }else if (populacao1 == populacao2){
                printf("Os atributos não podem ser iguais!");
            }else if (area1 == area2){
                printf("Os atributos não podem ser iguais!");
            }else if (pib1 == pib2){
                printf("Os atributos não podem ser iguais!");
            }else if (turistico1 == turistico2){
                printf("Os atributos não podem ser iguais!");
            }

            // Exibição dos dados das cartas 1
            printf("Carta 1: \n");
            printf("País: %s \n", pais1); // Exibe a saída de dados da variável estado1
            printf("População: %d \n", populacao1); // Exibe a saída de dados da variável populacao1
            printf("Área: %.3f Km² \n", area1); // Exibe a saída de dados da variável area1
            printf("PIB: R$%.3f \n", pib1); // Exibe a saída de dados da variável pib1
            printf("Número de Pontos Turísticos: %d \n", turistico1); // Exibe a saída de dados da variável turistico1
            printf("Densidade Populacional: %.3f \n", den_pop1);
            printf("PIB per capita: %.3f \n", pib_per_capita1);

            printf("===============================================\n");

            // Exibição dos dados das cartas 2
            printf("Carta 2: \n");
            printf("País: %s \n", pais2); // Exibe a saída de dados da variável estado2
            printf("População: %d \n", populacao2); // Exibe a saída de dados da variável populacao2
            printf("Área: %.3f Km² \n", area2); // Exibe a saída de dados da variável area2
            printf("PIB: R$%.3f \n", pib2); // Exibe a saída de dados da variável pib2
            printf("Número de Pontos Turísticos: %d \n", turistico2); // Exibe a saída de dados da variável turistico2
            printf("Densidade Populacional: %.3f \n", den_pop2);
            printf("PIB per capita: %.3f \n", pib_per_capita2);

            if (populacao1 > populacao2 && populacao2 < populacao1){
                printf("População de %s é %d Você venceu!\n", pais1, populacao1);
            }else{
                printf("População de %s é %d Você Venceu!\n", pais2, populacao2);
            }

            if (populacao1 > populacao2 ) {
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
                printf("Nome do País: %s \n", pais1); // Exibe a saída de dados da variável país1
                printf("População: %d \n", total_populacao); // Exibe a saída de dados da variável populacao1
                printf("Área: %.3f Km² \n", total_area); // Exibe a saída de dados da variável area1
                printf("PIB: R$%.3f \n", total_pib); // Exibe a saída de dados da variável pib1
                printf("Número de Pontos Turísticos: %d \n", total_turistico); // Exibe a saída de dados da variável turistico1
                printf("Densidade Populacional: %.3f \n", den_pop1);
                printf("PIB per capita: %.3f \n", pib_per_capita1);
            }else{
                total_densidade = den_pop2;
                printf("Carta 2 VENCEU! \n");
                printf("Nome do País: %s \n", pais2); // Exibe a saída de dados da variável país2
                printf("População: %d \n", total_populacao); // Exibe a saída de dados da variável populacao2
                printf("Área: %.3f Km² \n", total_area); // Exibe a saída de dados da variável area2
                printf("PIB: R$%.3f \n", total_pib); // Exibe a saída de dados da variável pib2
                printf("Número de Pontos Turísticos: %d \n", total_turistico); // Exibe a saída de dados da variável turistico2
                printf("Densidade Populacional: %.3f \n", den_pop2);
                printf("PIB per capita: %.3f \n", pib_per_capita2);

            break;        
        case 2:
            printf("Regras do Jogo:\n");
            printf("1. Escolha uma opção no menu.\n");
            printf("2. Se você escolher 'Iniciar Jogo, Digite os atributos, eles não podem ser iguais.\n");
            printf("3. O jogo termina quando você escolher 'Sair'.\n");
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            
    }

}
    return 0;
}
