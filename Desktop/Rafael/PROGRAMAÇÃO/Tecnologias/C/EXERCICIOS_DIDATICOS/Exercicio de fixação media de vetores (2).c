#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	float nota[3], media, total;
	
	printf("\n Digite uma nota: ");
	scanf("%f", &nota[0]);
	printf("\n Digite outra nota: ");
	scanf("%f", &nota[1]);
	printf("\n Digite a terceira nota: ");
	scanf("%f", &nota[2]);
	
	printf("\n\n As notas são %.1f  -  %.1f  -  %.1f", nota[0], nota[1], nota[2]);
}
