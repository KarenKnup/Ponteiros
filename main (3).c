#include <stdio.h>
//break - força saída de um laço de repetição ou um switch..case

/*
a mesma forma que o comando if, o comando switch case controla o fluxo do programa permitindo ao programador especificar código diferente para ser executado em várias condições. Em particular, um comando switch compara o valor de uma variável aos valores especificados nos comandos case. Quando um comando case é encontrado cujo valor é igual ao da variável, o código para esse comando case é executado.

A palavra-chave break interrompe o comando switch, e é tipicamente usada no final de cada case. Sem um comando break, o comando switch irá continuar a executar as expressões seguintes (desnecessariamente) até encontrar um break, ou até o final do comando switch ser alcançado.

switch (var) {
	case valor1:
		//comando/s
		break;
	case valor 2:
		//comando/s
		break;
	default:
		//comando/s
		break;
}
  */

void Matricula (int mat, int *pxxx, int *pd, int *pn){
  //NDXXX
  //N- 1(TEC) ou 2 (Humanas) - área
  //D-1 a 0 - curso
  //XXX - random
*pxxx=mat%1000;//pega 3 ultimos numeros da mat
 mat=mat/1000; //pega os 2 primeiros numeros da mat
*pd=mat%10;//dos 2 nums da mat, pega o ultimo
  mat=mat/10;//dos 2 nums da mat, pega o primeiro - define o curso
*pn=mat;//esse ponteiro indica a area da mat, o primeiro numero
}

void Perc_Recomendado (int n, float cr, float *p1, float *p2){
  if (cr>=9){
    *p1=0.3; //recomendaçao minima p os 2
    switch (n){// n- 1(TecCient) e 2 (Humanas)
      case 1://recomendaçao maxima de 1
      *p2=0.4;
      break;
      
      default:
      *p2=0.35;
      break;
    }
  }
  else if (cr>=8){
    *p1=0.1;
    switch(n){
      case 1:
      *p2=0.15;
      break;
      
      default:
      *p2=0.12;
      break;
    }
  }
  else if(cr>=7){
    *p1=*p2=0.05;
  } 
  else {
    *p1=*p2=0;
  } 
}

int UmAluno (int mat, float cr, int qtde_curs){
  float perc_bolsa;

  int n,d,xxx;
  Matricula(mat,&xxx,&d,&n);
  float p1,p2;
  Perc_Recomendado(n,cr,&p1,&p2);

  perc_bolsa=p1+0.05*qtde_curs;

  if (perc_bolsa>p2){
      perc_bolsa=p2;
   switch(n){
     case 1:
     printf("\nÁrea: Técnico Científico");
     break;

     default:
     printf("\nÁrea: Humanas");
     break;
   } 
  }

  printf("\nCurso: %d",d);
  printf("\nSequência 3 últimos números: %d",xxx);
  printf("\nPercentual da bolsa: %.2f%% ou %.2f",perc_bolsa*100,perc_bolsa);
  printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++");
return perc_bolsa;
  }

int main(void) {
//Variaveis
int mat, qtde_disc;
  int pn,pd,pxxx;
float cr,bolsa;
  
//Usuario
printf("Digite a matrícula do aluno(a):   ");
scanf("%d",&mat); //fora e no fim do while aquele que dita quando parar
 
  //Calculos e Resultados
int conta_alunos=0,  qtde_bolsas=0;
float soma_percbolsas=0,maior_percbolsa=0;
 
    while(mat!=0){
      conta_alunos++;
printf("Indique o CR do aluno(a):   ");
scanf("%f",&cr);
printf("Informe a quantidade de disciplinas cursadas:   ");
scanf("%d",&qtde_disc);
    printf("      \n%dº Aluno:",conta_alunos);
     bolsa=UmAluno(mat,cr,qtde_disc);//vem em perc
      soma_percbolsas+=bolsa;
        if (bolsa>0){
          qtde_bolsas++;
        }
        if (maior_percbolsa<bolsa){
          maior_percbolsa=bolsa;
        }
      
printf("\nDigite a matrícula do aluno(a):   ");
scanf("%d",&mat); 
    }
  printf("\n____________________________________________________");
  printf("\n%d alunos receberam bolsas",qtde_bolsas);
  printf("\nPercentual médio das bolsas: %.2f%%",(soma_percbolsas/qtde_bolsas)*100);
  printf("\nPercentual da maior bolsa: %.2f%%",maior_percbolsa*100);
  
    return 0;
}