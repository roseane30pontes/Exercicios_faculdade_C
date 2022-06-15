#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariobru, salarioliq, imposto, totalbru, totalliq,totalimp;
    int num;

    totalbru=0;
    totalliq=0;
    totalimp=0;

    for (num=1; num<=15; num++)
    {
        printf("\nDigite o valor do salario bruto:");
        scanf("%f",&salariobru);

        if (salariobru <= 999)
        {
            imposto = 0.1;
        }
        if (salariobru >999 && salariobru <= 1999)
        {
            imposto = 0.15;
        }
        if (salariobru >1999 && salariobru <= 9999)
        {
            imposto = 0.2;
        }
        if (salariobru >9999 && salariobru <= 99999)
        {
            imposto = 0.25;
        }
        if (salariobru>99999)
        {
            imposto = 0.3;
        }

        salarioliq = salariobru - (salariobru * imposto);

        printf ("O salario liquido sera:%.2f", salarioliq);

        totalbru = totalbru+salariobru;
        totalliq = totalliq + salarioliq;
        totalimp = totalimp + salariobru *imposto;
    }

    printf ("\nTotal salario bruto:%.2f \nTotal salario liquido:%.2f \nTotal imposto:%.2f", totalbru,totalliq,totalimp);


    }


