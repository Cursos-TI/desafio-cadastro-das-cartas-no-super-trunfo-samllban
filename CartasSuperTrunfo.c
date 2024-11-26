#include <stdio.h>
#include <string.h>

typedef struct {
    char codigo[5];
    long int populacao;
    double area;
    double pib;
    int pontosTuristicos;
    double desidadePercapita;
    double desidadePopulacional; 
}Cidade;

void capturarDados(Cidade * cidade) {

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

double superPoderCalculador( const Cidade * cidade) {
    return cidade -> populacao + cidade -> area + cidade -> pib + cidade -> pontosTuristicos;
}


void compararCartas( const Cidade * cidade1, const Cidade * cidade2) {

    //população 
    if(cidade1 -> populacao > cidade2 -> populacao) {
        printf("População da cidade: %s, vence com %ld numero de habitantes\n", cidade1 ->codigo, cidade1->populacao);
    }
    else if(cidade2 -> populacao > cidade1 -> populacao) {
        printf("População da cidade: %s, vence com %ld numero de habitantes\n",cidade2 -> codigo, cidade2->populacao);
    }
    else {
        printf("Valores populacionais iguais\n");
    }

    //area

    if( cidade1 -> area > cidade2 -> area) {
        printf("Area da cidade: %s, vence com %lf numeros de area\n", cidade1 -> codigo, cidade1 -> area);
    } else if (cidade2 -> area > cidade2 -> area) {
        printf("Area da cidade: %s, vence com %lf numeros de area\n", cidade2 -> codigo, cidade2 -> area);
    } else {
        printf("Valores de area iguais\n");
    }

    //pib 

    if( cidade1 -> pib> cidade2 -> pib) {
        printf("Pib da cidade: %s, vence com %lf\n ", cidade1 -> codigo, cidade1 -> pib);
    } else if (cidade2 -> area > cidade2 -> area) {
        printf("Area da cidade: %s, vence com %lf\n", cidade2 -> codigo, cidade2 -> area);
    } else {
        printf("Valores do pib iguais\n");
    }

    //pontos turisticos

    if( cidade1 -> pontosTuristicos> cidade2 -> pontosTuristicos) {
        printf("Ponto turiticos da cidade: %s, vence com %d\n ", cidade1 -> codigo, cidade1 -> pontosTuristicos);
    } else if (cidade2 -> area > cidade2 -> area) {
        printf("Pontos turisticos da cidade : %s, vence com %d\n", cidade2 -> codigo, cidade2 -> pontosTuristicos);
    } else {
        printf("Valores dos pontos turisticos são iguais\n");
    }

    double superPoder1 = superPoderCalculador(cidade1);
    double superPoder2 = superPoderCalculador(cidade2);


    printf("Super Poder:\n");
    if(superPoder1 > superPoder2) {
        printf("Cidade %s vence com super poder de %lf\n", cidade1 -> codigo, superPoder1);
    } else if( superPoder2 > superPoder1) {
        printf("Cidade %s vence com super de %lf\n", cidade2 ->codigo, superPoder2 );
    } else {
        printf("Valores dos super poderes iguais\n");
    }
}

int main(){

    Cidade cidades[2][2];
    char codigo1[5], codigo2[5];
    Cidade * cidade1 = NULL, * cidade2 = NULL;

    for( char estado = 'A'; estado<= 'B'; estado++) {
        for (int numCidade = 1; numCidade <= 2; numCidade++) {
            printf("Cadastro da cidade : %c%02d\n", estado, numCidade);
            gerarCodigo(estado, numCidade, cidades[estado - 'A'][numCidade - 1].codigo);
            capturarDados(&cidades[estado - 'A'][numCidade - 1]);
            printf("\n");
        }
    }

    printf("Cidades cadastradas:\n");
    printf("----------------------------------\n");
    for (char estado = 'A'; estado <= 'B'; estado++) {
        for(int numCidade = 1; numCidade<=2; numCidade++ ) {
            exibirCidades(&cidades[estado - 'A'][numCidade - 1]);
        }
    }

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo1);
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo2);
    

    for(int i = 0; i < 2; i++) {
        for( int j = 0 ;i < 2; j ++) {
            if(strcmp(cidades[i][j].codigo, codigo1 ) == 0){
                cidade1 = &cidades[i][j];
            }
            if(strcmp(cidades[i][j].codigo, codigo2 ) == 0){
                cidade2 = &cidades[i][j];
            }
        }
    }

    if(cidade1 && cidade2) {
        compararCartas(cidade1, cidade2);
    } else {
        printf("Cidade não encontrada!!!\n");
    }
    return 0;
}
