//SuperTrunfoemC.c é um arquivo de código-fonte em C que faz parte de um projeto de nível NOVATO do curso de Ciências da Computação. Este projeto foi feito pelo aluno Vinícius Silva.

#include <stdio.h>

    // Definição das variáveis
    // Estado deve ser char (apenas uma letra)
int main(){
    // Código da carta e Nome da Cidade deve ser string (array de char)

    char estado1, estado2, codigodacarta1[4], codigodacarta2[4], nomedacidade1[50], nomedacidade2[50], nomedepais1[50], nomedepais2[50];
    float pib1, pib2, area1, area2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2, SuperPoder1, SuperPoder2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    unsigned long int populacao1, populacao2, resultadoCS1, resultadoCS2;

    /* Carta 1 */

    printf("\n--- Super Trunfo - Carta 1 ---\n");
    printf("Para iniciarmos o jogo, insira os dados das cartas.\n");

    printf("Digite o nome do País: ");
    scanf(" %s", nomedepais1);

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

    printf("Digite o nome do País: ");
    scanf(" %s", nomedepais2);

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
    printf("País: %s\n", nomedepais1);
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
    printf("País: %s\n", nomedepais2);
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

    //Comparação das cartas utilizando estrutura de switch case com if-else.
    // Fiz uma modificação nas estruturas anteriores para melhorar a função do código com as novas estruturas e operadores aprendidos.

    /* Comparação Individual das Cartas 1 e 2 */
    int comparacaopopulacao = populacao1 > populacao2;
    int comparacaoarea = area1 > area2;
    int comparacaopib = pib1 > pib2;
    int comparacaopontosturisticos = numerodepontosturisticos1 > numerodepontosturisticos2;
    int comparacaodensidadepopulacional = (densidadepopulacional1) < (densidadepopulacional2);
    int comparacaopibpercapita = pibpercapita1 > pibpercapita2;
    int comparacaoSuperPoder = SuperPoder1 > SuperPoder2;

    printf("\n ### Comparações das Cartas ###\n");
    printf("\n--- Regras das Comparações ---\n");
    printf("# A regra vale para ambos modelos de comparação.\n");
    printf("REGRA 1: Vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");
    printf("REGRA 2: Em caso de empate em qualquer atributo, nenhuma carta recebe ponto para aquele atributo.\n");
    //Como não sei fazer uma estrutura de voltar ao menu, caso eu fizesse um menu de regras, ele terminaria o programa após exibir as regras. Então, optei por colocar as regras antes do menu de opções.
    printf("\n#Escolha uma opção:\n");
    printf("1. Comparação Geral\n");
    printf("2. Comparação Individual das Características\n");
    
    int opcao;
    scanf(" %d", &opcao);

    switch (opcao)
    {
        case 1:
            resultadoCS1 = 0;
            resultadoCS2 = 0;

        printf("\n--- Resultado da Comparação Geral das Cartas ---\n");
        printf("País da carta 1 é %s e da carta 2 é %s.\n", nomedepais1, nomedepais2);
        printf("\nPopulação: %u\n", comparacaopopulacao);
            if (comparacaopopulacao == 1){
                resultadoCS1 += 1;
                printf("Carta 1 vence na População!\n");
            } else if (comparacaopopulacao == 0){
                resultadoCS2 += 1;
                printf("Carta 2 vence na População!\n");
            } else {
                printf("Empate na População!\n");
            }

        printf("\nÁrea: %d\n", comparacaoarea);
            if (comparacaoarea == 1){
                resultadoCS1 += 1;
                printf("Carta 1 vence na Área!\n");
            } else if (comparacaoarea == 0){
                resultadoCS2 += 1;
                printf("Carta 2 vence na Área!\n");
            } else {
                printf("Empate na Área!\n");
            }

        printf("\nPIB: %d\n", comparacaopib);
            if (comparacaopib == 1){
                resultadoCS1 += 1;
                printf("Carta 1 vence no PIB!\n");
            } else if (comparacaopib == 0){
                resultadoCS2 += 1;
                printf("Carta 2 vence no PIB!\n");
            } else {
                printf("Empate no PIB!\n");
            }

        printf("\nPontos Turísticos: %d\n", comparacaopontosturisticos);
            if (comparacaopontosturisticos == 1){
                resultadoCS1 += 1;
                printf("Carta 1 vence nos Pontos Turísticos!\n");
            } else if (comparacaopontosturisticos == 0){
                resultadoCS2 += 1;
                printf("Carta 2 vence nos Pontos Turísticos!\n");
            } else {
                printf("Empate nos Pontos Turísticos!\n");
            }

        printf("\nDensidade Populacional: %d\n", comparacaodensidadepopulacional);
            if (comparacaodensidadepopulacional == 1){
                resultadoCS1 += 1;
                printf("Carta 1 vence na Densidade Populacional!\n");
            } else if (comparacaodensidadepopulacional == 0){
                resultadoCS2 += 1;
                printf("Carta 2 vence na Densidade Populacional!\n");
            } else {
                printf("Empate na Densidade Populacional!\n");
            }

        printf("\nPIB per capita: %d\n", comparacaopibpercapita);
            if (comparacaopibpercapita == 1){
                resultadoCS1 += 1;
                printf("Carta 1 vence no PIB per capita!\n");
            } else if (comparacaopibpercapita == 0){
                resultadoCS2 += 1;
                printf("Carta 2 vence no PIB per capita!\n");
            } else {
                printf("Empate no PIB per capita!\n");
            }

        printf("\nSuper Poder: %d\n", comparacaoSuperPoder);
            if (comparacaoSuperPoder == 1){
                resultadoCS1 += 1;
                printf("Carta 1 vence no Super Poder!\n");
            } else if (comparacaoSuperPoder == 0){
                resultadoCS2 += 1;
                printf("Carta 2 vence no Super Poder!\n");
            } else {
                printf("Empate no Super Poder!\n");
            }

        printf("\nTotal de pontos (vitórias) para cada carta:\n");
        printf("Carta 1: %u\n", resultadoCS1);
        printf("Carta 2: %u\n", resultadoCS2);

        if ((resultadoCS1 > resultadoCS2) && (resultadoCS1 - resultadoCS2 > 3)){
            printf("\n### UAU, vitória esmagadora da Carta 1! ###\n");
        } else if ((resultadoCS2 > resultadoCS1) && (resultadoCS2 - resultadoCS1 >3)){
            printf("\n### UAU, vitória esmagadora da Carta 2! ###\n");
        }

        if (resultadoCS1 > resultadoCS2){
            printf("\nA Carta 1 é a vencedora!\n");
        } else if (resultadoCS2 > resultadoCS1){
                printf("\nA Carta 2 é a vencedora!\n");
        } else {
                printf("\nEmpate entre as cartas!\n");
        }
        break;

        case 2:
            printf("\n--- Comparação Individual das Características ---\n");
            printf("Você selecionou a comparação individual das características.\n");
            printf("Os resultados são apresentados como 1 (verdadeiro) ou 0 (falso).\n");
            printf("Características:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional (Demográfica)\n");
            printf("6. O meu País é Gigante? População E (&&) Área\n");
            printf("7. O meu País tem força Econômica? PIB OU (||) PIB per capita\n");
            printf("Escolha a característica que deseja comparar (1-7): ");
            int caracteristicas;
            scanf(" %d", &caracteristicas);
            switch (caracteristicas) {
                case 1:
                    printf("País da carta 1 é %s e da carta 2 é %s.\n", nomedepais1, nomedepais2);
                    
                    printf("População: Carta 1 vence? %d\n", comparacaopopulacao);
                    break;
                case 2:
                    printf("País da carta 1 é %s e da carta 2 é %s.\n", nomedepais1, nomedepais2);
                    printf("Área: Carta 1 vence? %d\n", comparacaoarea);
                    break;
                case 3:
                    printf("País da carta 1 é %s e da carta 2 é %s.\n", nomedepais1, nomedepais2);
                    printf("PIB: Carta 1 vence? %d\n", comparacaopib);
                    break;
                case 4:
                    printf("País da carta 1 é %s e da carta 2 é %s.\n", nomedepais1, nomedepais2);
                    printf("Número de Pontos Turíticos: Carta 1 vence? %d\n", comparacaopontosturisticos);
                    break;
                case 5:
                    printf("País da carta 1 é %s e da carta 2 é %s.\n", nomedepais1, nomedepais2);
                    printf("Densidade Populacional: Carta 1 vence? %d\n", comparacaodensidadepopulacional);
                    break;
                case 6: // População E Área
                    printf("País da carta 1 é %s e da carta 2 é %s.\n", nomedepais1, nomedepais2);
                        if(comparacaopopulacao && comparacaoarea){ //Se ambos retornarem 1 (verdadeiro), carta 1 é um País Gigante
                            printf(">>> Carta 1 é um PAÍS GIGANTE! (Venceu em População e área)\n");
                        } else if ((comparacaopopulacao && comparacaoarea) == 0){
                            printf(">>> Carta 2 é um PAÍS GIGANTE! (Venceu em População e área)\n");
                        } else {
                            printf("Nenhuma das cartas é um PAÍS GIGANTE! (Nenhuma venceu em ambos atributos).\n");
                        }
                    break;
                case 7: //PIB OU PIB per capita
                    printf("País da carta 1 é %s e da carta 2 é %s.\n", nomedepais1, nomedepais2);
                        if(comparacaopib || comparacaopibpercapita){ //Se qualquer um dos dois for 1 (verdadeiro), carta 1 tem força econômica
                            printf(">>> Carta 1 tem FORÇA ECONÔMICA! (Venceu em PIB ou PIB per capita)\n");
                        } else if ((comparacaopib || comparacaopibpercapita) == 0){
                            printf(">>> Carta 2 tem FORÇA ECONÔMICA! (Venceu em PIB ou PIB per capita)\n");
                        } else {
                            printf("Nenhuma das cartas tem FORÇA ECONÔMICA! (Nenhuma venceu em ambos atributos).\n");
                        }
                        break;
                default:
                    printf("Opção inválida! Tente novamente.\n");
                    break;
            }
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    
return 0;
}