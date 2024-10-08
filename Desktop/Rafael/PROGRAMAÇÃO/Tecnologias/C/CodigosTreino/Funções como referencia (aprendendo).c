#include <stdio.h>
#include <stdlib.h>

int maisDez(int numero){
	return numero + 10;
}

void aumentaDez(int *numero){
	*numero = *numero + 10;
}

int main(){
	
	int a = 5;
	
	printf("\n%d", a);
	
	a = maisDez(a);
	
	printf("\n%d", a);
	
	aumentaDez(&a);
	
	printf("\n%d", a);
	
	return 0;
}
