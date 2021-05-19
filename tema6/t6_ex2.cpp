#include <stdio.h>

int main (){
    int i, AUX, A, B;

    for  (i = 1; i <= 5; i++)
    {
        printf("\n --------------");
        printf("\n Digite o Primeiro Numero: ");
        scanf("%d", &A);
        printf("\n Digite o Segundo Numero: ");
        scanf("%d", &B);

        AUX = B;
        B = A;
        A = AUX;


        printf("\n Primeiro Numero: %d", A);
        printf("\n Segundo Numero: %d ", B);



    


    }
    

}