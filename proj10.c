#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Crie um programa que receba quatro valores representando as coordenadas de dois pontos A e B. Depois calcule a distância entre eles.

    float xa;// coordenada do ponto a na abcissa
    float xb;// coordenada do ponto b na abcissa
    float ya;// coordenada do ponto a na ordenada
    float yb;// coordenada do ponto b na ordenada
    float pot1;
    float pot2;
    float raiz;
    float dab;// distancia entre os pontos a e b no plano cartesiano

    printf("Digite a coordenada Xa \n");
    scanf("%f", &xa);
    printf("Digite a coordenada Xb \n");
    scanf("%f", &xb);
    printf("Digite a coordenada Ya \n");
    scanf("%f", &ya);
    printf("Digite a coordenada Yb \n");
    scanf("%f", &yb);

    //Calculo da distancia entre dois pontos no plano cartesiano

    pot1 = pow (xb - xa, 2);
    pot2 = pow (yb - ya, 2);
    raiz = sqrt (pot1 + pot2);
    dab = raiz;

    printf("Distancia do ponto A ao ponto B: %.1f", dab);


    return 0;
}
