
//leia 3 valores e informe se eles são iguais entre si para que forme os lados de um triangulo equilátero


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	
	//usando acentos
	setlocale(LC_ALL, "");
	
	   int ladoA, ladoB, ladoC;
	   
    printf("Digite os 3 valores:");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);
 
    //Analisa se é equilátero
    if( (ladoA == ladoB) && (ladoB == ladoC) ){
        printf("\nO triângulo é equilátero!");
        
    } else{
        //Analisa se existem pelo menos dois lados iguais
        if( (ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA)){
            printf("\nO triângulo é isósceles!");
            
        }else{
            printf("\nO triângulo é escaleno!");
        }
    }
 
	
	return 0;
}
