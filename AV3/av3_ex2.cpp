#include <stdio.h>

int num;

int dobro(int a){
    return a * 2;
}

int metade(int a){
    return a / 2;
}

int quadrado(int a){
    return a * a;
}

int tercaParte(int a){
    return a / 3;
}

int main()
{
    printf("\nDigite um numero: "); scanf("%d", &num);

    printf("\nDobro do numero: %d", dobro(num));
    printf("\nMetade do numero: %d", metade(num));
    printf("\nQuadrado do numero: %d", quadrado(num));
    printf("\nTerca Parte do numero: %d", tercaParte(num));
    return 0;
}
