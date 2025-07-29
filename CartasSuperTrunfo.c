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

    printf("Super Trunfo Paises\n"); //Cabeçalho do Jogo

    // Variaveis e tipos de dados

    char estado1[20], estado2[20]; //string
    char codigo1[10], codigo2[20]; //string
    char cidade1[10], cidade2[10]; //string
    int populacao1, populacao2, numero1, numero2;
    float area1, area2, pib1, pib2;

    printf("n\n\Cadastro Carta 01\n");

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &numero1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n\n");
    scanf("%f", &pib1);

    printf("Dados da Carta 01\n\n");

    printf("O estado escolhido foi %s\n",estado1);
    printf("O Código da cidade é %s\n", codigo1);
    printf("A cidade escolhida foi %s\n", cidade1);
    printf("A Cidade %s possui %d habitantes\n", cidade1, populacao1);
    printf("a cidade %s, possui %d pontos turisticos\n", cidade1, numero1);
    printf("A Área de %s em km é %f\n", cidade1, area1);
    printf("O PIB da cidade %s é %f\n\n", cidade1, pib1);

    printf("Cadastro Carta 02\n\n");

    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de Pontos Turíticos: \n");
    scanf("%d", &numero2);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n\n");

    printf("Dados da Carta 02\n\n");

    printf("O estado escolhido foi %s\n",estado2);
    printf("O Código da cidade é %s\n", codigo2);
    printf("A cidade escolhida foi %s\n", cidade2);
    printf("A Cidade %s possui %d habitantes\n", cidade2, populacao2);
    printf("a cidade %s, possui %d pontos turisticos\n", cidade2, numero2);
    printf("A Área de %s em km é %f\n", cidade2, area2);
    printf("O PIB da cidade %s é %f\n\n", cidade2, pib2);


    return 0;
}
