#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Super Trunfo Paises"); //Cabeçalho do Jogo

    // Variaveis e tipos de dados

    char estado1[20], estado2[20]; //string
    char codigo1[10], codigo2[20]; //string
    char cidade1[15], cidade2[15]; //string
    unsigned long int populacao1, populacao2; 
    int ponto1, ponto2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float inv_dens1, inv_dens2;
    float superpoder1, superpoder2;
   

//===================================================================
    //CADASTRO CARTA 01

    printf("\n\nCadastro Carta 01\n\n");

    printf("Digite o estado:");
    scanf("%s", estado1);

    printf("Digite o código da cidade:");
    scanf("%s", codigo1);

    printf("Digite a cidade:");
    scanf("%s", cidade1);

    printf("Digite a população da cidade:");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de Pontos Turísticos:");
    scanf("%d", &ponto1);

    printf("Digite a área da cidade:");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib1);

    densidade1 = populacao1 / area1; // Cálculo da densidade populacional
    pibpercapita1 = pib1 / populacao1; // Calculo do Pib Percapito
    inv_dens1 = 1/densidade1; // Cálculo de Inversão da densidade populacional
    superpoder1 = (populacao1 + ponto1 + area1 + pib1) + 1/densidade1;
    
    //Outra forma de calcular o SUPERPODER
    //superpoder1 = populacao2 + ponto2 + area2 + pib2 + inv_dens1;

    //DADOS DA CARTA 01

    printf("Dados da Carta 01\n\n");

    printf("O estado escolhido foi %s\n",estado1);
    printf("O Código da cidade é %s\n", codigo1);
    printf("A cidade escolhida foi %s\n", cidade1);
    printf("A Cidade %s possui %lu habitantes\n", cidade1, populacao1);
    printf("a cidade %s, possui %d pontos turisticos\n", cidade1, ponto1);
    printf("A Área de %s em km é %.2f\n", cidade1, area1);
    printf("O PIB de %s é %.2f\n", cidade1, pib1);
    printf("A Densidade Populacional é %.2f\n", densidade1);
    printf("O PIB Percapito é %.2f\n", pibpercapita1);
    printf("A inversão da Densidade Populacional é %.2f\n", inv_dens1);
    printf("O valor do Superpoder1 é %.2f\n\n", superpoder1);

//===================================================================
    //CADASTRO DA CARTA 02

    printf("Cadastro Carta 02\n\n");

    printf("Digite o Estado:");
    scanf("%s", estado2);

    printf("Digite o código:");
    scanf("%s", codigo2);

    printf("Digite a cidade:");
    scanf("%s", cidade2);

    printf("Digite a população:");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de Pontos Turíticos:");
    scanf("%d", &ponto2);

    printf("Digite a Área da cidade:");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib2);


    densidade2 = populacao2 / area2; // Cálculo da densidade populacional
    pibpercapita2 = pib2 / populacao2; // Calculo do Pib Percapito
    inv_dens2 = 1/densidade2; // Cálculo de Inversão da densidade populacional
    superpoder2 = (populacao2 + ponto2 + area2 + pib2) + 1/densidade2;

    //Outra forma de calcular o SUPERPODER
    //superpoder2 = populacao2 + ponto2 + area2 + pib2 + inv_dens2;

    //DADOS DA CARTA 02

    printf("Dados da Carta 02\n\n");

    printf("O estado escolhido foi %s\n",estado2);
    printf("O Código da cidade é %s\n", codigo2);
    printf("A cidade escolhida foi %s\n", cidade2);
    printf("A Cidade %s possui %lu habitantes\n", cidade2, populacao2);
    printf("a cidade %s, possui %d pontos turisticos\n", cidade2, ponto2);
    printf("A Área de %s em km é %.2f\n", cidade2, area2);
    printf("O PIB da cidade %s é %.2f\n", cidade2, pib2);
    printf("A Densidade Populacional é %.2f\n", densidade2);
    printf("O PIB Percapito é %.2f\n", pibpercapita2);
    printf("A inversão da Densidade Populacional é %.2f\n", inv_dens2);
    printf("O valor do Superpoder é %.2f\n\n", superpoder2);

    //Variaveis e Tipos de dados

    int cpopulacao = populacao1 > populacao2;
    int cpontos = ponto1 > ponto2;
    float carea = area1 > area2;
    float cpib = pib1 > pib2;
    float cdens_pop = densidade1 < densidade2;
    float cpibper = pibpercapita1 > pibpercapita2;
    float csuperpoder = superpoder1 > superpoder2;

    //Cabeçalho das comparações
    printf("COMPARAÇÃO DAS CARTAS\n\n");

    //Impressão dod Comparativos
    printf("População: (%d)\n", (int) cpopulacao);
    printf("Pontos Turísticos: (%d)\n", (int) cpontos);
    printf("PIB: (%d)\n", (int) cpib);
    printf("ÁREA: (%d)\n", (int) carea);
    printf("Densidade Populacional: (%d)\n", (int) cdens_pop);
    printf("PIB Percapita: (%d)\n", (int) cpibper);
    printf("Superpoder: (%d)\n\n", (int) csuperpoder);

    return 0; 

}
