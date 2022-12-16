
//crie um algoritmo que imprima os numeros de 10 ate 0 de forma regressiva usando while, do while e for



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int a = 10;
	
	
	//usando while
	
	while ( a >= 0) {
		printf("\n%d", a);
		a = a - 1;
	}
	
	
	//usando Do While
	
    do{
 
        printf("\n%d", a);
		a = a - 1;
 
    }
	
	while(a >= 1);
	
	
	//usando o for
	
	  for(a = 10; a >= 0; a--){
        printf("%d \n", a);
    }
	
	
	
	
	return 0;
} 
