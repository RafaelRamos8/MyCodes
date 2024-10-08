#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal
void main(){
	
	//Função para poder usar acentos
	setlocale(LC_ALL,"");
	
	char letra = 'x';
	
	if(letra == 'x'){
		printf("\n A letra é x ");
	}
	
	printf("\n O código da letra é %d", letra);
	
	if(letra == 120){
		printf("\n A letra é x " );
	}


printf("\n \n \n");
system("pause");
}

