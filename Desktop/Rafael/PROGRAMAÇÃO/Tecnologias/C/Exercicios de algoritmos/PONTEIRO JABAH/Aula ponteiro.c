#include <stdio.h>
/* std = standart
io = Input Output
& = Quando utilizado ele demonstra o Endereço da Memória ou a Caixa
* = (int* shaba Vamos receber um endereço de memória que aponta para um tipo inteiro ou int
void = Não precisa colocar return 0; mo final do código
*/

void incrementa(int* shaba){

printf ("Antes de incrementar. \n");
printf ("O contador vale %d\n", (*shaba));
printf ("O contador vale %d\n\n", shaba);
printf ("Depois de incrementar. \n");
printf ("O contador vale %d\n", ++(*shaba));
printf ("O contador vale %d\n\n", shaba);


}

int main()
{
    int shaba = 10;
    printf ("Antes de incrementar. \n");
    printf ("o contador vale %d\n", shaba);
    printf ("o contador vale %d\n\n", &shaba);

    incrementa(&shaba);

    printf ("Depois de incrementar. \n");
    printf ("o contador vale %d\n", shaba);
    printf ("o contador vale %d\n\n", &shaba);


    return 0;
    }
