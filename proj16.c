#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia um valor N e que mostre na tela os N primeiros numeros inteiros positivos em ordem decrescente;
//Utilize FOR.
int main()
{
    int contador;
    int quantidade = 0;


    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &contador);


    for(contador; contador >= quantidade; contador--)

    {
    printf("%d", contador);
    printf(" ");
    }
    }