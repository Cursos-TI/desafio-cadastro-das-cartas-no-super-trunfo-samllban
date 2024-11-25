#include <stdio.h>
#include <string.h>

typedef struct {
    char codigo[5];
    char  nomeDaCidade[50];
    long int populacao;
    double area;
    double pib;
    int pontosTuristicos;
    double desidadePercapita;
    double desidadePopulacional;
}Cidade;


void capturarDados(Cidade * cidade) {

   
    printf("Digite o nome da cidade: ");
    fgets(cidade ->nomeDaCidade, 50, stdin);

    printf("Digite populacao: ");
    scanf("%ld", &cidade ->populacao);

    printf("Digite a area da cidade: ");
    scanf("%lf", &cidade ->area);

    printf("Digite o pib da cidade:");
    scanf("%lf", &cidade ->pib);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &cidade ->pontosTuristicos);

    cidade -> desidadePopulacional = cidade -> populacao/ cidade-> area;
    cidade -> desidadePercapita = cidade -> pib/ cidade -> populacao;

}

void exibirCidades(const Cidade * cidade) {
    
    printf("Nome da cidade: %s\n", cidade -> nomeDaCidade);
    printf("População: %ld\n", cidade ->populacao);
    printf("Area da cidade: %lf\n km", cidade ->area);
    printf("pib populacional: %lf\n", cidade ->pib);
    printf("Pontos tutisticos: %d\n", cidade ->pontosTuristicos);
    printf("Densidade populacional: %.2lf habitantes/km²\n", cidade -> desidadePopulacional); 
    printf("PIB per capita: %.2lf\n", cidade -> desidadePercapita);   
}

void gerarCodigo(char estado, int numCidade, char * codigo) {
    snprintf(codigo, 5, "%c%02d\n", estado, numCidade );
}

int main(){

    Cidade  cidades[8][4];

    for( char estado = 'A'; estado<= 'H'; estado++) {
        for (int numCidade = 1; numCidade <= 4; numCidade++) {
            printf("Cadastro da cidade : %c%02d\n", estado, numCidade);
            gerarCodigo(estado, numCidade, cidades[estado - 'A'][numCidade - 1].codigo);
            capturarDados(&cidades[estado - 'A'][numCidade - 1]);
            printf("\n");
        }
    }

    printf("Cidades cadastradas:\n");
    printf("----------------------------------\n");
    for (char estado = 'A'; estado <= 'H'; estado++) {
        for(int numCidade = 1; numCidade<=4; numCidade++ ) {
            exibirCidades(&cidades[estado - 'A'][numCidade - 1]);
        }
    }
    
    return 0;
}
