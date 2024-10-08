#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao = 0;
    float v1, v2, total;
    printf("Bem vindo a calculadora");
    printf("\n1 - soma\n2 - subtracao\n3 - divisao\n4 - multiplicacao\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("\nopcao escolhida: soma\n");
        printf("digite os valores a seres utilizados:\n");
            scanf("%f", &v1);
            scanf("%f", &v2);
        total = v1 + v2;
        printf("resultado: %.2f", total);
        break;
    case 2:
        printf("\nopcao escolhida: subtracao\n");
        printf("digite os valores a seres utilizados:\n");
            scanf("%f", &v1);
            scanf("%f", &v2);
        total = v1 - v2;
        printf("resultado: %.2f", total);
        break;
    case 3:
        printf("\nopcao escolhida: divisao\n");
        printf("digite os valores a seres utilizados:\n");
            scanf("%f", &v1);
            scanf("%f", &v2);
        total = v1 / v2;
        printf("resultado: %.2f", total);
        break;
    case 4:
        printf("\nopcao escolhida: multiplicacao\n");
        printf("digite os valores a seres utilizados:\n");
            scanf("%f", &v1);
            scanf("%f", &v2);
        total = v1 * v2;
        printf("resultado: %.2f", total);
        break;
    default:
        printf("Opcao invalida");
    }

        return 0;
}