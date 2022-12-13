
//leia 3 valores e informe se eles s�o iguais entre si para que forme os lados de um triangulo equil�tero


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	
	//usando acentos
	setlocale(LC_ALL, "");
	
	   int ladoA, ladoB, ladoC;
	   
    printf("Digite os 3 valores:");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);
 
    //Analisa se � equil�tero
    if( (ladoA == ladoB) && (ladoB == ladoC) ){
        printf("\nO tri�ngulo � equil�tero!");
        
    } else{
        //Analisa se existem pelo menos dois lados iguais
        if( (ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA)){
            printf("\nO tri�ngulo � is�sceles!");
            
        }else{
            printf("\nO tri�ngulo � escaleno!");
        }
    }
 
	
	return 0;
}
