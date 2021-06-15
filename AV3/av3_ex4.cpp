#include <stdio.h>


float idadeMedia , percentH ,percentM;
char Sexo;
int Idade = 0,TotalIdade = 0, PP, quantH = 0, quantM = 0, quantMus = 0, quantCor = 0, quantFot = 0, quantPessoas = 0;

 int main()
 {
     
     do
     {
     	 Idade = 0; PP = 0;

         printf("Sexo: [M/F] "); 
         scanf(" %s", &Sexo );
         printf("Pratica Preferida: "); 
         scanf("%d", &PP );

            if (Sexo == 'M' || Sexo == 'm')
            {
                quantH = quantH + 1;
            } else if (Sexo == 'F' || Sexo == 'f'){
                quantM = quantM + 1;
            };

            if (PP == 1)
            {
                quantMus = quantMus + 1;
            } else if (PP == 2){
                quantCor = quantCor + 1;
            } else if (PP == 3){
                quantFot = quantFot + 1;
            }

            quantPessoas++;

            printf("Idade: "); scanf("%d", &Idade );
            TotalIdade = TotalIdade + Idade;
           
            
            
     } while (Idade > 0);

            
            
    idadeMedia = TotalIdade / (quantPessoas - 1);
    percentH = (quantH * 100)/quantPessoas;
    percentM = (quantM * 100)/quantPessoas;

    
     printf("\nA Idade media dos alunos eh: %2.0f anos", idadeMedia);
     printf("\nTem na turma %d Homens totalizando %.1f por cento", quantH, percentH);
     printf("\nTem na turma %d Mulheres totalizando %.1f por cento", quantM, percentM);

     if (quantMus > quantCor && quantMus > quantFot)
     {
        printf("\nA atividade de Maior Pratica eh: Musculacao"); 
     }else if (quantCor > quantFot){
         printf("\nA atividade de Maior Pratica eh: Corrida"); 
     }else {
         printf("\nA atividade de Maior Pratica eh: Foto no Espelho"); 
     }
     
     return 0;
 }
 