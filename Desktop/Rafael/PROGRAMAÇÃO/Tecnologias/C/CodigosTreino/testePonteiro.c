#include <stdio.h>
#include <stdlib.h>

void main(){
    int a; // declara variavel inteiro simples 
    int *p; // declara variavel inteiro tipo ponteiro
    p = &a; // ponteiro recebe o endereço de memoria de 'a'
    *p = 2; // ponteiro altera o conteudo dentro da memoria de 'a'
    printf("%d", a); //imprime 'a'
    return 0;
}