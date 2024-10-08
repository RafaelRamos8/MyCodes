#include <stdio.h>
#include <stdlib.h>

//Aloca um vetor do tamanho pedido
int* alocaVetor (int tamanho ){
 
    //É criado um ponteiro
    int *v;
 
    //A memória é alocada e o ponteiro recebe o endereço de memória dele
    v = (int *) malloc ( tamanho * sizeof (int) ) ;
 
    //Esse ponteiro é retornado
    return v;
}

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

};

int main(){

    //Ponteiro que vai apontar para o vetor criado
    int *vetor , tamanho , i;
 
    //Lendo o tamanho do vetor
    printf("Digite um tamanho");
    scanf ( "%d", &tamanho ) ;
 
    //Vetor vai receber um endereço de memória com o vetor que foi alocado
    //ponteiro = ENDERECO_DE_MEMORIA ou PONTEIRO
    //*ponteiro = VALOR
    vetor = alocaVetor(tamanho);
 
    //Colocando alguns valores no vetor
    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
 
    //Imprimindo o vetor na tela
    for(i=0;i<tamanho;i++){
        printf("%d", vetor[i]);
    }

    void select(int *vetor, int tamanho);
 
    //Libera a memória após usar o vetor
    free ( vetor ) ;

    return 0;
}