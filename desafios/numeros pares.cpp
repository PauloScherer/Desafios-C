

//crie um algoritmo que imprima os numeros pares de 10 ate 20.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");

 	int i;
 
   	for(i = 10; i <= 20; i++){
       	if(i % 2 == 0){
            printf("%d é par \n", i);
        }
		else{
            printf("%d é ímpar \n", i);
        }
    }
	
	
	
	return 0;
} 
