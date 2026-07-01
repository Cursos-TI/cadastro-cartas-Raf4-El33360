#include <stdio.h>

int main(){
    int numerocarta, populaçao, pontosTuristicos;
    float area, PIB;
    char estado[3], codigoCarta[10], nomeCidade[50];
    
    printf("Digite o numero da carta: \n");
    scanf("%d", &numerocarta);

    printf("Digite o numero habitantes: \n");
    scanf("%d", &populaçao);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &PIB);

    printf("Digita o UF do estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    return 0;



}
