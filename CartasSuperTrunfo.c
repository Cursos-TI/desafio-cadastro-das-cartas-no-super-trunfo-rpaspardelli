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
    char estadoA[40], cidadeA[100], codCartaA[4];
    float areaA, pibA, densidadePopulacaoA, pibPerCapitaA, superPoderA, inversoA;
    unsigned long int ttlPopulacaoA;
    int ttlPontosTuristicosA;

    // Carta 02
    char estadoB[40], cidadeB[100], codCartaB[4];
    float areaB, pibB, densidadePopulacaoB, pibPerCapitaB, superPoderB, inversoB;
    unsigned long int ttlPopulacaoB;
    int ttlPontosTuristicosB;


    /*
        Carta 01 (Digitada)
    */

    printf("Vamos cadastrar a carta 01!\n\n");
    printf("Digite o Código da Carta (ex: A01): \n");    
    scanf(" %3s", codCartaA); // %3s para ler até 3 caracteres + null terminator (array de 4)
    
    while (getchar() != '\n'); 

    printf("Digite um Estado Brasileiro: \n");
    fgets(estadoA, sizeof(estadoA), stdin);   
    //fgets: usado para arquivo texto mas serve para entrada de usuario tambem, neste caso para ser possivel gravar estadoAs com espaços entre os nomes, como por exempo "Sao Paulo"
    
    estadoA[strcspn(estadoA, "\n")] = '\0'; 
    //Irá remover o \n que ele coloca automaticamente no final
    
    printf("Digite uma cidade do/de: %s.\n", estadoA);
    fgets(cidadeA, sizeof(cidadeA),   stdin); 
    //fgets: usado para arquivo texto mas serve para entrada de usuario tambem, neste caso para ser possivel gravar estados com espaços entre os nomes, como por exempo "Sao Paulo"
    cidadeA[strcspn(cidadeA, "\n")] = '\0';

    printf("Digite a população da cidade: '%s'.\n", cidadeA);
    scanf(" %lu", &ttlPopulacaoA);
    
    printf("Digite a área da cidade: '%s'.\n", cidadeA);
    scanf(" %f", &areaA);
    
    printf("Digite o PIB da cidade: '%s'.\n", cidadeA);
    scanf(" %f", &pibA);

    printf("Digite o total de pontos turisticos da cidade: '%s'.\n", cidadeA);
    scanf(" %d", &ttlPontosTuristicosA);

    // Exemplo para densidade e PIB per capita da Carta 1    
    if (areaA != 0.0f) { 
        densidadePopulacaoA = (float) ttlPopulacaoA / areaA;    
    } else {        
        printf("*Atenção (Carta 1): Área é zero. Densidade Populacional definida como 0.00.\n*");        
        densidadePopulacaoA = 0.0f;    
    }    
    
    if (ttlPopulacaoA != 0UL) {      
        pibPerCapitaA = (pibA * 1000000000.0f) / (float) ttlPopulacaoA; 
    } else {        
        printf("*Atenção (Carta 1): População é zero. PIB per Capita definida como 0.00.\n*");        
        pibPerCapitaA = 0.0f;    
    }    
      
        
    //Exibição da Carta 01
    printf("\n--- Detalhes da Carta 1 ---\n");    
    printf("Código: %s\n", codCartaA);    
    printf("Estado: %s\n", estadoA);    
    printf("Nome da Cidade: %s\n", cidadeA);    
    printf("População: %lu\n", ttlPopulacaoA);    
    printf("Área: %.2f km²\n", areaA);    
    printf("PIB: %.2f bilhões de reais\n", pibA);    
    printf("Pontos Turísticos: %d\n", ttlPontosTuristicosA);    
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacaoA);    
    printf("PIB per Capita: %.2f Reais\n", pibPerCapitaA);    
    printf("Super Poder: %.2f\n", superPoderA);    
    printf("---------------------------\n");

    
    
    /*
        Carta 02 (Digitada)
    */

    printf("\n\nLegal, agora vamos cadastrar a Carta 02\n\n");
    printf("Digite o Código da Carta (ex: B01): ");    
    scanf(" %3s", codCartaB);

    while (getchar() != '\n'); 

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
    scanf(" %lu", &ttlPopulacaoB);
    
    printf("Digite a área da cidade: '%s'.\n", cidadeB);
    scanf(" %f", &areaB);
    
    printf("Digite o PIB da cidade: '%s'.\n", cidadeB);
    scanf(" %f", &pibB);

    printf("Digite o total de pontos turisticos da cidade: '%s'.\n", cidadeB);
    scanf(" %d", &ttlPontosTuristicosB);

    if (areaB != 0.0f) {     
        densidadePopulacaoB = (float) ttlPopulacaoB / areaB;    
    } else {        
        printf("*Atenção (Carta 2): Área é zero. Densidade Populacional definida como 0.00.\n*");        
        densidadePopulacaoB = 0.0f;    
    }    
    
    if (ttlPopulacaoB != 0UL) {   
        pibPerCapitaB = (pibB * 1000000000.0f) / (float) ttlPopulacaoB; 
    } else {        
        printf("*Atenção (Carta 2): População é zero. PIB per Capita definida como 0.00.\n*");        
        pibPerCapitaB = 0.0f;    
    }    


    // Exibição da Carta 02
    printf("\n--- Detalhes da Carta 2 ---\n");    
    printf("Código: %s\n", codCartaB);    
    printf("Estado: %s\n", estadoB);    
    printf("Nome da Cidade: %s\n", cidadeB);    
    printf("População: %lu\n", ttlPopulacaoB);    
    printf("Área: %.2f km²\n", areaB);    
    printf("PIB: %.2f bilhões de reais\n", pibB);    
    printf("Pontos Turísticos: %d\n", ttlPontosTuristicosB);    
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacaoB);    
    printf("PIB per Capita: %.2f Reais\n", pibPerCapitaB);    
    printf("Super Poder: %.2f\n", superPoderB);    
    printf("---------------------------\n\n");

    /*
        Exibição dos Resultados
    */


    printf("\tComparando as cartas \t\n");

    int opcaoJogador;

    printf(".Digite qual será a comparação que teremos:\n");
    printf("1. Estado\n");
    printf("2. População\n");
    printf("3. Area\n");
    printf("4. PIB\n");
    printf("5. Numero de Pontos Turisticos\n");
    printf("6. Densidade Demografica\n");
    printf("Digite o que quer comparar: ");
    scanf(" %d", &opcaoJogador);

    switch (opcaoJogador)
    {
    case 1:
        printf("Estados cadastrados: Carta 01 (%s) - Carta 02 (%s)\n", estadoA, estadoB);
        printf("Não é possível comparar os estados com os dados fornecidos.\n");
        break;
        
    case 2:
        printf("A opção selecionada foi: População\n");
        printf("População: Carta 01 (%s - %s): %lu -- Carta 02 (%s - %s): %lu\n",cidadeA, estadoA, ttlPopulacaoA, cidadeB, estadoB, ttlPopulacaoB);
        if (ttlPopulacaoA > ttlPopulacaoB) {
            printf("## Carta 01 Venceu (1) ##\n");
        } else if (ttlPopulacaoB > ttlPopulacaoA) {
            printf("## Carta 02 Venceu (0) ##\n");
        } else {
            printf("## Empate ##\n");
        }
        break;
    
    case 3:
        printf("A opção selecionada foi: Area\n");
        printf("Carta 01 (%s - %s): %.2f -- Carta 02 (%s - %s): %.2f\n",cidadeA, estadoA, areaA, cidadeB, estadoB, areaB);
        if (areaA > areaB) {
            printf("## Carta 01 Venceu (1) ##\n");
        } else if (areaB > areaA) {
            printf("## Carta 02 Venceu (0) ##\n");
        } else {
            printf("## Empate ##\n");
        }
        break;
    case 4:
        printf("A opção selecionada foi: PIB\n");
        printf("PIB: Carta 01 (%s - %s): %.2f -- Carta 02 (%s - %s): %.2f\n",cidadeA, estadoA, pibA, cidadeB, estadoB, pibB);
        if (pibA > pibB) {
            printf("## Carta 01 Venceu (1) ##\n");
        } else if (pibB > pibA) {
            printf("## Carta 02 Venceu (0) ##\n");
        } else {
            printf("## Empate ##\n");
        }
        break;
    case 5:
        printf("A opção selecionada foi: Numero de Pontos Turisticos\n");
        printf("Pontos Turisticos: Carta 01 (%s - %s): %u -- Carta 02 (%s - %s): %u\n",cidadeA, estadoA, ttlPontosTuristicosA, cidadeB, estadoB, ttlPontosTuristicosB);
        if (ttlPontosTuristicosA > ttlPontosTuristicosB) {
            printf("## Carta 01 Venceu (1) ##\n");
        } else if (ttlPontosTuristicosB > ttlPontosTuristicosA) {
            printf("## Carta 02 Venceu (0) ##\n");
        } else {
            printf("## Empate ##\n");
        }
        break;
    case 6:
        printf("A opção selecionada foi: Densidade Demografica\n");
        printf("Densidade Demografica: Carta 01 (%s - %s): %.2f -- Carta 02 (%s - %s): %.2f\n",cidadeA, estadoA, densidadePopulacaoA, cidadeB, estadoB, densidadePopulacaoB);
        if (densidadePopulacaoA < densidadePopulacaoB) {
            printf("## Carta 01 Venceu (1) ##\n");
        } else if (densidadePopulacaoB < densidadePopulacaoA) {
            printf("## Carta 02 Venceu (0) ##\n");
        } else {
            printf("## Empate ##\n");
        }
        break;
    
    default:
        printf("Escolha dentre as opções fornecidas");
        break;
    }

    

    return 0;

}