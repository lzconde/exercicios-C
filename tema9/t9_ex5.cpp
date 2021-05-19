#include<stdio.h>
float VALOR;

float calculaPrestacao(int q)
{
    return VALOR/q;
}

int main()
{
    int i;
    printf("Entre com a valor do produto: ");
    scanf("%f", &VALOR);
    for ( i = 1; i <= 10; i++)
    {
        printf("\n Valor das prestacoes %dx: %8.2f",i, calculaPrestacao(i));    
    }
    
    
    return 0;
}
