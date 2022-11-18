#include <stdio.h>
//Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela. 

void Compara (int *pi1,int *pi2){
  printf ("\nDigite o primeiro número:  ");
  scanf("%d",&*pi1);
printf ("Digite o segundo número:  ");
  scanf("%d",&*pi2);

  if(*pi1>*pi2) {
    printf("\n\n     O maior endereço é %d",*pi1);
    printf("\n     O menor endereço é %d",*pi2);
  } 
  else if(*pi1==*pi2) {
   printf("\n\n     Os valores são iguais!");
  } 
  else {
    printf("\n\n     O maior endereço é %d",*pi2);  
    printf("\n     O menor endereço é %d",*pi1);
    }
  
  }

int main(void) {
int i1,i2;

  Compara(&i1,&i2);
  
  return 0;
}