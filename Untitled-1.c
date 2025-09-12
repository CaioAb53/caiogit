#include <stdio.h>
int main(){
 int n;
 int p = 11;


  do{
    printf(" jogo de adivinhacao ");
    printf("\ndigite um numero: ");
    scanf("%d", &n);
    if (n != p){
        printf("\n%d", n);
        printf("\nnumero digitado esta incorreto!!");
    } else {
        printf("\n%d", n);
        printf(" o numero esta correto!! ");
        
    }
  } while(n != p);
  
  return 0;  
}