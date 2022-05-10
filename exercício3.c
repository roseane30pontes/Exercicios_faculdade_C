#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, maior, soma, media;
    int cont;

    soma=0;
    maior=0;

    for (cont=1;cont<=10;cont=cont+1)
    {
        printf ("Digite um salario: ");
        scanf ("%f",&salario);
        soma=soma+salario;

        if (salario>=maior)
        {
            maior=salario;
        }
    }

    media=soma/10;

    printf("\n O maior salario entre os funcionarios e: %.2f ",maior);
    printf ("\n A media salarial dos funcionários e: %.2f", media);



    return 0;
}
