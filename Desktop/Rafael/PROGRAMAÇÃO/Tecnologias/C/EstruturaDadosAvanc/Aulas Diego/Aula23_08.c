#include <stdio.h>
#include <stdlib.h>


/*
//SELECTION SORT -> REVISÃO
void select(int *v, int tamanho){
    int aux, troca, indice_minimo, i;//DESAFIO: fazer outro codigo ao inves de utlizar troca, utilizar a chave
    for (i = 0; i<tamanho; i++){ //percorrer as posições  (primeiro for)
        aux=v[i]; //valor sorteado
        for(int j=i+1; j<tamanho; j++ ){ //fazer as comparações (segundo for dentro do primeiro)
            if(aux>=v[j]){ //compara se o valor é menor
                aux=v[j]; //aux pega o menor valor
                indice_minimo= j; // armazena o valor da troca
            }
        if(aux!=v[i]){ //checa se o valor ja está na posição correta    
            troca=v[i]; //coloca o primeiro valor da troca 
            v[i]=aux; //coloca o menor valor no valor sorteado
            v[indice_minimo] = troca; //realiza a troca
        }
    }
}
*/

//Insert Short
