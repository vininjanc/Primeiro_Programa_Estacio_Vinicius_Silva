//SuperTrunfoemC.c é um arquivo de código-fonte em C que faz parte de um projeto de nível NOVATO do curso de Ciências da Computação. Este projeto foi feito pelo aluno Vinícius Silva.

#include <stdio.h>

    // Definição das variáveis
    // Estado deve ser char (apenas uma letra)
int main(){
    // Código da carta e Nome da Cidade deve ser string (array de char)

    char estado1, estado2, codigodacarta1[4], codigodacarta2[4], nomedacidade1[50], nomedacidade2[50];
    float pib1, pib2, area1, area2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;
    int populacao1, populacao2, numerodepontosturisticos1, numerodepontosturisticos2;

    /* Carta 1 */

    printf("\n--- Super Trunfo - Carta 1 ---\n");
    printf("Digite a letra do estado (ex: A): ");
    scanf(" %c", &estado1);
    // O espaço antes de %c serve para limpar o buffer do teclado (enter anterior)

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf(" %s", codigodacarta1);

    printf("Digite o nome da cidade sem espaços (por exemplo: RiodeJaneiro): ");
    scanf(" %s", nomedacidade1);

    printf("Digite a População: ");
    scanf(" %d", &populacao1);

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

    /* Carta 2 */
    printf("\n--- Super Trunfo - Carta 2 ---\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf(" %s", codigodacarta2);

    printf("Digite o nome da cidade sem espaços (por exemplo: RiodeJaneiro): ");
    scanf(" %s", nomedacidade2);

    printf("Digite a População: ");
    scanf(" %d", &populacao2);

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

    /* Exibindo os resultados das Cartas 1 e 2 */
    /* Carta 1 */
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f Km²\n PIB: %.2f\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/Km²\n PIB per capita: %.2f\n", estado1, codigodacarta1, nomedacidade1, populacao1, area1, pib1, numerodepontosturisticos1, densidadepopulacional1, pibpercapita1);
        /* Carta 2 */
    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f Km²\n PIB: %.2f\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/Km²\n PIB per capita: %.2f\n", estado2, codigodacarta2, nomedacidade2, populacao2, area2, pib2, numerodepontosturisticos2, densidadepopulacional2, pibpercapita2);
return 0;
}