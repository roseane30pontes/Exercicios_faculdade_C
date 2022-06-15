#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    do
    {
        printf("\nDigite um numero:");
        scanf ("%d", &numero);

        if (numero!=0 && numero!=9)
        {

            if (numero%2 == 0)
            {
                printf ("O sucessor do numero lido e:%d", numero+1);
            }
            else
            {
                printf ("O antecessor do numero lido e:%d", numero-1);
            }

        }
    }
    while (numero!=0 && numero !=9);
    }


