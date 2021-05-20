#include <stdio.h>
 
int main(){
  int n,i,prod;
 
  printf("Digite o valor de n: ");
  scanf("%d",&n);
  i = 1;
  while(1){
    prod = i*(i+1)*(i+2);
    if(prod >= n)
      break;
    i = i + 1;
  }
  if(prod == n)
    printf("Triangular: %d = %d * %d * %d\n", n,i,i+1,i+2);
  else
    printf("Nao e  triangular\n");
 
  return 0;
}
