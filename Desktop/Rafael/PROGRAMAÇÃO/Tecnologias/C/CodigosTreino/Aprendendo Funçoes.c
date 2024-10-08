#include <stdio.h>
#inlcude <stdlib.h>

int func1(){
    return 10
}
int func2(){
    return 25
}
int func3(){
    return 34
}

int main(){

        int a, b, c;

        a = func1;
        b = func2;
        c = func3;

        printf("\n O valor de a eh %d\n", a);
        printf("\n O valor de b eh %d\n", b);
        printf("\n O valor de c eh %d\n", c);

 return 0;
}
