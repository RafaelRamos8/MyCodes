#include <stdio.h>
#include <stdlib.h>

int soma(int valor1, int valor2){
	printf("\nA soma dos dois valores %d e %d eh %d", valor1, valor2, valor1 + valor2);
}

int main(){
	
	int a, b;
	printf("Digite os valores a serem somados: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	soma(a, b);
	
	return 0;
}
