#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{setlocale(LC_ALL, "");

int multiplo[100];
int i;

for(i=0; i<100; i++)
{
    multiplo[i] = i * 7;
    printf("%d ", multiplo[i]);
}

    return 0;
}
