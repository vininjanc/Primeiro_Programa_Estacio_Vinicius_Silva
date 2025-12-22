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

    printf("\nDigite o nome do País (País igual? Escreva'Brasil1' e 'Brasil2'): ");
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
    // acima, esclarecimento do que é a fórmula abaixo
    densidadepopulacional2 = (float) populacao2;
    densidadepopulacional2 /= area2;
    // (float) serve para forçar a variável a imprimir o valor com ponto flutuante,
    // garantindo que não perca números decimais

    pibpercapita2 = (float) pib2;
    pibpercapita2 /= populacao2;

    //SuperPoderes
    SuperPoder2 = (float) populacao2 + area2 + pib2 + numerodepontosturisticos2 + pibpercapita2 + (1.0/densidadepopulacional2);
    // Inverte a densidade populacional pois, na regra do jogo, 
    // vence quem tem a MENOR densidade (menos gente por km²).

    /* Exibindo os resultados das Cartas 1 e 2 */

    /* Carta 1 */
    printf("\n\n=== Dados das Cartas ===\n");
    printf("\n--- Carta 1 ---\n");
    printf("País: %s\n", nomedepais1); //Tema 3 pediu nome de país, então adicionei aqui para uso geral
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

    // Comparação das cartas utilizando estrutura de switch case com if-else.
    // Fiz uma modificação nas estruturas anteriores para melhorar a função do código com as novas estruturas e operadores aprendidos.

    /* Comparação Individual das Cartas 1 e 2 */
    int comparacaopopulacao = populacao1 > populacao2;
    int comparacaoarea = area1 > area2;
    int comparacaopib = pib1 > pib2;
    int comparacaopontosturisticos = numerodepontosturisticos1 > numerodepontosturisticos2;
    int comparacaodensidadepopulacional = (densidadepopulacional1) < (densidadepopulacional2); //Ganha a que for menor, mesmo sem estar decimal, o computador sabe qual é menor;
    int comparacaopibpercapita = pibpercapita1 > pibpercapita2;
    int comparacaoSuperPoder = SuperPoder1 > SuperPoder2;

    printf("\n ### Comparações das Cartas ###\n");
    printf("\n--- Regras das Comparações ---\n");
    printf("# A regra vale para ambos modelos de comparação.\n");
    printf("REGRA 1: Vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");
    printf("REGRA 2: Em caso de empate em qualquer atributo, nenhuma carta recebe ponto para aquele atributo.\n");
    // Como não sei fazer uma estrutura de voltar ao menu, caso eu fizesse um menu de regras,
    // ele terminaria o programa após exibir as regras. Então, optei por colocar as regras antes do menu de opções.
    printf("\n# Opções:\n");
    printf("1. Comparação Geral\n");
    printf("2. Comparação Individual das Características\n");
    printf("3. Comparação de Dois Atributos\n");
    printf("\nSelecione a Comparação desejada:\n");
    int opcao = 0;
    scanf(" %d", &opcao);


    switch (opcao)
    {
        case 1:
            resultadoCS1 = 0;
            resultadoCS2 = 0;

        printf("\n--- Comparação Geral das Cartas ---\n");
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
            int caracteristicas = 0;
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
                            printf(">>> Carta 2 é um PAÍS GIGANTE! (Venceu em População e área)\n"); /// '>>>' é usado apenas para enfatizar o resultado
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
            }
        break;

        case 3:
            // Comparação de dois atributos

            // Definição das variáveis
            /* atributo1 e atributo 2 são centrais dos switchs, dos menus - dentro de cada menu deve haver duas caixas principais,
            uma para cada atributo; dentro de cada uma, tem o atributo da carta 1 e o atributo da carta 2; */

            int atributo1 = 0, atributo2 = 0;
            float somaatributoscarta1 = 0, somaatributoscarta2 = 0;
            char *nomeatributo1 = "Indefinido";
            char *nomeatributo2 = "Indefinido";
            float carta1atributo1 = 0, carta2atributo1 = 0;
            float carta1atributo2 = 0, carta2atributo2 = 0; //sem o ponteiro *, char leria apenas uma lera e não uma palavra

            printf("\n--- Comparação de Dois Atributos ---\n");
            printf("# Primeiro Atributo: \n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional (Demográfica)\n");
            printf("6. PIB per capita\n");

            printf("Selecione: ");
            scanf(" %d", &atributo1);

            switch (atributo1){
                case 1:
                printf("Você escolheu População como seu primeiro Atributo!\n");
                carta1atributo1 = (float) populacao1; //(float) garante uso dos decimais
                carta2atributo1 = (float) populacao2;
                nomeatributo1 = "População"; //não preciso colocar * aqui, apenas lá na função
                break;

                case 2:
                printf("Você escolheu Área como seu primeiro Atributo!\n");
                carta1atributo1 = area1;
                carta2atributo1 = area2;
                nomeatributo1 = "Área";
                break;

                case 3:
                printf("Você escolheu PIB como seu primeiro Atributo!\n");
                carta1atributo1 = pib1;
                carta2atributo1 = pib2;
                nomeatributo1 = "PIB";
                break;

                case 4:
                printf("Você escolheu Pontos Turísticos como seu primeiro Atributo!\n");
                carta1atributo1 = (float) numerodepontosturisticos1;
                carta2atributo1 = (float) numerodepontosturisticos2;
                nomeatributo1 = "Pontos Turísticos";
                break;

                case 5:
                printf("Você escolheu Densidade Populacional como seu primeiro Atributo!\n");
                carta1atributo1 = (1.0 / densidadepopulacional1);
                carta2atributo1 = (1.0 / densidadepopulacional2);
                nomeatributo1 = "Densidade Populacional";
                break;

                case 6:
                printf("Você escolheu PIB per capita como seu primeiro Atributo!\n");
                carta1atributo1 = pibpercapita1;
                carta2atributo1 = pibpercapita2;
                nomeatributo1 = "PIB per capita";
                break;

                default:
                printf("Opção inválida, tente novamente.\n");
                break;
            }

                // Usei o if para garantir que se houver igualdade na escolha, a pessoa tenha que voltar,
                // senão, pode prosseguir.

                printf("\n# Segundo Atributo: \n");
                if (atributo1 != 1) printf("1. População\n"); //usar essa combinação != garante que não apareça na tela a opção já acessada no menu anterior
                if (atributo1 != 2) printf("2. Área\n");
                if (atributo1 != 3) printf("3. PIB\n");
                if (atributo1 != 4) printf("4. Pontos Turísticos\n");
                if (atributo1 != 5) printf("5. Densidade Populacional (Demográfica)\n");
                if (atributo1 != 6) printf("6. PIB per capita\n");

                printf("Selecione: ");
                scanf(" %d", &atributo2);

            if (atributo1 == atributo2){
                printf("Você escolheu o mesmo atributo!\n");
            } else {
                
                switch (atributo2){
                    case 1:
                    printf("Você escolheu População como seu segundo Atributo!\n");
                    carta1atributo2 = (float) populacao1;
                    carta2atributo2 = (float) populacao2;
                    nomeatributo2 = "População";
                    break;

                    case 2:
                    printf("Você escolheu Área como seu segundo Atributo!\n");
                    carta1atributo2 = area1;
                    carta2atributo2 = area2;
                    nomeatributo2 = "Área";
                    break;

                    case 3:
                    printf("Você escolheu PIB como seu segundo Atributo!\n");
                    carta1atributo2 = pib1;
                    carta2atributo2 = pib2;
                    nomeatributo2 = "PIB";
                    break;

                    case 4:
                    printf("Você escolheu Pontos Turísticos como seu segundo Atributo!\n");
                    carta1atributo2 = (float) numerodepontosturisticos1;
                    carta2atributo2 = (float) numerodepontosturisticos2;
                    nomeatributo2 = "Pontos Turísticos";
                    break;

                    case 5:
                    printf("Você escolheu Densidade Populacional como seu segundo Atributo!\n");
                    carta1atributo2 = (1.0 / densidadepopulacional1);
                    carta2atributo2 = (1.0 / densidadepopulacional2);
                    nomeatributo2 = "Densidade Populacional";
                    break;

                    case 6:
                    printf("Você escolheu PIB per capita como seu segundo Atributo!\n");
                    carta1atributo2 = pibpercapita1;
                    carta2atributo2 = pibpercapita2;
                    nomeatributo2 = "PIB per capita";
                    break;

                    default:
                    printf("Opção inválida.\n");
                    break;

                }
                // Soma e Resultados

            printf("\n--- Comparação de Dois Atributos ---\n");
            printf("País 1: %s | País 2: %s.\n", nomedepais1, nomedepais2);
            printf("------------------------------------------\n");
            printf("Atributo 1 (%s): %.2f VS %.2f.\n", nomeatributo1, carta1atributo1, carta2atributo1);
            printf("Atributo 2 (%s): %.2f VS %.2f.\n", nomeatributo2, carta1atributo2, carta2atributo2);
            printf("------------------------------------------\n");
                somaatributoscarta1 = (float) carta1atributo1 + carta1atributo2;
                somaatributoscarta2 = (float) carta2atributo1 + carta2atributo2;
            printf("SOMA TOTAL CARTA 1: %.2f\n", somaatributoscarta1);
            printf("SOMA TOTAL CARTA 2: %.2f\n", somaatributoscarta2);
            printf("------------------------------------------\n");

            // Uso do Operador Ternário
            // Expressar o vencedor mediante os resultados apresentados
            // Estabelecer condicional de empate
            if (somaatributoscarta1 == somaatributoscarta2){
                printf("# EMPATOU! #\n");
            } else {
                printf("# CAMPEÃO #: %s!", (somaatributoscarta1 > somaatributoscarta2) ? "CARTA 1" : "CARTA 2");
            } //Inseri o nome de país no operador ternário para um melhor visual do campeão.
            }

        break;

        default:
        printf("Opção inválida, tente novamente.\n");
        break;
   
    }
            
return 0;
}