#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Imprima a frase "Deus o Abençoe!" e faça o devido tratamento para que a mensagem apareça corretamente no console;
int main()
{
    setlocale(LC_ALL, "pt_BR");

    printf("Deus o abençoe!\n");
    return 0;
}