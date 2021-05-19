#include<stdio.h>
int main(){
    int num, i;
    char Resp;
    Resp='S';
    while(Resp =='S'){ 
        printf("\n Entre com o numero: ");
        scanf("%d", &num);
        printf("\n ***TABUADA DO NUMERO %d ***", num);
    
    for (i=1; i<=10; i++) {
        printf("\n %d x %d = %d", num,i,num*i);
        }

        printf("\n Continuar [S/N]?");
        scanf("%s", &Resp);
        
    
    }
}