#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Crie um programa em C que leia dois valores reais (y e z) e que calcule o valor de x, considere que: x = y² + z³ + 1

    double x;
    double y;
    double z;
    double expoente1;//expoente da variável y
    double expoente2;//expoente da variável z
    double potencia1;//potencia da variável y
    double potencia2;//potencia da variável z

    printf(" Digite o valor da variavel y: ");
    scanf("\n %lf", &y);
    printf("\n Digite o expoente da variavel y: ");
    scanf("\n %lf", &expoente1);

    printf("\n Digite o valor da variavel z: ");
    scanf("\n %lf", &z);
    printf("\n Digite o expoente da variavel z: ");
    scanf("\n %lf", &expoente2);

    //Calcula a potencia
    potencia1 = pow(y, expoente1);
    potencia2 = pow(z, expoente2);

    //Calculo da equacao
    x = potencia1 + potencia2 + 1;

    printf("\n Resultado da equacao: %.1lf", x);












    return 0;






}
