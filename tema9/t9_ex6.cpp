#include<stdio.h>


float calculaMedia(float a, float b, float c)
{
    return (a+b+c)/3;
}

int main()
{
    float N1, N2, N3;
    printf("\nEntre com a Nota 1:  ");
    scanf("%f", &N1);
    printf("\nEntre com a Nota 2:  ");
    scanf("%f", &N2);
    printf("\nEntre com a Nota 3:  ");
    scanf("%f", &N3);
    printf("A media 1 e: %4.1f \n", calculaMedia(N1, N2, N3));
    printf("A media 2 e: %4.1f \n", calculaMedia(N1, N2, 10));
    printf("A media 3 e: %4.1f \n", calculaMedia(N1, N2, N2));
    return 0;
}
