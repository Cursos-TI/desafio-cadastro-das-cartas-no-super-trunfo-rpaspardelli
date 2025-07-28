/*
    "Desafio Super Trunfo: Um sistema para cadastrar as cartas com informações sobre as cidades"

    Dicas:
        %d: Imprime um inteiro no formato decimal.
        %i: Equivalente a %d.
        %f: Imprime um número de ponto flutuante no formato padrão.
        %.2f: Imprime um número de ponto flutuante no formato padrão com apenas 2 casas decimais.
        %e: Imprime um número de ponto flutuante na notação científica.
        %c: Imprime um único caractere.
        %s: Imprime uma cadeia (string) de caracteres.
*/

#include <stdio.h>
#include <string.h> //necessário para o strcpy


int main () {


    // Carta 01
    char estadoA[40], cidadeA[20], codCartaA[4];
    float areaA, pibA, densidadePopulacaoA, pibPerCapitaA, superPoderA, inversoA;
    unsigned long int ttlPopulacaoA;
    int ttlPontosTuristicosA;

    // Carta 02
    char estadoB[40], cidadeB[20], codCartaB[4];
    float areaB, pibB, densidadePopulacaoB, pibPerCapitaB, superPoderB, inversoB;
    unsigned long int ttlPopulacaoB;
    int ttlPontosTuristicosB;

    /*
        Carta 01
    */
    printf("Vamos cadastrar a carta 01!\n\n");
    strcpy(codCartaA, "A01"); // adiciona o "A01" para o codCarta
    
    printf("Digite um Estado Brasileiro: \n");
    
    fgets(estadoA, sizeof(estadoA), stdin);   
    //fgets: usado para arquivo texto mas serve para entrada de usuario tambem, neste caso para ser possivel gravar estadoAs com espaços entre os nomes, como por exempo "Sao Paulo"
    
    estadoA[strcspn(estadoA, "\n")] = '\0'; 
    //Irá remover o \n que ele coloca automaticamente no final
    
    printf("Digite uma cidade do/de: %s.\n", estadoA);
    fgets(cidadeA, sizeof(cidadeA),   stdin); 
    //fgets: usado para arquivo texto mas serve para entrada de usuario tambem, neste caso para ser possivel gravar estados com espaços entre os nomes, como por exempo "Sao Paulo"
    // scanf(" %s", &cidade);
    cidadeA[strcspn(cidadeA, "\n")] = '\0';

    printf("Digite a população da cidade: '%s'.\n", cidadeA);
    scanf("%d", &ttlPopulacaoA);
    scanf("%*c"); //limpa o buffer
    
    printf("Digite a área da cidade: '%s'.\n", cidadeA);
    scanf(" %f", &areaA);
    scanf("%*c");
    
    printf("Digite o PIB da cidade: '%s'.\n", cidadeA);
    scanf(" %f", &pibA);
    scanf("%*c");

    printf("Digite o total de pontos turisticos da cidade: '%s'.\n", cidadeA);
    scanf("%d", &ttlPontosTuristicosA);
    scanf("%*c");

    densidadePopulacaoA = (float) ttlPopulacaoA / areaA;
    pibPerCapitaA = (pibA * 1000000000) / (float) ttlPopulacaoA;

    inversoA = (1.0f / densidadePopulacaoA);

    superPoderA = (float)(ttlPopulacaoA + ttlPontosTuristicosA) + ( areaA + pibA + pibPerCapitaA + inversoA);

    /*
        Carta 02
    */
    printf("\n\nLegal, agora vamos cadastrar a Carta 02\n\n");
    strcpy(codCartaB, "B02");

    printf("Digite um Estado Brasileiro: \n");
    
    fgets(estadoB, sizeof(estadoB), stdin);   
    //fgets: usado para arquivo texto mas serve para entrada de usuario tambem, neste caso para ser possivel gravar estados com espaços entre os nomes, como por exempo "Sao Paulo"
    
    estadoB[strcspn(estadoB, "\n")] = '\0'; 
    //Irá remover o \n que ele coloca automaticamente no final

    printf("Digite uma cidade do/de: %s.\n", estadoB);
    fgets(cidadeB, sizeof(cidadeB),   stdin); 
    //fgets: usado para arquivo texto mas serve para entrada de usuario tambem, neste caso para ser possivel gravar estados com espaços entre os nomes, como por exempo "Sao Paulo"
    // scanf(" %s", &cidade);
    cidadeB[strcspn(cidadeB, "\n")] = '\0';

    printf("Digite a população da cidade: '%s'.\n", cidadeB);
    scanf(" %d", &ttlPopulacaoB);
    
    printf("Digite a área da cidade: '%s'.\n", cidadeB);
    scanf(" %f", &areaB);
    
    printf("Digite o PIB da cidade: '%s'.\n", cidadeB);
    scanf(" %f", &pibB);

    printf("Digite o total de pontos turisticos da cidade: '%s'.\n", cidadeB);
    scanf("%d", &ttlPontosTuristicosB);

    densidadePopulacaoB = (float) ttlPopulacaoB / areaB;
    pibPerCapitaB = (pibB * 1000000000) / (float) ttlPopulacaoB;

    superPoderB = (float)(ttlPopulacaoB + ttlPontosTuristicosB) + ( areaB + pibB + pibPerCapitaB) + (1.0f / densidadePopulacaoB);

    /*
        Exibição dos Resultados
    */

    /*
        Usando IF
    */

    // printf("\nComparação das Cartas: \n");
    // if (ttlPopulacaoA > ttlPopulacaoB) {
    //         printf("População: Carta 01 Venceu (1)\n");
    // } else {
    //         printf("População: Carta 02 Venceu (0)\n");
    // };

    // if (areaA > areaB) {
    //         printf("Area: Carta 01 Venceu (1)\n");
    // } else {
    //         printf("Area: Carta 02 Venceu (0)\n");
    // };

    // if (pibA > pibB) {
    //         printf("PIB: Carta 01 Venceu (1)\n");
    // } else {
    //         printf("PIB: Carta 02 Venceu (0)\n" );
    // };

    
    // if (ttlPontosTuristicosA > ttlPontosTuristicosB) {
    //         printf("Pontos Turísticos: Carta 01 Venceu (1)\n");
    // } else {
    //         printf("Pontos Turísticos: Carta 02 Venceu (0)\n");
    // };
    
    // if (densidadePopulacaoA > densidadePopulacaoB) {
    //         printf("Densidade Populacional: Carta 01 Venceu (1)\n");
    // } else {
    //         printf("Densidade Populacional: Carta 02 Venceu (0)\n");
    // };

    // if (pibPerCapitaA > pibPerCapitaB) {
    //         printf("PIB per Capita: Carta 01 Venceu (1)\n");
    // } else {
    //         printf("PIB per Capita: Carta 02 Venceu (0)\n");
    // };

    // if (superPoderA > superPoderB) {
    //         printf("Super Poder: Carta 01 Venceu (1)\n");
    // } else {
    //         printf("Super Poder: Carta 02 Venceu (0)\n");
    // };


    /*
        Usando ternários
    */
    printf("\nComparação das Cartas: \n");
    printf("População: Carta %s\n", (ttlPopulacaoA > ttlPopulacaoB) ? "01 (1)" : "02 (0)");
    printf("Área: Carta %s\n", (areaA > areaB) ? "01 (1)" : "02 (0)");
    printf("PIB: Carta %s\n", (pibA > pibB) ? "01 (1)" : "02 (0)");
    printf("Pontos Turísticos: Carta %s\n", (ttlPontosTuristicosA > ttlPontosTuristicosB) ? "01 (1)" : "02 (0)");
    printf("Densidade Populacional: Carta %s\n", (densidadePopulacaoA < densidadePopulacaoB) ? "01 (1)" : "02 (0)");
    printf("PIB per capita: Carta %s\n", (pibPerCapitaA > pibPerCapitaB) ? "01 (1)" : "02 (0)");
    printf("Super Poder: Carta %s\n", (superPoderA > superPoderB) ? "01 (1)" : "02 (0)");

    return 0;

}
