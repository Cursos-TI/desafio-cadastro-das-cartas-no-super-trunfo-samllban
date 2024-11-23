#include <stdio.h>

typedef struct {
    int codigo[4];
    char  nomeDaCidade[50];
    long int populacao;
    double area;
    double pib;
    int pontosTuristicos;
}Cidade;


void capturarDados(Cidade * cidade) {
    printf("Digite o codigo da cidade: ");
    scanf("%d", &Ccodigo);

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
}

void exibirCidades(Cidade * cidade) {
    
    printf("Codigo da cidade: %d\n", codigo);
    printf("Nome da cidade: %s\n", nomeDaCidade);
    printf("População: %ld\n", populacao);
    printf("Area da cidade: %lf\n km", area);
    printf("pib populacional: %lf\n", pib);
    printf("Pontos tutisticos: %d", pontosTuristicos);
}

void gerarCodigo(char estado, int numCidade, char * codigo) {
    snprintf(codigo, 4, "%c%02d\n", estado, numCidade );
}


int main()
{
    

    return 0;
}
