#include <stdio.h>

int main (){
    //Estrutura da Carta 1
    char estado1; //Uma letra de A a H, representando o nome do estado
    char codigo_carta1 [4]; //Código da carta, a letra do estado seguida de um número de 01 a 04
    char nome_cidade1 [30]; //nome da cidade
    unsigned long int populacao1; //número de habitantes da cidade
    float area_cidade1; //área da cidade em km²
    float PIB1; //Produto Interno Bruto da cidade
    int pontos_turisticos1; //número de pontos turísticos na cidade
    float densidade_populacional1; //número de habitantes (população) dividido pela área da cidade
    float PIB_per_capita1; //PIB da cidade (* 1000000000) dividido pela número de habitantes (população)
    float Super_Poder1; /*Super Poder é a soma de todas as variáveis de valores
    (população + área da cidade + PIB + pontos turisticos + PIB per capita + inverso densidade)*/
    float inverso_densidade_populacional1; //Para calcular o inverso da densidade populacional usa-se: 1.0 / densidade

    //Estrutura da Carta 2
    char estado2; //Uma letra de A a H, representando o nome do estado
    char codigo_carta2 [4]; //Código da carta, a letra do estado seguida de um número de 01 a 04
    char nome_cidade2 [30]; //nome da cidade
    unsigned long int populacao2; //número de habitantes da cidade
    float area_cidade2; //área da cidade em km²
    float PIB2; //Produto Interno Bruto da cidade
    int pontos_turisticos2; //número de pontos turísticos na cidade
    float densidade_populacional2; //número de habitantes (população) dividido pela área da cidade
    float PIB_per_capita2; //PIB da cidade (* 1000000000) dividido pela número de habitantes (população)
    float Super_Poder2; /*Super Poder é a soma de todas as variáveis de valores
    (população + área da cidade + PIB + pontos turisticos + PIB per capita + inverso densidade)*/
    float inverso_densidade_populacional2; //Para calcular o inverso da densidade populacional usa-se: 1.0 / densidade
    
    //Entrada de dados da carta 1
    printf("Cadastro carta 1, jogo Super Trunfo\n");

    printf("Digite o estado (uma letra de A a H): ");
    scanf("%c", &estado1);

    printf("Digite o código do estado (um número de 01 a 04): ");
    scanf("%s", &codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nome_cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area_cidade1);

    printf("Digite o número do PIB - Produto Interno Bruto: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Entrada de dados da carta 2
    printf("\nCadastro carta 2, jogo Super Trunfo\n");

    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código do estado (um número de 01 a 04): ");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nome_cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area_cidade2);

    printf("Digite o número do PIB - Produto Interno Bruto: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Mostrando dados da carta 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %c %s\n", estado1, codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area_cidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    //Cálculos Carta 1
    densidade_populacional1 = (float)(populacao1 / area_cidade1);
    printf ("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    PIB_per_capita1 = (float)((PIB1 * 1000000000) / populacao1);
    printf ("PIB per capita : %.2f reais\n", PIB_per_capita1);
    inverso_densidade_populacional1 = (1.0 / densidade_populacional1);
    printf ("O valor inverso da densidade é: %.2f hab/km²\n", inverso_densidade_populacional1);
    Super_Poder1 = (float) populacao1 + area_cidade1 + PIB1 + (float) pontos_turisticos1 + PIB_per_capita1 + inverso_densidade_populacional1;
    printf ("O valor do Super Poder é: %2.f \n", Super_Poder1);

    //Mostrando dados da carta 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %c %s\n", estado2, codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area_cidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    //Cálculos Carta 2
    densidade_populacional2 = (float)(populacao2 / area_cidade2);
    printf ("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    PIB_per_capita2 = (float)((PIB2 * 1000000000) / populacao2);
    printf ("PIB per capita : %.2f reais\n", PIB_per_capita2);
    inverso_densidade_populacional2 = (1.0 / densidade_populacional2);
    printf ("O valor inverso da densidade é: %.2f hab/km²\n", inverso_densidade_populacional2);
    Super_Poder2 = (float) populacao2 + area_cidade2 + PIB2 + (float) pontos_turisticos2 + PIB_per_capita2 + inverso_densidade_populacional2;
    printf ("O valor do Super Poder é: %2.f \n", Super_Poder2);

    int escolha_atributo;

    //Menu interativo
    printf ("*** Jogo Super Trunfo *** \n");
    printf ("*** Bem Vindo ao Jogo *** \n");
    printf ("Escolha um atributo para comparar: \n");
    printf (" 1 - População \n");
    printf (" 2 - Área \n");
    printf (" 3 - PIB \n");
    printf (" 4 - Pontos Turísticos \n");
    printf (" 5 - Densidade Populacional \n");
    printf (" 6 - PIB Per Capita \n");
    printf (" 7 - Super Poder \n");
    printf ("Escolha:  \n");
    scanf ("%d", &escolha_atributo);

    //Comparação as cartas
    switch (escolha_atributo) {
        case 1:
            printf ("\n*** Comparação de cartas Atributo: População ***\n");
            printf ("Carta 1: %s, %c: %lu reais\n", nome_cidade1, estado1, populacao1);
            printf ("Carta 2: %s, %c: %lu reais\n", nome_cidade2, estado2, populacao2);

            if (populacao1 > populacao2) {
                printf ("Resultado: Carta 1 venceu!\n");
            } else if (populacao1 < populacao2) {
                printf ("Resultado: Carta 2 venceu!\n");
            } else {
                printf ("Resultado: Empate!\n");
            }
        break;

        case 2:
            printf ("\n*** Comparação de cartas Atributo: Área ***\n");
            printf ("Carta 1: %s, %c: %.2f reais\n", nome_cidade1, estado1, area_cidade1);
            printf ("Carta 2: %s, %c: %.2f reais\n", nome_cidade2, estado2, area_cidade2);

            if (area_cidade1 > area_cidade2) {
                printf ("Resultado: Carta 1 venceu!\n");
            } else if (area_cidade1 < area_cidade2) {
                printf ("Resultado: Carta 2 venceu!\n");
            } else {
                printf ("Resultado: Empate!\n");
            }
        break;

        case 3:
            printf ("\n*** Comparação de cartas Atributo: PIB ***\n");
            printf ("Carta 1: %s, %c: %.2f reais\n", nome_cidade1, estado1, PIB1);
            printf ("Carta 2: %s, %c: %.2f reais\n", nome_cidade2, estado2, PIB2);

            if (PIB1 > PIB2) {
                printf ("Resultado: Carta 1 venceu!\n");
            } else if (PIB1 < PIB2) {
                printf ("Resultado: Carta 2 venceu!\n");
            } else {
                printf ("Resultado: Empate!\n");
            }
        break;

        case 4:
            printf ("\n*** Comparação de cartas Atributo: Pontos Turísticos ***\n");
            printf ("Carta 1: %s, %c: %d reais\n", nome_cidade1, estado1, pontos_turisticos1);
            printf ("Carta 2: %s, %c: %d reais\n", nome_cidade2, estado2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf ("Resultado: Carta 1 venceu!\n");
            } else if (pontos_turisticos1 < pontos_turisticos2) {
                printf ("Resultado: Carta 2 venceu!\n");
            } else {
                printf ("Resultado: Empate!\n");
            }
        break;

        case 5:
            printf ("\n*** Comparação de cartas Atributo: Densidade populacional ***\n");
            printf ("Carta 1: %s, %c: %.2f reais\n", nome_cidade1, estado1, densidade_populacional1);
            printf ("Carta 2: %s, %c: %.2f reais\n", nome_cidade2, estado2, densidade_populacional2);

            if (densidade_populacional1 < densidade_populacional2) {
                printf ("Resultado: Carta 1 venceu!\n");
            } else if (densidade_populacional1 > densidade_populacional2) {
                printf ("Resultado: Carta 2 venceu!\n");
            } else {
                printf ("Resultado: Empate!\n");
            }
        break;

        case 6:
            printf ("\n*** Comparação de cartas Atributo: PIB Per Capita ***\n");
            printf ("Carta 1: %s, %c: %.2f reais\n", nome_cidade1, estado1, PIB_per_capita1);
            printf ("Carta 2: %s, %c: %.2f reais\n", nome_cidade2, estado2, PIB_per_capita2);

            if (PIB_per_capita1 > PIB_per_capita2) {
                printf ("Resultado: Carta 1 venceu!\n");
            } else if (PIB_per_capita1 < PIB_per_capita2) {
                printf ("Resultado: Carta 2 venceu!\n");
            } else {
                printf ("Resultado: Empate!\n");
            }
        break;

        case 7:
            printf ("\n*** Comparação de cartas Atributo: Super Poder ***\n");
            printf ("Carta 1: %s, %c: %.2f reais\n", nome_cidade1, estado1, Super_Poder1);
            printf ("Carta 2: %s, %c: %.2f reais\n", nome_cidade2, estado2, Super_Poder2);

            if (Super_Poder1 > Super_Poder2) {
                printf ("Resultado: Carta 1 venceu!\n");
            } else if (Super_Poder1 < Super_Poder2) {
                printf ("Resultado: Carta 2 venceu!\n");
            } else {
                printf ("Resultado: Empate!\n");
            }
        break;

    default:
            printf ("Opção inválida! Escolha um número do menu.\n");
        break;
    }
     
    return 0;
}