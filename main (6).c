#include <stdio.h>

//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros. Imprima os valores das variáveis antes e após a modificacao.

void Alterar (int i,int *pi, float f, float *pf, char c, char *pc) {
   printf("\nAlterar o número inteiro dentro da função: ");
    scanf("%d", &*pi);
  printf("O número %d passou a ser: %d dentro da função.\n",i, *pi);

  printf("\n\nAlterar o número float dentro da função: ");
    scanf("%f", &*pf);
  printf("O número %.1f passou a ser: %.1f dentro da função.\n", f,*pf);

  printf("\n\nAlterar o caractere dentro da função: ");
    scanf("%c", &*pc);
  printf("O caractere %c passou a ser: %c dentro da função.\n", c,*pc);
}

int main(void) {
int i=1;
float f=1.2;
char letra='c';

  printf("\nAntes da modificação:\n");
  printf("int: %d --- float: %.1f --- char: %c",i,f,letra);
  printf("\n-------------------------------------------------\n");

    printf("\nDepois da modificação:\n");
Alterar(i,&i,f,&f,letra,&letra); //os valores mudam na main
  
    return 0;
}