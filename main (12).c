#include <stdio.h>

/*Faça uma função que receba um vetor e o endereço de duas variáveis. Na primeira variável deve ser armazenado o menor valor e na segunda, quantas vezes o menor valor apareceu no vetor.
Teste sua função construindo uma main*/

#define TAM 3 

//Digitar 3 números entre 0 e 10 e definir qual o menor e quantas vezes aparece

void Verifica_Menor (int *pmenor, int *pqtde_menor, int v[]){
  int contador;
  
  for(contador=0;contador < TAM; contador++){
    if(v[contador] < *pmenor){
      *pmenor = v[contador];
      }
    }
 
  for(contador=0; contador < TAM; contador++){
       if(v[contador] == *pmenor){
      (*pqtde_menor)++;
    }
  }
}

int main(void) {
  
int menor, qtde_menor=0, num[TAM], contador;

 for(contador=0; contador < TAM; contador++){

  printf("\nInsira o %dº número, entre 0 e 10:   ",contador+1);
    scanf("%d",&num[contador]);
   
      while (num[contador]>10 || num[contador]<0){
        printf("\nO número não está entre 0 e 10. Insira um novo número:  ");
        scanf("%d",&num[contador]);
      }
  }
   
  Verifica_Menor(&menor,&qtde_menor,num);

  printf("\n\n___________________________________________________\n");
  printf("\n     O menor número foi %d e apareceu %d vezes.",menor,qtde_menor);    printf("\n___________________________________________________\n");

  
  return 0;
}