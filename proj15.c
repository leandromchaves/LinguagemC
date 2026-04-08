#include <stdio.h>
#include <stdlib.h>


//Escreva um programa que mostre os 100 primeiros números inteiros positivos em ordem crescente;
//Utilize o laco de repeticao FOR;
//Digite o valor 100 quando for solicitado.
int main()
{
   int valor;
   int contador = 0;
   int quantidade;

   printf("Digite a quantidade de numeros que serao lidos: ");
   scanf("%d", &quantidade);

   for (contador = 1; contador <= quantidade; contador++)
   {valor = contador;
   printf( "%d", valor);
   printf( " ");
   }
   }