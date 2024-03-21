// Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32)

#include <stdio.h>
int main(){
  float celsius, fahrenheit;

  printf("Digite o valor em Celsius: ");
  int deu_certo = scanf("%f", &celsius);

  fahrenheit = (9/5 * celsius + 32);

  printf("O valor em Fahrenheit é: %2.f F\n", fahrenheit);
  


  return 0;
}