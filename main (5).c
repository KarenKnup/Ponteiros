#include <stdio.h>
void multiplicacao(int n1, int n2){
  int multiplicacao = n1*n2;
  printf("Alterar o número 1 dentro da função\n");
  scanf("%d", &n1);
  multiplicacao = n1*n2;
  printf("O resultado: %d", multiplicacao);
  printf("\nO número 1 passou a ser: %d dentro da função.\n", n1);
}
int main(void) {
  int numero1, numero2;
  printf("--- int main ---\n\n");
  printf("Qual o valor do número 1: ");
  scanf("%d", &numero1);
  printf("Qual o valor do número 2: ");
  scanf("%d", &numero2);
  printf("\n--- void multiplicacao ---\n");
  multiplicacao(numero1, numero2);
  printf("--- int main ---\n");
  printf("\n O número 1 na função main é: %d", numero1);
  return 0;
}