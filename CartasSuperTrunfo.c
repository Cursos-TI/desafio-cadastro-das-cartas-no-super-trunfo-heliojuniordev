#include <stdio.h>

int main (){

int populacao;
int pontos_turisticos;
float area;
float PIB;
char estado[15];
char codigo[3];
char cidade[10];

printf("Olá, seja bem vindo! A o SUPER TRUNFO \n");

printf("Digite o Estado: \n");
scanf("%s", &estado);

printf("Digite o Codigo da Carta: \n");
scanf("%s ", &codigo);

printf("Digite Nome da Cidade: \n");
scanf("%s", &cidade);

printf("Digite o Numero de População: \n");
scanf("%d", &populacao);

printf("Digite Área em Km²: \n");
scanf("%f", &area);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite o Número de Pontos turisticos: \n");
scanf("%d", &pontos_turisticos);

printf("Estado: %s \n");
printf("Código: %s \n");
printf("Cidade: %s \n");
printf("População: %d \n");
printf("Área Km²: %f \n");
printf("PIB: %f \n");
printf("Números de Pontos Turisticos: %d \n");





return 0;


}