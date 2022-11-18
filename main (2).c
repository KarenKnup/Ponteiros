#include <stdio.h>

//p - indica que é ponteiro ---- usa-se ponteiros em valores que já foram definidos na main ou com uma operação definida para calculá-lo, alterando-os quantas vezes for preciso sem precisar criar várias variáveis

int SomaSucessores(int *px, int *py){
  *px=*px+1;
  (*py)++;
  return (*px)+(*py);
}

int main(void) {
int x,y,z;
  x=10, y=20;
  z=SomaSucessores(&x,&y);
  printf ("%d",z);
  
    return 0;
}