#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, conta, maior;

    maior=0;

    for(conta=1;conta<=15;conta=conta+1)
    {
       printf("digite um numero inteiro e positivo: ");
       scanf ("%d",&numero);
       if (numero>maior)
       {
           maior=numero;
       }
    }

    printf("\n maior numero= %d",maior);

    return 0;
}
