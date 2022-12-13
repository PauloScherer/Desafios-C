#include <stdio.h>
#include <stdlib.h>



int main() {

	//variaveis
	int a = 4, opcao = 3;
	float b = 2.5;
	char c = 'x';
	
	// condicionais simples
	if (a == 5) {
		printf("\n A variavel a = 5");
	}
	
		if (b == 2.5) {
		printf("\n A variavel b = 2.5");
	}	
		
		if (c == 'x') {
		printf("\n A variavel c = Letra X");
	}
		
	//numeros pares e impares
	if ( a % 2 == 1) {
		printf ("\n A variavel A eh IMPAR");
		
	} else {
		printf("\n A variavel A eh PAR");
	}
	
	// condicional composta
	if (opcao == 1) {
		printf ("\n A opcao eh = 1");
		
	} else if (opcao == 2){
		printf ("\n A opcao eh = 2");
		
	} else {
		printf("\n A opcao nao eh 1 e nem 2");
	
	}
	
	

	return 0;
}
	

	
