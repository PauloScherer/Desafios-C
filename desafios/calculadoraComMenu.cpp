
//leia 2 valores e depois crie um menu (usando switch case) de 4 op��es:
//1- somar, 2- subtrair, 3- dividir, 4- multiplicar.
//depois que o usuario escolher uma op��o, mostre o resultado da opera��o escolhida com os dois valores lidos.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

	setlocale(LC_ALL, "");


	//variaveis
	float valor1, valor2;
	
	int opcao;
	
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &valor1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%f", &valor2);
	
	printf("\ndigite sua op��o: ");
	printf("\n1 - somar");
	printf("\n2 - subtrair");
	printf("\n3 - multiplicar");
	printf("\n4 - dividir\n");
	scanf("%d", &opcao);
	
	switch(opcao) {
		
		case 1:
			printf("RESULTADO DA SOMA: %.2f", valor1 + valor2);
			break;
			
		case 2:
			printf("RESULTADO DA SUBTRA��O: %.2f", valor1 - valor2);
			break;
			
		case 3:
			printf("RESULTADO DA MULTIPLICA��O: %.2f", valor1 * valor2);
			break;
			
		case 4:
			printf("RESULTADO DA DIVIS�O: %.2f", valor1 / valor2);
			break;
	}


	return 0;

}

