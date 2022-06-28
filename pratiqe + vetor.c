#include <stdio.h>
#include <stdlib.h>

int main()
{
  float prova1[50],prova2[50],prova3[50],mediaaluno[50],mediaprova1,mediaprova2,mediaprova3,mediaturma,somaprova1=0,somaprova2=0,somaprova3=0;
  int posicao, posicao2;

  for (posicao=0;posicao<50;posicao++)
  {
      printf("Ola aluno %d\n",posicao);
      printf ("Digite a nota da primeira prova:");
      scanf ("%f",&prova1[posicao]);
      printf("Digite a nota da segunda prova:");
      scanf ("%f", &prova2[posicao]);
      printf ("Digite a nota da terceira prova:");
      scanf ("%f", &prova3[posicao]);
      printf ("\n");

      somaprova1=somaprova1+prova1[posicao];
      somaprova2=somaprova2+prova2[posicao];
      somaprova3=somaprova3+prova3[posicao];

      mediaaluno[posicao]=(prova1[posicao]+prova2[posicao]+prova3[posicao])/3;
  }
  mediaprova1=somaprova1/50;
  mediaprova2=somaprova2/50;
  mediaprova3=somaprova3/50;
  mediaturma=(mediaprova1+mediaprova2+mediaprova3)/3;

  for (posicao=0;posicao<50;posicao++)
  {
      printf ("nota aluno %d \n Prova 1: %.2f\n Prova 2: %.2f\n Prova 3: %.2f\n",posicao,prova1[posicao],prova2[posicao],prova3[posicao]);
      printf ("A media do aluno %d foi: %.2f\n",posicao,mediaaluno[posicao]);
      printf("\n");
  }
   printf ("Media da turma:\n Prova 1: %.2f\n Prova 2: %.2f\n Prova 3: %.2f\n", mediaprova1,mediaprova2,mediaprova3);
   printf ("A media da turma nesse semestre foi %.2f\n",mediaturma);

  }





