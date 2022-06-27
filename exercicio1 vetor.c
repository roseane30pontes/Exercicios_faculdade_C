#include <stdio.h>
#include <stdlib.h>

int main()
{
  char letra;
  int vet[5],posicao,somaa=0,somae=0,somai=0,somao=0,somau=0;

  while (letra != 'z')
  {
      printf ("Digite uma letra:");
      scanf (" %c",&letra);

      if (letra == 'a')
      {
          vet[0]=somaa++;
      }
      if (letra == 'e')
      {
          vet[1]=somae++;
      }
      if (letra=='i')
      {
          vet[2]=somai++;
      }
      if (letra == 'o')
      {
          vet[3]=somao++;
      }
      if (letra=='u')
      {
          vet[4]=somau++;
      }
  }
  printf ("A letra A apareceu %d vezes \n A letra E apareceu %d vezes \n A letra I apareceu %d vezes \n A letra O apareceu %d vezes \n A letra U apareceu %d vezes", somaa,somae,somai,somao,somau);

  }





