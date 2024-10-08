#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "");

float nota1, nota2, nota3, media, soma;	
char name[50];	
	
	printf("Calculador de Media e Avaliador \n \n");
	printf("Neste excercicio se deve obter 3 notas de um determinado aluno, efetuar a media \ne o aluno sera aprovado apenas se a nota fora maior que 7 \n \n");
	
	printf("Escreva o nome do Aluno: ");
	scanf("%s", &name);
	printf("O nome do Aluno é %s e suas notas são: \n", name);
	printf("\n Nota da materia 1: ");
	scanf("%f", &nota1);
	printf("\n Nota da materia 2: ");
	scanf("%f", &nota2);
	printf("\n Nota da materia 3: ");
	scanf("%f", &nota3);

printf("As notas do(a) Aluno(a) %s são %.2f / %.2f / %.2f \n", name, nota1, nota2, nota3);

soma = (nota1 + nota2 + nota3);
media = (soma / 3);
printf("A media do(a) aluno(a) %s é %f", name, media);
	
	if(media >= 7){
		printf("\n \n O aluno %s foi APROVADO!", name);
	}
	if(media <= 7){
		printf("\n \n O aluno %s foi REPROVADO!", name);
	}
system("pause");	
}
