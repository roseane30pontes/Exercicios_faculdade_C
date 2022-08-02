#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3],linha,coluna,maior=0;

    for(linha=0;linha<3;linha++)
    {
        for(coluna=0;coluna<3;coluna++)
        {
            printf ("Digite um numero positivo para ser armazenado na linha %d e coluna %d: ",linha,coluna);
            scanf ("%d",&mat[linha][coluna]);

            if(mat[linha][coluna]>maior)
            {
                maior=mat[linha][coluna];
            }

        }
    }

        printf ("o maior numero armazenado na matriz foi o numero %d e ele foi encontrado na",maior);

     for(linha=0;linha<3;linha++)
     {
        for(coluna=0;coluna<3;coluna++)
        {
            if (mat[linha][coluna]==maior)
            {
                printf (" linha:%d e coluna:%d",linha,coluna);
            }
        }
     }

  }





