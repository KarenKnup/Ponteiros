#include <stdio.h>

//Crie um programa que contenha uma função que permita passar por parâmetro dois  números inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal. 

void Soma (int *pA, int *pB){
    *pA=((*pA)+(*pB));
}

int main(void) {
int A=2,B=6;

  Soma (&A,&B);
  printf("\n\nB= %d e a soma de A e B vale A= %d",B,A);
  
  return 0;
}