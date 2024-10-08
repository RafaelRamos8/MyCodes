#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcao = 0;

    printf("\nBem vindo ao menu\nMenu\n1 - expresso\n2 - capuccino\n3 - macciato\nEscolha uma opcao:\n");

    scanf("%d", &opcao);

switch(opcao){
    case 1:
        printf("Expresso escolhido");
        break;
    case 2:
        printf("Capuccino escolhido");
        break;
    case 3:
        printf("Macciato escolhido");
     break;
    default:
        printf("Opcao Invalida");
        break;
    }
    return 0;
}

