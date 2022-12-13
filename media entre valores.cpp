
//crie aqlgoritmo que leia 2 notas e mostre a media entre elas



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	
	//comando para usar acentos
	setlocale(LC_ALL, "");
	
	//definido as variaveis
	float nota1, nota2, media;
	
	//lendo a nota aluno 1
	printf("Digite a nota do aluno 1: ");
	scanf("%f", &nota1);
	
	//lendo a nota aluno 2
	printf("Digite a nota do aluno 2: ");
	scanf("%f", &nota2);
	
	//calculandop e mostrando a media
	media = (nota1 + nota2) / 2;
	printf("A média é: %f", media);


	return 0;	
}
