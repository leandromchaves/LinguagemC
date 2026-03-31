#include <stdio.h>
#include <stdlib.h>

int main()
{
// Faca um programa que leia uma valor do tipo double e depois o imprima na forma de notação cientifica.

    double valor = 0.0;

        scanf("%lf" , &valor);
        printf("%e", valor);