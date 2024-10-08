#include <stdio.h>
int main (void){
	//declarando e inicializando o vetor de notas:
	
	float notas[5] = {8,9,9.5,9.2,5};
	int i;
	
	printf("exibindo os valores dos vetores: \n\n");
	
	for(i = 0; i < 4; i++ ); {
	printf("notas [%d] = %.1f \n", i, notas[i]);
	}
	
	return 0;
}
