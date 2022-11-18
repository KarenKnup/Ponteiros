#include <stdio.h>
//Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços e exiba o maior endereço.

void Compara (int *pi1,int *pi2){
  printf ("\nDigite o primeiro número:  ");
  scanf("%d",&*pi1);
printf ("Digite o segundo número:  ");
  scanf("%d",&*pi2);

  if(*pi1>*pi2) {
    printf("\n\n     O maior endereço é %d",*pi1);
  } 
  else if(*pi1==*pi2) {
   printf("\n\n     Os valores são iguais!");
  } 
  else {
    printf("\n\n     O maior endereço é %d",*pi2);  
    }
  }

int main(void) {
int i1,i2;

  Compara(&i1,&i2);
  
    return 0;
}