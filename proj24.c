#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Serve para identificar a primeira passagem e inicializar corretamente variáveis importantes.

   setlocale(LC_ALL, "");

   int numero, menor, primeiraExecucao=1;

   do
   {
       printf("Informe um número inteiro: ");
       scanf("%d", &numero);

   if(primeiraExecucao == 1)
   {
       menor = numero;
       primeiraExecucao = 0;
   }
   if(numero <= menor && numero >=0)
   {
       menor = numero;
   }

   }
   while(numero>=0);

   printf("\nO menor número digitado é: ");
   printf("%d", menor);


    return 0;
}
