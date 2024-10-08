#include <stdio.h>
#include <locale.h>
//define o tamanho da fila
#define TAMFILA 10

int fila[TAMFILA] = {0,0,0,0,0,0,0,0,0,0};
int head = 0;
int tail = 0;

//setlocale(LC_ALL,"portuguese"); //Faz com que o padrão seja da localidade da linguagem
    //setlocale(LC_ALL,NULL); | NULL não vai acentuar porque está no inglês
    //printf("%s",setlocale(LC_ALL,"portuguese") );
    //printf("Coração");

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
