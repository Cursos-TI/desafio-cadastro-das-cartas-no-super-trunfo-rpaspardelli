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

    char estado[40], cidade[20], codCarta[4];
    float area, pib, densidadePopulacao, pibPerCapita;
    int ttlPopulacao, ttlPontosTuristicos;


    /*
        Carta 01
    */
    printf("Vamos cadastrar a carta 01!\n\n");
    strcpy(codCarta, "A01"); // adiciona o "A01" para o codCarta
    
    printf("Digite um Estado Brasileiro: \n");
    
    fgets(estado, sizeof(estado), stdin);   
    //fgets: usado para arquivo texto mas serve para entrada de usuario tambem, neste caso para ser possivel gravar estados com espaços entre os nomes, como por exempo "Sao Paulo"
    
    estado[strcspn(estado, "\n")] = '\0'; 
    //Irá remover o \n que ele coloca automaticamente no final
    
    printf("Digite uma cidade do/de: %s.\n", estado);
    fgets(cidade, sizeof(cidade),   stdin); 
    //fgets: usado para arquivo texto mas serve para entrada de usuario tambem, neste caso para ser possivel gravar estados com espaços entre os nomes, como por exempo "Sao Paulo"
    // scanf(" %s", &cidade);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite a população da cidade: '%s'.\n", cidade);
    scanf("%d", &ttlPopulacao);
    scanf("%*c"); //limpa o buffer
    
    printf("Digite a área da cidade: '%s'.\n", cidade);
    scanf(" %f", &area);
    scanf("%*c");
    
    printf("Digite o PIB da cidade: '%s'.\n", cidade);
    scanf(" %f", &pib);
    scanf("%*c");

    printf("Digite o total de pontos turisticos da cidade: '%s'.\n", cidade);
    scanf("%d", &ttlPontosTuristicos);
    scanf("%*c");

    densidadePopulacao = (float) ttlPopulacao / area;
    pibPerCapita = (pib * 1000000000) / (float) ttlPopulacao;
    
    printf("\nCarta 01: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", ttlPopulacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n",ttlPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    /*
        Carta 02
    */
    printf("\n\nLegal, agora vamos cadastrar a Carta 02\n\n");
    strcpy(codCarta, "B02");

    printf("Digite um Estado Brasileiro: \n");
    
    fgets(estado, sizeof(estado), stdin);   
    //fgets: usado para arquivo texto mas serve para entrada de usuario tambem, neste caso para ser possivel gravar estados com espaços entre os nomes, como por exempo "Sao Paulo"
    
    estado[strcspn(estado, "\n")] = '\0'; 
    //Irá remover o \n que ele coloca automaticamente no final

    printf("Digite uma cidade do/de: %s.\n", estado);
    fgets(cidade, sizeof(cidade),   stdin); 
    //fgets: usado para arquivo texto mas serve para entrada de usuario tambem, neste caso para ser possivel gravar estados com espaços entre os nomes, como por exempo "Sao Paulo"
    // scanf(" %s", &cidade);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite a população da cidade: '%s'.\n", cidade);
    scanf(" %d", &ttlPopulacao);
    
    printf("Digite a área da cidade: '%s'.\n", cidade);
    scanf(" %f", &area);
    
    printf("Digite o PIB da cidade: '%s'.\n", cidade);
    scanf(" %f", &pib);

    printf("Digite o total de pontos turisticos da cidade: '%s'.\n", cidade);
    scanf("%d", &ttlPontosTuristicos);

    densidadePopulacao = (float) ttlPopulacao / area;
    pibPerCapita = (pib * 1000000000) / (float) ttlPopulacao;

    printf("\nCarta 02: \n"
            "Estado: %s\n"
            "Código: %s\n"
            "Nome da Cidade: %s\n"
            "População: %d\n"
            "Área: %.2f km²\n"
            "PIB: %.2f bilhões de reais\n"
            "Número de Pontos Turísticos: %d\n"
            "Densidade Populacional: %.2f hab/km² \n"
            "PIB per Capita: %.2f\n ",
            estado, codCarta, cidade, ttlPopulacao, area, pib, ttlPontosTuristicos, densidadePopulacao, pibPerCapita
    );
    

} 