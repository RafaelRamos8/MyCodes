#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    int *v;
    int i;
    int item;
    float hamburger, cheeseburger, bf, refri, milkshake =  0;

    hamburger = 3.5;
    cheeseburger = 4.5;
    bf = 5;
    refri = 1.5;
    milkshake = 2.8;

    
    printf("\nBem vindos a Mona's Burger\n");
    printf("Confira o cardapio abaixo:\nhamburger = %.2f\ncheeseburger = %.2f\nbf = %.2f\nrefri = %.2f\nmilkshake = %.2f", hamburger, cheeseburger, bf, refri, milkshake);
    printf("Digite a quantidade de itens que deseja, nao esqueca de considerar as bebidas\n");
    scanf("%d", &n);
    v = (int *)malloc(n * sizeof(int));
    for(i = 0; i < n; ++i){
        v[i]=i;
        printf("%d", v[i]);
    }

    do{

        switch()
 {   

    
    

  

    

}
    }

    return 0;
}