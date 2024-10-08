#include <stdio.h>


int main (){
int soma, mult, div, sub, A, B;

printf("Digite o valor de A: \n");
scanf("%d", &A);
printf("Digite o valor de B: \n");
scanf("%d", &B);

soma = A + B;
mult = A * B;
sub = A - B;
div = A / B;

printf ("Resultados \n");
printf ("Soma: %d. \n", soma);
printf ("mult: %d. \n", mult);
printf ("sub: %d. \n", sub);
printf ("div: %d. \n", div);
}
