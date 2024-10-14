#include<stdio.h> 
#include<math.h>

int main() {

float folha;
int c;

printf("informe a quantidade de folha");
scanf("%f", &folha);

if(folha < 100) { 
   c = folha * 0.25; 
   printf ("valor a ser pago eh %d", c);
};
if(folha > 100 ) {
    c = folha * 0.25;
    printf("valor a ser pago eh %d", c);
};




}
