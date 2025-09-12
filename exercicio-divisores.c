#include <stdio.h>
int main(){
    int n;
    

        printf("\ndigite um numero: ");
        scanf("%d", &n);
    printf("os divisores sao:\n ");
    for (int c = n; c>0 ; c=c-1){
        if (n % c == 0){
            printf("\n%d", n / c);
        }  
    }       
return 0;    
}