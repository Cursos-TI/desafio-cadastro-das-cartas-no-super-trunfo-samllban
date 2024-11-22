#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("cartas\n");


    int codigo;
    char  nomeDaCidade[50];
    long int populacao;
    double area;
    double pib;
    int pontosTuristicos;

    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo);
    printf("Digite o nome da cidade: ");
    fgets(nomeDaCidade, 50, stdin);
    printf("Digite populacao: ");
    scanf("%ld", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%lf", &area);
    printf("Digite o pib da cidade:");
    scanf("%lf", &pib);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);


    printf("Codigo da cidade: %d\n", codigo);
    printf("Nome da cidade: %s\n", nomeDaCidade);
    printf("População: %ld\n", populacao);
    printf("Area da cidade: %lf\n km", area);
    printf("pib populacional: %lf\n", pib);
    printf("Pontos tutisticos: %d", pontosTuristicos);

    return 0;
}
