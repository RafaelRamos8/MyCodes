#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

//Fun��o principal do programa
void main(){
	setlocale(LC_ALL,"");
	
	//Definindo vari�veis
	bool a = true, b = false;
	
	printf("Esse � o programa de condicionais booleanas! \n \n");
	//condicinal A
	if(a == true){
		printf("\n A � verdadeiro");
	}
	
	if(b == true){
		printf("\n ent�o B � verdadeiro");
	}else{
		printf("\n ent�o B � falso e ");
	}
	
	if(!b){
		printf("\n ent�o B � mesmo falso");
	}else{
		printf("\n ent�o B tamb�m � verdadeiro");
	}
		
		
//Pausa o Programa ap�s executar		
}
