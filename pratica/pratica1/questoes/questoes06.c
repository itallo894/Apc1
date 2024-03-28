// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
#include <stdio.h>
#include<math.h>

int main(){

int a;
int b;
int c;


printf("Digite o valor de a: ");
int deu_certo = scanf("%i", &a);

printf("Digite o valor de b: ");
deu_certo = scanf("%i", &b);

printf("Digite o valor de c: ");
deu_certo = scanf("%i", &c);

double delta = pow(b,2) - 4*a*c;
  
double raiz1 = (-b + sqrt(delta)) / (2*a);
printf("O valor da raiz positiva é %f\n", raiz1);
  
double raiz2 = (-b - sqrt(delta)) / (2*a);
printf("O valor da raiz negativa é %f\n", raiz2);






return 0;

  }