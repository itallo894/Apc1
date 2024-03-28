#include <stdio.h>
#include<math.h>
int main(){

  int numero1;
  int numero2;
  const double PI = 3.14159;

  printf("Digite o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite o segundo numero: ");
  deu_certo = scanf("%i", &numero2);



  int soma = numero1 + numero2;

  printf("A soma é %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtração é %i\n", subtracao);
  
  int multiplicação = numero1* numero2; 
  printf("A multiplicação é %i\n", multiplicação);
  
  float divisão = 1.0f*numero1/numero2;
  printf("A divisão é %f\n", divisão);

  int resto = numero1 % numero2;
  printf("O resto é %i\n", resto);

  printf("O incremento do número 1 é %i\n", numero1++);
  printf("O incremento número 1 é %i\n", ++numero1);
  
  printf("O decremento do número 1 é %i\n", numero1--);
  printf("O  decremento do número 1 é %i\n", --numero1);

  double raizquadrada = sqrt(numero1);
  printf("A raiz quadrada do número 1 é %f\n", raizquadrada);

  double potencia = pow(numero1, 3);
  printf("A 3a potência do número 1 é %f\n", potencia);

  double logaritimo2 = log2(numero1);
  printf("O log2 do número 1 é %f\n", logaritimo2);

  double log10 = log(numero1);
  printf("O log10 do número 1 é %f\n", log10);

  double coseno = cos(numero1 * (PI / 180));
  printf("O coseno do número 1 é %f\n", coseno);

  double seno = sin(numero1 * (PI / 180));
  printf("O seno do número 1 é %f\n", seno);

  double tangente = tan(numero1);
  printf("A tangente do número 1 é %f\n", tangente);






  return 0;
}