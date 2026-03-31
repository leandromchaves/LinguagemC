#include <stdio.h>
#include <stdlib.h>

int main()
{

   //Faca um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere lido for a letra A, devera ser
   // impresso "A".

   char valor;

    scanf(" %c", &valor);
         printf("\"");
            printf("%c", valor);
        printf("\"");

}
