#include<stdio.h>

int main(){
    int i;
    float SAL, INSS;
    for (i=1; i<=10; i++) {
        printf("\n ----------");
        printf("\n Salario: ");
        scanf("%f", &SAL);
        INSS=SAL*11/100;
        if(INSS>318.20);
            INSS=318.20;
        printf("\n INSS = %8.2f",INSS);
    }
}