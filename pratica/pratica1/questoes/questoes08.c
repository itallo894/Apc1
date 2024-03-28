// Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

#include <stdio.h>

int main(){

  int segundos ;
  int minutos;
  int horas;

  printf("Digite o tempo em segundos ");
  scanf("%i", &segundos);

  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundos = (segundos % 3600) % 60;

  printf(" %i segundos , corresponde a %i horas, %i minutos e %i segundos", segundos, horas, minutos ,segundos);









  return 0;
}