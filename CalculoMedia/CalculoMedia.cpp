#include <stdio.h>
#include <stdlib.h>

int main()
{
  float P1;
  float P2;
  float PMU;
  float Listas;
  float Artigo;
  float Media;
  float MediaInstituicao;
  
  printf("Informe a Media da Instituicao de Ensino: ");
  scanf("%f", &MediaInstituicao);
  
  printf("Informe a Nota da P1: ");
  scanf("%f", &P1);
  
  printf("Informe a Nota da P2: ");
  scanf("%f", &P2);
  
  printf("Informe a Nota das Listas: ");
  scanf("%f", &Listas);
  
  printf("Informe a Nota do Artigo: ");
  scanf("%f", &Artigo);
  
  printf("Informe a Pontuacao da PMU: ");
  scanf("%f", &PMU);
  
  Media = (P1 * 0.3) + (P2 * 0.4) + Listas + (Artigo * 0.15) + PMU;
  printf("Media: %.2f\n", Media);
  
  if (Media >= MediaInstituicao)
  {
  	printf("Aprovado!");
  }
  else
  {
  	if (P1 < P2)
	  {
	  printf("Informe Nota da P1 Substitutiva: ");
	  scanf("%f", &P1);
	  }
	  else
	  {
	  printf("Informe Nota da P2 Substitutiva: ");
	  scanf("%f", &P2);
	  }
	  
	  Media = (P1 * 0.3) + (P2 * 0.4) + Listas + (Artigo * 0.15) + PMU;
  	  printf("Media: %.2f\n", Media);
		
		if (Media >= MediaInstituicao)
		{
  	  	printf("Aprovado Apos Substitutiva\n");
		}
		else
		{
		printf("Reprovado Mesmo com Substitutiva\n");
		}
	}
  return 0;
}
