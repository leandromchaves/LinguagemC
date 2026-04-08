#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia um valor positivo N e que mostre na tela os N primeiros números pares em ordem crescente;
//Utilize FOR.

int main()
{
   int num = 0;
   int contador = 0;
   int quantidade;

    printf("Digite o valor da quantidade: ");
    scanf("%d", &quantidade);

    for (num, contador; contador <= quantidade; num++)
    {
        if (num %2 == 0)
            {contador++;
            printf("%d", num);
            printf(" ");}
    }



}