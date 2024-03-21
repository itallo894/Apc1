// Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.



#include <stdio.h>

int main(){

  int base, altura;

  printf("Digite o valor da sua base : ");
  int deu_certo = scanf("%i", &base);

  printf("Digite o valor da sua altura : ");
  deu_certo = scanf("%i", &altura);

  int area = ((base * altura) / 2);

  printf("A arede do triângulo é %i" , area);
  


  return 0;
}