#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal
void main(){
	setlocale(LC_ALL,"");
	//Definindo vari�veis
	int opcao;
	
	//confere e valida
	while(opcao < 1 || opcao > 3) {

	//Interface de Menu	
	printf("Escolha uma op��o:");
	printf("\nOp��o 1");
	printf("\nOp��o 2");
	printf("\nop��o 3");
	printf("\n \n");
		
		scanf("%d", &opcao);
//Resultado de acordo com a op��o escolhida
switch(opcao) {
	case 1:
		printf("\nVoc� escolheu a op��o 1");
		break;
	case 2:
		printf("\nVoce escolheu a op��o 2");
		break;
	case 3:
		printf("\nVoce escolheu a op��o 3");
		break;
	default:
		printf("\nOp��o inv�lida...");
		break;		
	}
}
//Fim do Programa	
printf("\n\n");
system ("pause");
}
