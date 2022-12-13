
//leia 3 numeros inteiros de uma só vez e coloque o resultado da multiplicação dos 3 em uma variavel propria e depois exiba esta variavel


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	
	//comando para usar acentos
	setlocale(LC_ALL, "");
	
	//definido as variaveis
	int nota1, nota2, nota3, media;
	
	//lendo as 3 notas
	printf ("Digite as três notas: ");
	scanf ("%d %d %d", &nota1, &nota2, &nota3);
	
	//calculandop e exibindo o resultado
	media = nota1 * nota2 * nota3;
	printf("O resultado é: %d", media);


	return 0;	
}
