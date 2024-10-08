#include<stdio.h>
#include<stdlib.h>

//selection sort

void select(int *v, int tamanho){
    int aux, troca, indice_minimo; //indice_minimo é a posição do menor valor dentro do vetor
    for(int i=0; i<=tamanho; i++){
        aux=v[i];
        for(int j=i+1; j<tamanho; j++){
            if(aux>=v[j]){
                aux=v[j];
                indice_minimo=j;
            }
        }
        if(aux!=v[i]){
            troca=v[i];
            v[i]=aux;
            v[indice_minimo]=troca;
        }

    }
}

7, 8, 1, 6, 14, 9, 2, 10, 3, 4, 13, 5, 0, 11, 12

i =
indice_minimo = 