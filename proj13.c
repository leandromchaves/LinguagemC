#include <stdio.h>
#include <stdlib.h>

int main()
{

    //1 - Sul
    //2 - Norte
    //3 - Leste
    //4 - Oeste
    //5 ou 6 - Nordeste
    //7 ou 8 ou 9 - Sudeste

    int codigo;

    printf ("Digite o codigo de origem: ");
    scanf("%d", &codigo);

    switch (codigo)

    {case 1:
        printf("Procedencia Sul");
        break;
    case 2:
        printf("Procedencia Norte");
        break;
    case 3:
        printf("Procedencia Leste");
        break;
    case 4:
        printf("Procedencia Oeste");
        break;
    case 5:
    case 6:
        printf("Procedencia Nordeste");
        break;
    case 7:
    case 8:
    case 9:
        printf("Procedencia Sudeste");
        break;
    default:
        printf("Valor invalido");
        break;}
    }








