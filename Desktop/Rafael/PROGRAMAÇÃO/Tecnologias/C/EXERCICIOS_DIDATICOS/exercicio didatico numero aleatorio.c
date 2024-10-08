#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand((unsigned) time(NULL));
	int aleatorio = rand () % 3;
	int aleatorio2 = (rand () % 5) + 1;
	printf("%d", aleatorio);
	printf("\n%d", aleatorio2);
	
	system("pause");

}
