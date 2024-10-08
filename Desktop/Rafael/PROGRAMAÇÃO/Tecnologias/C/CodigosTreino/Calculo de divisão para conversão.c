#include <stdio.h>

int main(){
	
	int a, b, c, rest, quo, repet;

do{
	printf("\n\nescreva um valor para o dividendo: ");
	scanf("%d", &a);

    printf("\n\nescreva um valor para o divisor: ");
    scanf("%d", &b);

    quo = a / b;
    printf("\n\nvalor do quociente inteiro eh: %d", quo);
    c = quo * b;
    printf("\n\nfazendo engenharia reversa obtemos: %d", c);

    rest = a - c;

    printf("\n\no resto de divisao inteiro eh: %d", rest);
    printf("\n\n Continuar? sim 1 ou não 0:   ");
    scanf("%d", &repet);
}while(repet != 0);

    return 0;
}
