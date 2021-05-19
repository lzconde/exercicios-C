#include<stdio.h>

float calculaReal(float v, float c)
{
    return v * c;
}

int main()
{
    float VDOLAR, CDOLAR, VREAL;
    printf("Entre com a quantia de Dolares: ");
    scanf("%f", &VDOLAR);
    printf("Entre com a cotacao do  Dolar: ");
    scanf("%f", &CDOLAR);
    printf("\n Valor em Reais: %8.2f", calculaReal(VDOLAR, CDOLAR));
    return 0;
}
