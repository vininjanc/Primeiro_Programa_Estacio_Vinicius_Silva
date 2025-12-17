//SuperTrunfoemC.c é um arquivo de código-fonte em C que faz parte de um projeto de nível NOVATO do curso de Ciências da Computação. Este projeto foi feito pelo aluno Vinícius Silva.

#include <stdio.h>

    // Definição das variáveis
    // Estado deve ser char (apenas uma letra)
int main(){
    // Código da carta e Nome da Cidade deve ser string (array de char)

    char estado1, estado2, codigodacarta1[4], codigodacarta2[4], nomedacidade1[50], nomedacidade2[50];
    float pib1, pib2, area1, area2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2, SuperPoder1, SuperPoder2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    unsigned long int populacao1, populacao2;

    /* Carta 1 */

    printf("\n--- Super Trunfo - Carta 1 ---\n");
    printf("Digite a letra do estado (ex: A): ");
    scanf(" %c", &estado1);
    // O espaço antes de %c serve para limpar o buffer do teclado (enter anterior)

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf(" %s", codigodacarta1);

    printf("Digite o nome da cidade sem espaços (por exemplo: RiodeJaneiro): ");
    scanf(" %s", nomedacidade1);

    printf("Digite a População: ");
    scanf(" %lu", &populacao1);

    printf("Digite a Área (Km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numerodepontosturisticos1);

    //Cálculo
    /* Opção de cálculo simples, sem atribuição de valores; mas para seguir a matéria, vamos usar a fórmula seguinte.
    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;*/
    densidadepopulacional1 = (float) populacao1;
    densidadepopulacional1 /= area1;

    pibpercapita1 = (float) pib1;
    pibpercapita1 /= populacao1;

    //SuperPoderes
    SuperPoder1 = (float) populacao1 + area1 + pib1 + numerodepontosturisticos1 + pibpercapita1 + (1.0/densidadepopulacional1);

    /* Carta 2 */
    printf("\n--- Super Trunfo - Carta 2 ---\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf(" %s", codigodacarta2);

    printf("Digite o nome da cidade sem espaços (por exemplo: RiodeJaneiro): ");
    scanf(" %s", nomedacidade2);

    printf("Digite a População: ");
    scanf(" %lu", &populacao2);

    printf("Digite a Área (Km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numerodepontosturisticos2);

    //Cálculo
    /* Opção de cálculo simples, sem atribuição de valores; mas para seguir a matéria, vamos usar a fórmula seguinte.
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;*/
    densidadepopulacional2 = (float) populacao2;
    densidadepopulacional2 /= area2;

    pibpercapita2 = (float) pib2;
    pibpercapita2 /= populacao2;

    //SuperPoderes
    SuperPoder2 = (float) populacao2 + area2 + pib2 + numerodepontosturisticos2 + pibpercapita2 + (1.0/densidadepopulacional2);

    /* Exibindo os resultados das Cartas 1 e 2 */

    /* Carta 1 */
    printf("\n\n=== Dados das Cartas ===\n");
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Superpoder: %.2f\n", SuperPoder1);

        /* Carta 2 */
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Superpoder: %.2f\n", SuperPoder2);


    /* Comparação das Cartas 1 e 2 */
        //Inserção das variáveis após scanf, aprendi que não funcionaria antes da inserção dos dados pelos usuários.
    int comparacaopopulacao = populacao1 > populacao2;
    int comparacaoarea = area1 > area2;
    int comparacaopib = pib1 > pib2;
    int comparacaopontosturisticos = numerodepontosturisticos1 > numerodepontosturisticos2;
    int comparacaodensidadepopulacional = (densidadepopulacional1) < (densidadepopulacional2);
    int comparacaopibpercapita = pibpercapita1 > pibpercapita2;
    int comparacaoSuperPoder = SuperPoder1 > SuperPoder2;

    printf("\n--- Resultado da Comparação Simples das Cartas ---\n");
    printf("Seja 1 para verdadeiro (Carta 1 vence) ou 0 para falso (Carta 2 vence):\n");
    printf("População: %u\n", comparacaopopulacao);
    printf("Área: %d\n", comparacaoarea);
    printf("PIB: %d\n", comparacaopib);
    printf("Pontos Turísticos: %d\n", comparacaopontosturisticos);
    printf("Densidade Populacional: %d\n", comparacaodensidadepopulacional);
    printf("PIB per capita: %d\n", comparacaopibpercapita);
    printf("Super Pode: %d\n", comparacaoSuperPoder);

return 0;
}