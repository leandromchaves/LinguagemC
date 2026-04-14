#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Faça um programa que que leia um número inteiro positivo N e imprima todos os números naturais de N até 0 em ordem decrescente;
//Utilize "WHILE"

int main()
{
    int num1;
    int num2;

    setlocale(LC_ALL, "pt_BR");

    printf("Digite um número mínimo: ");
    scanf("%d", &num1);
    printf("Digite um número máximo: ");
    scanf("%d", &num2);

    while (num1 <= num2)
    {
        printf("%d", num2);
        printf(" ");
        num2--;
    }
}