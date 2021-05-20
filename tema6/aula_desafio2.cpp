/*
     Faça um programa que leia o sexo e a idade de 10 pessoas e ao final informe: 
 - Quantidade e porcentagem de homens; 
 - Quantidade e porcentagem de mulheres; 
 - Média das idades; 
 - Maior idade do grupo; 
 - Menor idade do grupo.

 */

#include<stdio.h>




int main()
{
    float mediaIdade;
    int qH = 0, qM = 0, maiorIdade = 0 , menorIdade = 100, idade, somaIdade = 0, i;
    char sexo;

    for (i = 1; i <= 10; i++)
    {
        
        printf("Sexo? [H/M]\n");
        scanf("%s", &sexo);

        printf("\nDigite a sua idade: ");
        scanf("%d", &idade);

        if (sexo == 'H')
        {
            qH = qH + 1;
            
        } 
        
        if (sexo == 'M') {

            qM = qM + 1;
            
        }

        mediaIdade = somaIdade / 10;
        somaIdade = somaIdade + idade;

        mediaIdade = somaIdade / 10;

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }

        if (idade < menorIdade)
        {
            menorIdade = idade;
        }
        
    }
    

    printf("\nQuantidade de Homens: %d ", qH);
    printf("\nQuantidade de Mulheres: %d ", qM);
    printf("\nA media das idades eh: %2.1f", mediaIdade);
    printf("\nA maior idade do grupo eh: %d", maiorIdade);
    printf("\nA menor idade do grupo eh: %d", menorIdade);
    
    
    
    return 0;
}
