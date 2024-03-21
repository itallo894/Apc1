 // Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.



#include <stdio.h>
int main (){
  float a1, a2, media;
  
  printf("Digite o valor da sua nota A1: ");
  int deu_certo = scanf("%f", &a1);

  printf("Digite o valor da sua nota A2: ");
  deu_certo = scanf("%f", &a2);

  media = (0.4 * a1) + (0.6 * a2);
  printf("Sua média foi: %2.f \n" , media);




  return 0;
}