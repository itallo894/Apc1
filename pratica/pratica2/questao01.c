// Faça um programa em C que leia três números reais e imprima a média aritmética desses números.



#include <stdio.h>
int main(){
  float a, b, c, media;

  printf("Digite o valor de a: ");
  int deu_certo = scanf("%f", &a);
  printf("Digite o valor de b: ");
  deu_certo = scanf("%f", &b);
  printf("Digite o valor de c: ");
  scanf("%f", &c);


  media = ((a + b + c) / 3);

  printf("A média dos valores digitados é : %f\n" , media);




  return 0;  
}