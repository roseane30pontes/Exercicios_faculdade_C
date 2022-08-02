#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][4],mat2[4][4],linha,coluna;

    for(linha=0;linha<4;linha++)
    {
        for(coluna=0;coluna<4;coluna++)
        {

            printf ("Digite o valor da matriz da linha %d coluna %d:\n", linha, coluna);
            scanf(" %d",&mat[linha][coluna]);

            mat2[coluna][linha]=mat[linha][coluna];
        }
    }

    printf ("Primeira matriz:\n ");
    for (linha=0;linha<4;linha++)
    {
        for(coluna=0;coluna<4;coluna++)
        {
            printf("%d   ",mat[linha][coluna]);

        }
        printf("\n");
    }

    printf ("Segunda matriz:\n");

    for (linha=0;linha<4;linha++)
    {
        for(coluna=0;coluna<4;coluna++)
        {
            printf ("%d   ",mat2[linha][coluna]);

        }
        printf("\n");
    }
  }





