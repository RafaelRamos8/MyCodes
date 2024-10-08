#include <stdio.h>
#include <stdlib.h>

struct ponto{ 
    float x;
    float y;
    struct ponto *prox;
};

typedef struct ponto Ponto; //alterando o nome de todo o struct para "Ponto"

void add(float x, float y){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto)); //alocação dinamica de memoria de um ponteiro.
         p->x = 1; //passando os valores
         p->y = 5; //passando os valores
}

int main(){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto)); //alocação dinamica de memoria de um ponteiro.
            p->x = 1; //passando os valores
            p->y = 5; //passando os valores

    Ponto *p1 = (Ponto*) malloc(sizeof(Ponto)); //proximo no da estrutura 
            p1->x = 3;
            p1->y = 9;

    Ponto *p2 = (Ponto*) malloc(sizeof(Ponto));
            p->x = 1;
            p->y = 5;

//Fazendo o encadeamento onde um nó ponta pro proximo
    p->prox = p1;
    p1->prox = p2;
    p2->prox = NULL;

    return 0;
}