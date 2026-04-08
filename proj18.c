#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia um valor positivo N e que mostre na tela os N primeiros números ímpares em ordem crescente;
//Utilize FOR.

int main()
{
   int num = 0;
   int contador = 0;
   int quantidade;

    printf("Digite o valor da quantidade: ");
    scanf("%d", &quantidade);

    for (num, contador; num <= quantidade; num++)
    {
        if (num %2 == 1)
            {contador++;
            printf("%d", num);
            printf(" ");}
    }



}
