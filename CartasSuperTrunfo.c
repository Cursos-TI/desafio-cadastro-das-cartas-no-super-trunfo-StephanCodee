#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.


int main() {
    char codigodacidade[50];
    char nome[50];
    char estado[50];
    int população;
    int pontosturisticos;
    float areaemkm2;
    float pib;

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigodacidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o estado: \n");
    scanf("%s", &estado);
    
    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Digite a area da cidade: \n");
    scanf("%f", &areaemkm2);

    printf("Digite o Pib da cidade: \n");
    scanf("%f", &pib);


    printf("Codigo da cidade: %s \n"); 
    printf("Nome da cidade: %s \n"); 
    printf("Estado: %s \n"); 
    printf("População: %d \n");
    printf("Numero de pontos turisticos: %d \n"); 
    printf("Area da cidade: %f \n"); 
    printf("Pib da cidade: %f \n");













    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
