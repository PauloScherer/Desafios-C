
//crie um algoritimo que leia 2 notas e mostre o valor absoluto entre elas


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	
	//comando para usar acentos
	setlocale(LC_ALL, "");
	
	//variaveis
	int nota1, nota2;
	
	
	printf ("Digite a primeira nota: ");
	scanf ("%d" , &nota1);
	
	printf ("Digite a segunda nota: ");
	scanf ("%d" , &nota2);
	
	printf ("A diferen�a entre as duas notas �: %d", abs(nota1-nota2));
	
	return 0;
	
}
