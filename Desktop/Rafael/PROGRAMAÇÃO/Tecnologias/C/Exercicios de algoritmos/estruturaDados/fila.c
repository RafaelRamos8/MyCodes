#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10

int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
int head = 0;
int tail = 0;

void lista_elementos(){
    printf("\n--------- Fila atual ---------\n");
    for (int i; i = TAM; i++){
    printf("-");
    printf("|%d|", fila[i]);
    }

}