 //Crie um algoritmo que leia 3 notas e calcule a média entre elas. 
 //Se o valor for maior que 7 informe que o aluno foi aprovado, senão foi reprovado.
 
 
 #include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");
    
    	//definido as variaveis
	float nota1, nota2, nota3, media;
	
	//lendo a nota aluno 1
	printf("\n Digite a nota do aluno 1: ");
	scanf("%f", &nota1);
	
	//lendo a nota aluno 2
	printf("\nDigite a nota do aluno 2: ");
	scanf("%f", &nota2);
	
	//lendo a nota aluno 3
	printf("\n Digite a nota do aluno 3: ");
	scanf("%f", &nota3);
	
	//calculandop e mostrando a media
	media = (nota1 + nota2 + nota3) / 3;
	printf("\n A média do aluno é: %.2f", media);
	
	
	if(media > 7) {
		printf("\n\n O Aluno foi APROVADO!");
		
	} else {
		printf("\n\n A Aluno foi REPROVADO");
	}
    
    
    
    
    
    
    return 0;
}
 
