#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal
int main(){

    //Alterando para linguagem local
    setlocale(LC_ALL,"");

    float valor1, valor2, total;
    int ope;
//Apresentando o programa
    printf("Bem vindo a Calculadora em C.\nVamos calcular?\n");
//Obtendo os valores para operar
    printf("\nDigite um valor: ");
    scanf("%f", &valor1);
    printf("Digite outro valor: ");
    scanf("%f", &valor2);
//Exibindo a os valores
    printf("Os valores digitados são: --- %.2f ---- e ---- %.2f", valor1, valor2);
//Escolhendo a operação
    printf("\n\nEscola uma das opções:\n1: +\n2: -\n3: *\n4: /\n-1: Cancelar\n\nEscolha operação desejada: ");
    scanf("%d", ope);


    switch (ope)

    case 1:

        printf("resultado é: %f", total = valor1 + valor2);
        break;

    case 2:

        printf("resultado é: %f", total = valor1 - valor2);
        break;

    case 3:

        printf("resultado é: %f", total = valor1 * valor2);
        break;

    case 4:

        printf("resultado é: %f", total = valor1 / valor2);
        break;

     case -1:

        printf("Cancelando...");
        break;

    default:
        break;
    }


 return 0;
}
