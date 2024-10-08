#include <stdio.h>
#include <stdlib.h>

struct lista2{
    int info;
    struct lista2 *ant;
    struct lista2 *prox;

};

typedef struct lista2 Lista2;

void criar lista dupla (Lista2 *l){
    l->prox=NULL;
    l->=ant=NULL;

    /*inserção no inicio*/

    Lista2* lst2_insere(Lista2 * lista, int num){
        Lista2* novo = (Lista2*)malloc(sizof(Lista2));
        novo->info = num;
        novo->prox = lista;
        novo->ant = NULL;
        /*verifica se a lista não está vazia*/
        if(lista!=NULL)
        lista->ant=novo;
        return novo;
    }
}

Lista2 lst2_busca(Lista2 *lista, int num){
    Lista2* aux;
    for(aux=lista; aux!=NULL; aux=aux->prox){
        if(aux->info==num)
        return aux;
    }

    return NULL;
}

Lista2 lst2_remover(Lista2 *lista, int num){
    Lista2 p=lst2 busca(lista; num);

if(p==NULL)
return lista; //não achou o elemento

if(lista==p) //testa se é o 1º elemento
    lista=p->prox;
else
    p->ant->prox=p->prox;

    if(p->prox !=NULL) //testa se é o ultimo elemento
