#include <stdio.h>

int main() {

printf("Super Trunfo\n");

    char Estado[20];
    char Codigo[10];
    char Cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Pontos_turisticos;
    

    printf("Digite o Estado:\n");
    scanf("%s", Estado);

    printf("Digite o Codigo:\n");
    scanf("%s", Codigo);

    printf("Digite a Cidade:\n");
    scanf("%s", Cidade);

    printf("Digite a Populacao:\n");
    scanf("%f", &Populacao);

    printf("Digite a Area:\n");
    scanf("%f", &Area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite os Pontos turisticos:\n");
    scanf("%d", &Pontos_turisticos);

    printf("Informacoes da carta:\n");

    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %f\n", Populacao);
    printf("Area: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Pontos turisticos: %d\n", Pontos_turisticos);

return 0;
}