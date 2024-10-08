#include <stdio.h>


void incrementa (int* shaba){

printf("Antes de incrementar.\n");
printf("O contador vale %d\n", (*shaba));
printf("O contador vale %d\n\n", shaba);

printf("Depois de incrementar.\n");
printf("O contador vale %d\n", ++(*shaba));
printf("O contador vale %d\n\n", shaba);

}

int main(){

    int shaba = 10;
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", shaba);
    printf("O contador vale %d\n\n", &shaba);

    incrementa (&shaba);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", shaba);
    printf("O contador vale %d\n\n", &shaba);

    incrementa (&shaba);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", shaba);
    printf("O contador vale %d\n\n", &shaba);


    return 0;
}
