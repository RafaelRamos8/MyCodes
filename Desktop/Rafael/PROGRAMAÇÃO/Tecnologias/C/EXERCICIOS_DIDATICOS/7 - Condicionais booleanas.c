#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

//Função principal do programa
void main(){
	setlocale(LC_ALL,"");
	
	//Definindo variáveis
	bool a = true, b = false;
	
	printf("Esse é o programa de condicionais booleanas! \n \n");
	//condicinal A
	if(a == true){
		printf("\n A é verdadeiro");
	}
	
	if(b == true){
		printf("\n então B é verdadeiro");
	}else{
		printf("\n então B é falso e ");
	}
	
	if(!b){
		printf("\n então B é mesmo falso");
	}else{
		printf("\n então B também é verdadeiro");
	}
		
		
//Pausa o Programa após executar		
}
