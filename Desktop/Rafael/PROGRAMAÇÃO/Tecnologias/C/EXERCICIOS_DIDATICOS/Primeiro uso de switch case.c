#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	int num;
	char b = 'x';

	printf("\nDetermine o valor de A em numero inteiro: ");
	scanf("%d", &num);
	
	if(num == 1){
		printf("\nA op��o escolhida foi: 1");
	}else if(num == 2){
		printf("\nA op��o escolhida foi: 2");
	}else if(num == 3){
		printf("\nA op��o escolhida foi: 3");
	}else{
		printf("\nOp��o Invalida!");
	}
	
	switch(num){
		case 1:
			printf("\nA op��o escolhida foi: 1");
			break;
		case 2:
			printf("\nA op��o escolhida foi: 2");
			break;
		case 3:
			printf("\nA op��o escolhida foi: 3");
			break;
		default:
			printf("\nOp��o Invalida!");
			break;
			
	}
	switch(b){
		case'x':
			printf("\nA letra � x");
			break;
		default:
			printf("\nOp��o Invalida!");
			break;
			
 system("pause");
	}
}
