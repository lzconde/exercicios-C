#include<stdio.h>
int numero;
int calculaQuadrado()
{
    return numero * numero;
}

int main()
{
    printf("\nEntre com um numero inteiro nao-nulo: ");
    scanf("%d", &numero);
    printf("O quadrado do numero %d e %d\n", numero, calculaQuadrado());
    return 0;
}
