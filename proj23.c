#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
/* A biblioteca "ctype.h" contem funções e macros para a manipulação de caracteres.
Possui funções para verificar se um caractere é maiúsculo, minúsculo, numérico ou espaço em branco etc */

int main()
{
   setlocale(LC_ALL, "");
   //Leitura
   float altura;
   //Interno
   char continuar;
   //Escrita
   int quantidadeInferior=0;
   int quantidadeSuperior=0;

   do
   {
       printf("\nInforme a altura do atleta: ");
       scanf("%f", &altura);
       if (altura>= 1.9)
       {
           quantidadeSuperior++;
       }
       if (altura < 1.9)
       {
           quantidadeInferior++;
       }
       printf("\nDeseja inserir outra altura? (s/n): ");
       fflush(stdin); //limpa o buffer do teclado antes de ler o caractere
       scanf(" %c", &continuar);
       continuar = toupper(continuar); //converte caractere minúsculo em maiúsculo
   }
   while(continuar == 'S');

   printf("\nQuantidade de atletas com altura maior ou igual que 1,90m: ");
   printf("%d", quantidadeSuperior);
   printf("\nQuantidade de atletas com altura menor que 1,90m: ");
   printf("%d", quantidadeInferior);
}



