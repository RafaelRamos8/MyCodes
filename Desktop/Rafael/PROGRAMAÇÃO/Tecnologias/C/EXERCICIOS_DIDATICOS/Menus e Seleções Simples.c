#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal
void main(){
	setlocale(LC_ALL,"");
	//Definindo variáveis
	int opcao;
	
	//confere e valida
	while(opcao < 1 || opcao > 3) {

	//Interface de Menu	
	printf("Escolha uma opção:");
	printf("\nOpção 1");
	printf("\nOpção 2");
	printf("\nopção 3");
	printf("\n \n");
		
		scanf("%d", &opcao);
//Resultado de acordo com a opção escolhida
switch(opcao) {
	case 1:
		printf("\nVocê escolheu a opção 1");
		break;
	case 2:
		printf("\nVoce escolheu a opção 2");
		break;
	case 3:
		printf("\nVoce escolheu a opção 3");
		break;
	default:
		printf("\nOpção inválida...");
		break;		
	}
}
//Fim do Programa	
printf("\n\n");
system ("pause");
}
