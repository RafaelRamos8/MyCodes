#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	int i, valor, aux = 0;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	for(i = 1; i <= valor; i++){
	
	
	if(valor % i == 0){
	aux++;
}
	printf("%d / %d tem resto = %d \n", valor, i, valor%i);
	
}

if(aux == 2){
	printf("\nO n�mero � primo!");
}else{
	printf("\nO n�mero n�o � primo! pois tem %d divisores", aux);
}


system("pause");
}
