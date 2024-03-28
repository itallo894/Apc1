// Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.



#include<stdio.h>
int main(){
  int idade ;
  const int Mes = 30;
  const int Ano = 360;
  int dias;


  printf("Digite sua idade : ");
  int deu_certo = scanf("%i", &idade);

  int valorEmAnos = Ano * idade;
  int valorEmMeses = Mes * idade;

   dias = valorEmAnos + valorEmMeses;


  printf("O valor em dias referente a sua idade é %i\n", dias);
  
  
  







  return 0;
}