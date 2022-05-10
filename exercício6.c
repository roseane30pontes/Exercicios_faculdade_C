#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, numero, somapar, somaimpar, conta;
  float divisao;
  printf("Qual o valor de N?");
  scanf ("%d", &N);
  somapar=0;
  somaimpar=0;

  for (conta=1; conta<=N; conta=conta+1)
  {
      printf ("Digite um numero:");
      scanf ("%d",&numero);
      divisao=numero%2;

      if (divisao!=0)
      {
          somaimpar=somaimpar+numero;
      }
      else
      {
          somapar=somapar+numero;
      }
  }

  printf ("A soma dos numeros pares e: %d e a soma dos numeros impares e %d", somapar, somaimpar);

return 0;
}
