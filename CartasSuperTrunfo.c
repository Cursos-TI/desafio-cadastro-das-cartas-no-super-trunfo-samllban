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

    // notava

    // paises -> 8 estados(A - H) -> 4 cidades(1-4)
    // combinação da letra e do numero - fara o codigo da carta - A01

    int populacao;
    char codigos[4];
    int pontosTuristicos;
    float area;
    float pib;

    void cadastrarCidade(int i, char codigo[4])
    {
        snprintf(codigos[i], 4, "%s", codigo);

        printf("Cadastro da cidade %s:\n", codigo);
        printf("Digite a populacao: ");
        scanf("%d", &populacao[indice]);
        printf("Digite a area (em km²): ");
        scanf("%f", &area[indice]);
        printf("Digite o PIB (em bilhões): ");
        scanf("%f", &pib[indice]);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos[indice]);
        printf("\n");
        
    }

    return 0;
}
