#include <stdio.h>

int main(){
/*4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.*/

  float preco_inicial = 100.0f;
  float preco_final ;
  const float ICMS = 0.17;
  const float COFINS = 0.076;
  const float PIS_PASEP = 0.0165;


  preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;


  printf("O preço inicial do produto é: %.2f\n", preco_inicial);
  printf( "O preço final do produto é: %f\n", preco_final);

  float valor_icms = preco_inicial * ICMS;
  float valor_cofins = preco_inicial * COFINS;
  float valor_pispasep = preco_inicial * PIS_PASEP;

  printf("O valor do ICMS %f\n",  valor_icms);
  printf("O valor do COFINS %f\n",  valor_cofins);
  printf("O valor do PIS/PASEP %f\n",  valor_pispasep);
  printf("Preço final %f\n", preco_final);



  return 0;
}