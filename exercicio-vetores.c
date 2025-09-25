74
#include <stdio.h>
#define TAM 5
int main(){
     int numero[TAM];

    printf("digite 5 numeros");
     for(int i=0;i=TAM;i++){
        printf("\ndigite um numero:");
        scanf("%d",&numero[i]);
     }
     for(int i; i<=TAM;i++){
        if(numero[0]<numero[1] && numero[0]<numero[2]&& numero[0]<numero[3] && numero[0]<numero[4]){
            printf("esse é o menor numero %d ", numero[0]);
        }
     }

return 0;    
}