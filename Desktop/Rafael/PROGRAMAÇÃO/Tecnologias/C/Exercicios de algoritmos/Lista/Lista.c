#include <stdio.h>
#include <locale.h>
//define o tamanho da fila
#define TAMFILA 10

int fila[TAMFILA] = {0,0,0,0,0,0,0,0,0,0};
int head = 0;
int tail = 0;

//setlocale(LC_ALL,"portuguese"); //Faz com que o padr�o seja da localidade da linguagem
    //setlocale(LC_ALL,NULL); | NULL n�o vai acentuar porque est� no ingl�s
    //printf("%s",setlocale(LC_ALL,"portuguese") );
    //printf("Cora��o");

void lista_elementos(){
 printf("\n==============FILA ATUAL==============\n");
for(int i=0; i<TAMFILA;i++){
     printf("-");
     printf("|%d|",fila[i]);
     printf("-");
     }
}
int main ()
{
lista_elementos();

    return 0;
}
