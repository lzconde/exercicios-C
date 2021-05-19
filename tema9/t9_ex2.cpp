#include <stdio.h>

int numero;

void entrada ()
{
    printf("\n Entre com um Numero inteiro nao-nulo: ");
    scanf("%d", &numero);

}

int main()
{
    int quadrado;
    entrada();
    quadrado = numero * numero;
    entrada();
    printf ("O Quadrado do numero %d é %d\n ", numero, quadrado);
    return 0;
}
