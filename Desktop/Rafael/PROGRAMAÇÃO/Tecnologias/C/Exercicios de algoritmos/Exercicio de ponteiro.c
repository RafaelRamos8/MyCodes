#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"");

int input;

printf("Digite um valor inteiro qualquer:\n");
scanf("%d", &input);

int *ponteiro = &input;

printf("\nO valor guardado na vari�vel ponteiro � = %d", *ponteiro);
printf("\nEndere�o da mem�ria da vari�vel ponteiro � = %d", ponteiro);

return 0;
}
