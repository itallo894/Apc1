// Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.


#include <stdio.h>
int main(){
  const float Pi = 3.1416;
  int raio;

  printf("Digite o valor do raio: ");
  int deu_certo = scanf("%i", &raio);

  float perimetro = (2 * Pi * raio);
  printf("O perimetro da pizza é %f", perimetro);
  





  return 0;
}