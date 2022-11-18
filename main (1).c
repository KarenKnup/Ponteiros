#include <stdio.h>
//A função "transforma ml em Onças e Galao" recebe o endereço de 2 variáveis, armazenando na primeira o valor de Onças e na segunda o valor de Galao equivalente

void transforma_ml_em_Oncas_e_Galao(float ml, float * pOz, float * pGal){
  *pOz = ml * 0.033814;
  *pGal = (*pOz) * 0.0078125;
}

int main(void) {
float pOz;
float pGal;
float ml;
printf("Digite o valor em mililitros (ml) ");
scanf("%f", &ml);
transforma_ml_em_Oncas_e_Galao(ml, &pOz, &pGal);
printf("\nValor em fl oz: %f\nValor em gal: %f",pOz, pGal);
}