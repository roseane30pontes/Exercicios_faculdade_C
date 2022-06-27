#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numeros1[5], numeros2[5],posicao;

  for (posicao=0;posicao<5;posicao++)
  {
    printf ("Digite um numero:");
    scanf (" %d", &numeros1[posicao]);
    if (numeros1[posicao] % 2 == 0)
    {
        numeros2[posicao]=numeros1[posicao]++;
    }
    else
    {
        numeros2[posicao]=numeros1[posicao]--;
    }
  }
  for (posicao=0;posicao<5;posicao++)
  {
      printf ("Primeiro vetor %d\n",numeros1[posicao]);
      printf ("Segundo vetor %d\n",numeros2[posicao]);
  }


  }





