#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
//Função principal do programa
int main(){
 
   //Definindo Variáveis
   bool a = true, b = false;
 
   //Se A for verdadeiro
   if(a){
        printf("\n A eh verdadeiro");
   }
 
   //Comparando o B
   if(b){
     printf("\nB eh verdadeiro");
   }else{
     printf("\nB eh falso");
   }
 
   //Comprando uma falsidade
   if(!b){
     printf("\nB eh falso");
   }
 
  return 0;
 
}
