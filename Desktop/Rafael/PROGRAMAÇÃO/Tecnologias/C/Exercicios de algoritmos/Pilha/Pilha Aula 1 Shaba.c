#include <stdio.h>
#include <stdlib.h>

#define TAMPILHA 10

int pilha[TAMPILHA] = {0,0,0,0,0,0,0,0,0,0};
int topo = 0;

//Funcao Inserir

void push(){
    int val; //vai criar uma variavel para receber o numero do usuario
    printf("Digite um numero inteiro: ");
    scanf("%d", &val);

if(topo < TAMPILHA){
    pilha[topo]= val;//o que vou falar
    topo = topo + 1;
    lista_elementos(); // vamos criar ainda
    }else{
            printf("Nao ha mais espacos");
    }
}
void lista_elementos(){  //função para exibir a saida
    printf("\n================PILHA ATUAL===============\n");
    for (int i = 0;i < TAMPILHA; i++){

        printf("--");
        printf("|%d|", pilha [i]);
        printf("-");
}
        printf("\nTopo: %d\n\n", topo);
}

void pop(){
    if(topo > 0){ //para remover o topo tem que ser miaor que 0 (0 a pilha está vazia).
            pilha [topo-1] = 0; // a posição vai receber 0 que significa que esta vazio
           //para remover um elemento o topo tem que set -1, por que se removermos somente o topo não tera ninguém para apagar
            topo = topo - 1;
            lista_elementos();
    }else{
    printf("Pilha Vazia");
        }
    }
int main(){
printf("\n Aula do dia 19/04 ---- Aula do Shaba. \n\n");
//para remover um elemento o topo tem que set -1, por que se removermos o somente o topo não tera ninguém para apagar
return 0;
system ("pause");
}

