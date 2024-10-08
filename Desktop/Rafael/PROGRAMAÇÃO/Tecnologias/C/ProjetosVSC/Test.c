#include <stdio.h>
#include <stdlib.h>


int main(){
    int number = 0;

    printf("digite um numero");
    scanf("%d", &number);

    if(number > 2){
        printf("OK!");
    }else{
        printf("Fail!");
    }
    return 0;
}