#include <stdio.h>

int main() {

float peso;
float altura;
float imc;

   printf("coloque seu peso");
   scanf("%f", &peso);
   printf("coloque sua altura");
   scanf("%f", &altura);

  imc= peso / (altura * altura);
  printf("%f imc %f altura %f peso", imc, altura, peso);


}