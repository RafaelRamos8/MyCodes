#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal
int main(){

    //Alterando para linguagem local
    setlocale(LC_ALL,"portugese");

    float valor1, valor2 = 0;
    int ope = 0;
do{

//Apresentando o programa
    printf("Bem vindo a Calculadora em C.\nVamos calcular?\n");
//Obtendo os valores para operar 
    printf("\nDigite um valor: ");
    scanf("%f", &valor1);
    printf("Digite outro valor: ");
    scanf("%f", &valor2);
//Exibindo a os valores
    printf("Os valores digitados sao: --- %.2f ---- e ---- %.2f", valor1, valor2);
//Escolhendo a operação
    
    printf("\n\nEscola uma das opçoes:\n1: +\n2: -\n3: *\n4: /\n-1: Cancelar\n\nEscolha operaçao desejada: ");
    scanf("%d", &ope);


    switch (ope){
    
    case 1:
        printf("\n\nresultado e: %.2f\n\n", valor1 + valor2);
        break;

    case 2:
        printf("\n\nresultado e: %.2f\n\n", valor1 - valor2);
        break;

    case 3:   
        printf("\n\nresultado e: %.2f\n\n", valor1 * valor2);
        break;

    case 4:
        printf("\n\nresultado e: %.2f\n\n", valor1 / valor2);
        break;  

     case -1:
        printf("Cancelando...");
        break; 
    
    default:
        break;
    }
        }while(ope != -1);
    



 return 0;   
}
