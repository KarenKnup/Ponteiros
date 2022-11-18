#include <stdio.h>
//Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A. 

void TrocaValores (int *px,int *py) {
  int t=*px;
  
  *px=*py;
  *py=t;
  
}

int main(void) {
 int x=2,y=4;
  
  printf("\nAntes:   x= %d  e   y= %d",x,y);
  TrocaValores(&x,&y);
  printf("\n\nDepois:   x= %d  e   y= %d",x,y);
  
  return 0;
}