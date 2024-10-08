/*funcao troca (versão incorreta)*/
#include <stdio.h>
#include <stdlib.h>
/*
void troca (int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void main(){
    int a = 5, b = 7;
    troca(a,b);
    printf("%d %d \n", a, b);
}*/

/*função troca(Versão correta)*/
void troca (int *px, int *py){
int temp;
temp = *px; // temp guarda endere�o de px 
*px = *py; // px agora aponta para o endere�o de py recebendo seu valor
*py = temp; // py recebe novamente o valor de temp que era antes o valor de px 
}

void main(){
    int a = 5, b = 7;
    troca(&a, &b); /*passamos os endereços das variaveis*/
    printf("%d %d \n", a, b);
}
