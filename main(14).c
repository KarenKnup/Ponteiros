#include <stdio.h>

int menu (){
  int s;

	printf ("\n(1) Feminino\n");
	printf ("(2) Masculino\n");
 	printf ("(3) Sair\n\n");

  printf ("Qual o seu gênero? (Digite 3 para sair) ");
  scanf("%d",&s);
  printf("\n");

  return s;
}

void resposta (float taxa){
    printf("\n----------------------------------------------");
    printf("\n\tSeu gasto calórico é de %.0f kcal",taxa);
    printf("\n----------------------------------------------\n");

}

void Dados(int *idade, int *a, float *peso, float *altura){
  printf("Qual o seu peso, em kg? (Exemplo: 50) ");
  scanf("%f",peso);
  
  printf("Digite a sua altura, em m: (Exemplo: 1.70) ");
  scanf("%f",altura);
             *a=(*altura)*100;
  
  printf("Qual a sua idade? (Exemplo: 20) ");
  scanf("%d",idade);
}

int main(void) {
  int sexo, idade, a;
  float peso, taxa, altura;

  do{
    system ("CLS");	
		
		sexo = menu ();
		
		switch (sexo){
      //Feminino
			case 1: printf("--------- CÁLCULO DO GASTO DE METABOLISMO BASAL -----\n");
        Dados(&idade,&a,&peso,&altura);
        taxa=665+(9.6*peso)+(1.8*altura)-(4.7*idade);
        resposta(taxa);
					break;

      //Masculino
			case 2: printf("--------- CÁLCULO DO GASTO DE METABOLISMO BASAL -----\n");
              Dados(&idade,&a,&peso,&altura);
              taxa=66+(13.7*peso)+(5.0*a)-(6.8*idade);
              resposta(taxa);
					break;

			case 3: printf ("\n\nPrograma finalizado!");
			        break;
			        
			default: printf ("\n\nOpcao invalida! Tente novamente.");
		}
		
		system ("PAUSE");
	}	while (sexo != 3);
  
  
  return 0;
}