#include <stdio.h>
#include <stdlib.h>
   
   
   //Exerc�cio A
   
 int main (void){
    int array1 [10]={0,1,1,0,1,0,0,0,0,0};
    int array2 [10]={1,0,0,1,0,1,1,1,1,1};
    int array3 [10]={1,1,1,0,0,0,1,0,1,0};
    int array4 [10]={0,1,1,1,0,1,0,1,0,1};
    int array5 [10]={0,0,1,1,1,0,0,1,1,0};
    int array6 [10]={1,0,1,0,0,1,1,0,0,1};
    int array7 [10]={1,1,0,1,1,0,0,1,0,0};
    int array8 [10]={1,0,1,1,0,1,0,1,0,0};
    int array9 [10]={1,0,0,1,1,0,0,1,1,1};
    int array0 [10]={1,0,0,0,0,1,1,0,0,0};
    int resul  [10];
    int cont= 0;

    while (cont < 10){
        resul [cont] = array1[cont] + array2[cont] + array3[cont] + array4[cont] + array5[cont]
        + array6[cont] + array7[cont] + array8[cont] + array9[cont] + array0[cont];
        if (resul[cont] >= 6){
            resul[cont]= 1;
        }else{
            resul[cont]= 0;
        }
        cont = cont + 1;
        printf("%d", cont);

    }
    cont = 0;
    printf("\nO Valor em binario e: \n");
    while (cont < 10){
        printf("%d", resul[cont]);
        cont = cont + 1;
    }

	//Exerc�cio B
	
 int num;
 int result; 
 int i; 
  
 printf("\nDigite o numero: \n");
 scanf("\n%d", &num);
  
 // Utiliza um n�mero de 32 bits como base para a convers�o.
 for(i = 31; i >= 0; i--) {

    result = num >> i;

    if(result & 1) {
        printf("1");
    } else {
        printf("0");
    }
 
 }	
 
 system("pause");
return 0;
}