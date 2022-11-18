#include <stdio.h>
/*Para cada aluno de uma turma é lido: 

Matrícula, nota1, nota2, nota3 e  

a frequência -- 15 inteiros representando as faltas do aluno nas 15 aulas do curso: 
0- presente nos dois tempos
1 – presente em apenas 1 tempo  
2- ausente nos dois tempos


Faça um programa, utilizando a função abaixo, que exiba, para cada aluno: 

 a matrícula, média, presenças, e % de faltas dos alunos  

 Função  void  processa_pauta( int * numpresencas, float * percfaltas), que recebe o endereço de duas variáveis que serão preenchidas com o número de presenças e o % de faltas de um aluno calculados a partir da leitura  da freqüência 
 */

void processa_pauta (int *pnum_presencas, float *ppercentual_faltas){
  int p, pres[15], f1, f2;
  f1=f2=0;
    for (p=0;p<15;p++){
     printf("Digite o valor da presença %d: ",p+1);
    scanf("%d",&pres[p]);
      switch (pres[p]) {
        case 0:
        (*pnum_presencas)++;
        break;
        case 1:
        f1++;
        break;
        default:
        f2+=2;
        break;
      }
    }
  *ppercentual_faltas=(f1+f2)/(15*2);
}

float CalculaMedia (float n1, float n2, float n3){
float m;

  return m=(n1+n2+n3)/3;
}

void exibe (int mat, float media, int num_presencas, float percentual_faltas){
  printf("\n____________________________________________________");
  printf("\nMatrícula do(a) aluno(a): %d",mat);
  printf("\nMédia do(a) aluno(a): %.2f",media);
  printf("\nQuantidade de presenças do(a) aluno(a): %d",num_presencas);
  printf("\nPercentual de faltas do(a) aluno(a): %.2f%%", percentual_faltas*100);
}

int main(void) {
//Variaveis
int mat;
float n1,n2,n3,m;
  
//Usuario
printf("Qual a matrícula?   ");
scanf("%d",&mat);
printf("Quais foram as 3 notas?   ");
scanf("%f%f%f",&n1,&n2,&n3);

  
//Calculos e Resultados
int num_presencas=0;
float percentual_faltas;
  processa_pauta(&num_presencas,&percentual_faltas);
  m=CalculaMedia(n1,n2,n3);
  exibe(mat,m,num_presencas,percentual_faltas);
  
    return 0;
}