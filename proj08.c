#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Faca um programa que simule 4 lancamentos de um dado de seis lados e que mostre na tela o valor de cada lancamento.

    int min;
    int max;
    int randomico;
    int randomico2;
    int randomico3;
    int randomico4;

    printf("Inicio do intervalo: ");
    scanf("%d", &min);

    printf("Final do intervalo: ");
    scanf("%d", &max);

    srand (time(NULL));

    randomico = (min + (rand ()% (max - min + 1)));
    randomico2 = (min + (rand ()% (max - min + 1)));
    randomico3 = (min + (rand ()% (max - min + 1)));
    randomico4 = (min + (rand ()% (max - min + 1)));

    printf("\n Valor minimo: %d", min);
    printf("\n Valor maximo: %d", max);
    printf("\n Primeiro numero sorteado: %d", randomico);
    printf("\n Segundo numero sorteado: %d", randomico2);
    printf("\n Terceiro numero sorteado: %d", randomico3);
    printf("\n Quarto numero sorteado: %d", randomico4);

    return 0;






}
