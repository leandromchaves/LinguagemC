#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Menu com as quatro principais operacoes matematicas
    //01 - Adicao
    //02 - Subtracao
    //03 - Multiplicacao
    //04 - Divisao

    int operacao;
    float valor1;
    float valor2;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%f", &valor1);

    printf("Escolha a operacao matematica: \n");
    printf("1 - Adicao: \n");
    printf("2 - Subtracao: \n");
    printf("3 - Multiplicacao \n");
    printf("4 - Divisao \n");
    scanf("%d", &operacao);

    printf("Digite o segundo numero: ");
    scanf("%f", &valor2);

    switch (operacao)
    {case 1:
        resultado = valor1 + valor2;
        break;
    case 2:
        resultado = valor1 - valor2;
        break;
    case 3:
        resultado = valor1 * valor2;
        break;
    case 4:
        resultado = valor1 / valor2;
        break;
    }

 printf("O resultado e: %.1f", resultado);

    }








