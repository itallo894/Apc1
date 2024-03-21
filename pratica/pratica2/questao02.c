// Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.


#include <stdio.h>

int main(){
  int a, b, quociente, resto;

  printf("Digite o valor de a: ");
  scanf("%i", &a);
  printf("Digite o valor de b: ");
  scanf("%i",&b);

  quociente = a / b;
  resto = a % b;

  printf("O quociente da divisão é %i , e o resto é %i\n", quociente, resto);

  





  return 0;
}