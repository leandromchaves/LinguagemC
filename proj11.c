#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Faca um programa que receba dois numeros reais e mostre na tela o maior.
    //Assuma que o programa irá receber dois números diferentes.

    int valor1, valor2, maior;

    printf("Digite um numero real: ");
    scanf("%d", &valor1);

    printf("Digite um numero real: ");
    scanf("%d", &valor2);

    if (valor1 >= valor2)
    {
        maior = valor1;
    }
    else
    {
        maior = valor2;
    }

    printf("O maior numero e: %d", maior);


    return 0;


}
