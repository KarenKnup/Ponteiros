#include <stdio.h>
/*
Uma função não pode retornar 2 resposta, para isso existem os PONTEIROS
y++ => y=y+1
VARIÁVEIS - informações que ocupam espaço na memória, cada variável tem um endereço(&), um valor em hexadecimal -- uma variável tem um nome, um valor e um endereço

VARIÁVEL PONTEIRO - é uma variável capaz de armazenar endereços de memória, essa variável também ocupa espaço na memória -- ela não guarda valores, guarda endereços

Pointers are very important in C programming because they allow you to easily work with memory locations. 
They are fundamental to arrays, strings, and other data structures and algorithms. 
A pointer is a variable that contains the address of another variable. In other words, it "points" to the location assigned to a variable and can indirectly access the variable. 

* -- visita um endereço

*&x -- o conteúdo do endereço de x

  */

int main(void) {
int *ponteiro;
int  x=10,  y=20, z;

  //-----------------------------------------
ponteiro=&x;
  *&x=30;
  z=*ponteiro+x;
  printf("%d  %d  %d",x,y,z);
  printf("\nEndereço de x: %d",&x);
    printf("\nEndereço de x (hexadecimal): %x\n\n",&x);

//----------------------------------------------------
  int j = 63;  
int *p = NULL;  
p = &j;  
 
printf("The address of j is %x\n", &j);  
printf("p contains address %x\n", p);  
printf("The value of j is %d\n", j);  
printf("p is pointing to the value %d\n", *p); 
  /*
1 - criar variável ponteiro
2 - associar a variável ponteiro a alguma variável
3 - mudar o valor da variável no ponteiro ou usar em operações
    */
  //----------------------------------------------
  int x = 12;
int *p = NULL;
int **ptr = NULL;
p = &x;
ptr = &p;

  //-----------------------------------------------
  int x = 5;  
int y;  
int *p = NULL;  
p = &x;  
 
y = *p + 2; /* y is assigned 7 */  
y += *p; /* y is assigned 12 */  
*p = y; /* x is assigned 12 */  
(*p)++; /* x is incremented to 13 */  
 
printf("p is pointing to the value %d\n", *p);  

//-----------------------------------------------
  int num=42;
  int *pt=&num;
  *pt*=2;
  
    return 0;
}