#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"");

int input;

printf("Digite um valor inteiro qualquer:\n");
scanf("%d", &input);

int *ponteiro = &input;

printf("\nO valor guardado na variável ponteiro é = %d", *ponteiro);
printf("\nEndereço da memória da variável ponteiro é = %d", ponteiro);

return 0;
}
