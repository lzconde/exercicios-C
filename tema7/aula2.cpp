#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num, quad;

    printf("Digite um numero - 0 para sair\n");
    scanf ("%d", &num);

    while (num != 0 )
    {
        quad = num * num;

        printf("O quadrado de %d eh: %d\n", num, quad);
        
        printf("Digite um numero - 0 para sair\n");
        scanf ("%d", &num);


    }
    


    return 0;
}
