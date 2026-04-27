#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{/*Informe um número natural positivo. Caso ele seja negativo, o usuário deverá informar um número natural positivo novamente,
    até que a condição seja satisfeita.*/

   setlocale(LC_ALL, "");

   //Leitura
   int numero;

   //Interno

   //Escrita

   do
   {
       //limpa a tela
       system("cls");
       printf("Informe um número natural positivo: ");
       scanf("%d", &numero);
   }
   while(numero < 0);

   printf("\nO número natural digitado é: ");
   printf("%d", numero);

   /*Obs: Esse programa ainda não trata o caso do usuário entrar com um texto que não 
   represente um valor numérico.*/
}
