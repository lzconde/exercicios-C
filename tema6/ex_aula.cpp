#include<stdio.h>

int main()
{
    int cont, neg=0, a;
    for ( cont = 1; cont <= 10; cont++)
    {
        printf("Informe um valor: ");
        scanf("%d", &a);

        if (a < 0)
        {
            neg = neg + 1;
        }

        
        
    }

    printf("\n Quantidade de negativos: %d", neg);
    
    return 0;
} 
