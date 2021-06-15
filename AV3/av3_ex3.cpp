#include <stdio.h>

int i, numMax;

int main()
{
    printf("Digite o numero maximo: "); scanf("%d", &numMax);
    for ( i = numMax; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            printf("\n%d", i);
        }
        
    }
    
    return 0;
}
