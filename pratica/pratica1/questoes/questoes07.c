// Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include<math.h>

int main(){
  int altura;
  int distancia;
  int angulo = angulo <= 45;
  const float PI = 3.14159;

  printf("Digite a altura: \n");
  int deu_certo = scanf("%i", &altura);

  printf("Digite a distancia: \n");
  deu_certo = scanf("%i", &distancia);

  printf("Digite o angulo: \n");
  deu_certo = scanf("%i", &angulo);

  double distanciaPercorrida = (sin(angulo/(PI * 180) * distancia));

  printf("A distancia percorrida é %f\n", distanciaPercorrida);

  
  
  






  return 0;
}