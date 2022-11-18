#include <stdio.h>
//Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B. 

int Dobro (int *pA, int *pB) {
 int s;

    s=*pA+*pB;
*pA=2*(*pA);
*pB=2*(*pB);

  return s;
}

int main(void) {
int A=2,B=5;

  Dobro(&A,&B);
  
printf("\n\nO dobro de A vale %d e o dobro de B vale %d, e A+B= %d",A,B,Dobro(&A,&B));
  
  return 0;
}