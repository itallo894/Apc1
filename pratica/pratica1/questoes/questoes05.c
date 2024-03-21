// Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).


#include <stdio.h>
#include <math.h>
int main(){

  int gigabytes;
  int bytes;

  printf("Digite o valor em Gigabytes: ");
  int deu_certo = scanf("%i",&gigabytes);
  
  bytes = gigabytes * pow(1024,3);

  printf("O valor em bytes é %i\n", bytes);



  return 0;
}