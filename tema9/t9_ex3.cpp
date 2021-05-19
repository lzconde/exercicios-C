#include<stdio.h>
float VALOR;
float calculaDesconto()
{
    return VALOR*9/100;
}

float calculaNovo()
{
    return VALOR - calculaDesconto();
}

int main()
{
    printf("\n Entre com o valor do Produto: ");
    scanf("%f", &VALOR);
    printf("Desconto              = %6.2f \n", calculaDesconto());
    printf("Valor com Desconto              = %6.2f \n", calculaNovo());
    return 0;
}
