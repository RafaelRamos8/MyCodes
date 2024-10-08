#include <stdio.h>
#include <stdlib.h>

//Função principal
void main(){
	//Definindo Variáveis
int cont;
//contando de 1 a 10
for(cont = 1; cont <= 10; cont++){
	printf("\n%d", cont);
}
//Tabuada do 5
for(cont = 1; cont <= 10; cont++){
	printf("\n5 X %d = %d", cont, 5 * cont);
}	
printf("\n \n \n");
// Fim do programa
system("pause");
}
