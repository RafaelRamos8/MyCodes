#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal
void main(){
	
	//Fun��o para poder usar acentos
	setlocale(LC_ALL,"");
	
	char letra = 'x';
	
	if(letra == 'x'){
		printf("\n A letra � x ");
	}
	
	printf("\n O c�digo da letra � %d", letra);
	
	if(letra == 120){
		printf("\n A letra � x " );
	}


printf("\n \n \n");
system("pause");
}

