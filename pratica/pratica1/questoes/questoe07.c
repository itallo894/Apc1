// 7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.

#include <stdio.h>

int main(){

  float valordahrdetrabalho = 150.00;
  float horastrabalhadas = 100;

  const float IR = 0.25f;
  const float INSS = 0.11f;


  float salariobruto = valordahrdetrabalho * horastrabalhadas;
  float impostoderenda = salariobruto * IR;
  float impostoprev = salariobruto * INSS;
  float salarioliquido = salariobruto - impostoderenda - impostoprev;


  printf("--------------------------------\n");
  printf("     C O N T R A C H E Q U E    \n");
  printf("--------------------------------\n");

  printf("Salario Bruto....: R$ %8.2f\n", salariobruto);
  printf("Imposto de Renda.: R$ %8.2f\n", impostoderenda);
  printf("Imposto de Previd.: R$ %8.2f\n", impostoprev);
  printf( "Salario Liquido.: R$ %8.2f\n", salarioliquido);



   return 0;
}


 