#include <stdio.h>

int main () {
    int i;
    float C,F;

    for(i=1; i<=5; i++)
    {
        printf("\n Digite o valor em Celsius: ");
        scanf("%f", &C);
        F=(9*C+160)/5;
        printf("\n Fahrenheit: %f", F);
    }
    
}