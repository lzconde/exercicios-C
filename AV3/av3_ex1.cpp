#include <stdio.h>

float salarioBruto, salarioLiquido, salarioExtra, descontoSalario;
int horaTrabalhada, horasMensais = 176, horasExtras;

int main()
{

    do 
    {
        printf("\n Digite a quantidade de Horas Trabalhadas: "); scanf("%d", &horaTrabalhada);

        salarioExtra = 0; horasExtras = 0;

        if (horaTrabalhada > horasMensais)
        {
            horasExtras = horaTrabalhada - horasMensais;
            salarioExtra = horasExtras * 15;
            salarioBruto = (horaTrabalhada * 10) + salarioExtra;
        }else{
            salarioBruto = horaTrabalhada * 10;
        }

        descontoSalario = salarioBruto * 0.1;
        salarioLiquido = salarioBruto - descontoSalario;

        printf("\nHoras Extras: %d Horas", horasExtras);
        printf("\nSalario Extra: %.2f", salarioExtra);
        printf("\nSalario Bruto: %.2f", salarioBruto);
        printf("\nDesconto: %.2f", descontoSalario);
        printf("\nSalario Liquido: %.2f", salarioLiquido);
        
        
    } while (horaTrabalhada != 0 );
        
    
    
    
    
    return 0;
}
