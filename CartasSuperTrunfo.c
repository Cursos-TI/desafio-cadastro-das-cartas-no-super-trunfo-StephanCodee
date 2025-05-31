#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste 
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.


int main() {
    char codigodacidade[50];
    char nome[50];
    char estado[50];
    int populacao;
    int pontosturisticos;
    float areaemkm2;
    float pib;

    printf("Digite o codigo da primeira cidade: \n");
    scanf("%s", &codigodacidade);

    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", &nome);

    printf("Digite o estado da primeira cidade: \n");
    scanf("%s", &estado);
    
    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontosturisticos);

    printf("Digite a area da primeira cidade: \n");
    scanf("%f", &areaemkm2);

    printf("Digite o Pib da primeira cidade: \n");
    scanf("%f", &pib);

    printf("Primeira carta: \n");

    printf("Nome da cidade: %s\n", nome); 

    printf("Estado: %s\n", estado); 

    printf("População: %d\n", populacao);

    printf("Numero de pontos turisticos: %d\n", pontosturisticos); 

    printf("Area da cidade: %f\n", areaemkm2); 

    printf("Pib da cidade: %f\n", pib);

    printf("Codigo da cidade: %s\n", codigodacidade);

    ///////////////////////////////////

    printf("Digite o codigo da segunda cidade: \n");
    scanf("%s", &codigodacidade);

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", &nome);

    printf("Digite o estado da segunda cidade: \n");
    scanf("%s", &estado);
    
    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontosturisticos);

    printf("Digite a area da segunda cidade: \n");
    scanf("%f", &areaemkm2);

    printf("Digite o Pib da segunda cidade: \n");
    scanf("%f", &pib);
    

    printf("Segunda carta: \n");

    printf("Nome da cidade: %s\n", nome); 

    printf("Estado: %s\n", estado); 

    printf("População: %d\n", populacao);

    printf("Numero de pontos turisticos: %d\n", pontosturisticos); 

    printf("Area da cidade: %f\n", areaemkm2); 

    printf("Pib da cidade: %f\n", pib);

    printf("Codigo da cidade: %s\n", codigodacidade);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
