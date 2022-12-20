// leia 3 valores para um vetor de 3 posição e depois calcule a media dos valores acessando o velor
// o usuario que vaqi determinar o tamanho do vetor

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "");
	
	
	int tamanho;
   		 printf("Qual será o tamanho do vetor?");
    	scanf("%d", &tamanho);
 
    float vetor[tamanho], soma;
 
    int i;
    for(i = 0; i < tamanho; i++){
        printf("Digite um valor:");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }
    for(i = 0; i < tamanho; i++){
        printf("\nvetor[%d] = %.2f",i, vetor[i]);
    }
 
    printf("\nA média dos valores é: %.2f", soma/tamanho);
	

	


return 0;
}

