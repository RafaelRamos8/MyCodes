#include <stdio.h>
    void trocar(int *a, int*b){
        int temp = *a;
        *a = *b;
        *b = temp;
}

int main(){
int num1 = 10;
int num2 = 20;

printf("Antes de trocar: \n");
printf("num1 = %d\n", num1);
printf("num2 = %d\n", num2);

trocar(&num1, &num2);

printf("Depois da Troca: \n");
printf("num1 = %d\n", num1);
printf("num2 = %d\n", num2);

return 0;
}
