/* Considere a seguinte situação: Um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7.000.000 de habitantes 
e uma taxa de natalidade de 2% ao ano. Faça um programa em C que calcule e imprima o tempo necessário para que a população do país A ultrapasse a população 
do país B. */ 

#include<stdio.h>

main()
{

    float  cresA = 0.03, cresB = 0.02;
    int paisA = 5000000, paisB = 7000000, anos, difPop;


    while (paisA < paisB)
    {

        
        paisA = paisA + (paisA * cresA);
        paisB = paisB + (paisB * cresB);
        

        anos = anos + 1;
    } 

    difPop = paisA - paisB;

    printf("Vai demorar exatamente %d anos para o Pais A passar o Pais B em %d Habitantes.", anos, difPop);
    
}
