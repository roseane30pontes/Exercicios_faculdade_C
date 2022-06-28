#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numeros1[50],posicao,posicao2=0,numeros2[10];

  for (posicao=0;posicao<50;posicao++)
  {
      printf ("Digite um numero:");
      scanf (" %d",&numeros1[posicao]);
  }

  do
  {
      printf ("Digite um numero para comparacao: ");
      scanf(" %d",&numeros2[posicao2]);

      for (posicao=0;posicao<50;posicao++)
      {
         if (numeros2[posicao2]==numeros1[posicao])
         {
             printf ("O numero citado ja se encontra na primeira serie de numeros digitados e se encontra na posicao %d do vetor\n",posicao);
         }
      }
      posicao2++;
  }
  while (posicao2<10);

  }





