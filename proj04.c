#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que leia dois valores do tipo char. Use um unico comando de leitura para isso.
    //Em seguida, imprima os valores lidos na ordem em que eles foram lidos.

    char valor1;
    char valor2;

        scanf(" %c %c", &valor1, &valor2);

            printf("%c \n", valor1);
            printf("%c", valor2);

    // Perceba que deve haver um espaco antes da porcentagem na leitura do char.
}
