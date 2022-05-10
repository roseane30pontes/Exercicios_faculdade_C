#include <stdio.h>
#include <stdlib.h>

int main()
{
   float porcentagem, salario,salarioReajuste,maior;
   int conta;
   maior=0;
   printf("Qual sera a porcentagem de reajuste? ");
   scanf ("%f",&porcentagem);

   porcentagem=porcentagem/100;

   for (conta=1;conta<=50;conta=conta+1)
   {
       printf ("Qual e o salario a ser reajustado?");
       scanf ("%f",&salario);
       salarioReajuste=salario*porcentagem+salario;
       printf("\n O novo salario reajustado e %.2f", salarioReajuste);
       printf("\n");

       if (salarioReajuste>maior)
       {
           maior=salarioReajuste;
       }
   }
    printf ("O maior salario da empresa sera: %.2f",maior);

return 0;
}
