#include<stdio.h>
float calculaPVenda(float c, float p)
{
    return c + (c * p /100);
}

int main()
{
    float PCUSTO, PERC;
    printf("Entre com o preco do Custo: ");
    scanf("%f", &PCUSTO);
    printf("Entre com o percentual de Venda: ");
    scanf("%f", &PERC);
    printf("\n Valor de Venda é: %f", calculaPVenda(PCUSTO, PERC));

    return 0;
}
