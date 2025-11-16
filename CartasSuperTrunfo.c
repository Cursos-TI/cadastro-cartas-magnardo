#include <stdio.h>

#include <stdio.h>

int main() {

  int Habitantes, PontosTuristicos; /* Valores inteiros, habitantes e numero de pontos turisticos*/
  float km², PIB; /*valores flutuantes, area e PIB*/
  
  printf("Bem Vindo ao SuperTrunfo Paises! \n"); /*Tela de boas vindas*/
  printf("Digite o número de habitantes da sua carta: \n");
  scanf("%d", &Habitantes);

  printf("Digite a Area da sua carta: \n");
  scanf("%f", &km²);

  printf("Digite o PIB da sua carta: \n");
  scanf("%f", &PIB);

  printf("Digite o Número de atrações turisticas da sua carta: \n");
  scanf("%d", &PontosTuristicos);

  printf("População: %d \n", Habitantes);
  printf("Área: %f \n", km²);
  printf("Produto interno Bruto: %f, \n", PIB);
  printf("Número de pontos turisticos: %d \n", PontosTuristicos);

  return 0;