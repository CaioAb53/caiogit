#include <stdio.h>
#define TAM 3
int main(){
    
    int valores[TAM];
    int m1=0;
    int m2=9999999;
        printf("o sistema vai pedir 10 valores. ");
        for(int i=0; i<TAM; i++){
            printf("\ninsira um valor: ");
            scanf("%d", &valores[i]);
        }
        printf("\nOs valores armazenados sao: ");
        for (int i=0; i < TAM; i++){
            printf("%d",valores[i]);

         if (valores[i] > m1){
            m1 = valores[i];
            }
            
             if(valores[i] < m2){
             m2 = valores[i];
         }
        }
        printf("\nO maior numero e: %d", m1);
        printf("\nO menor numero e: %d", m2);
       




            
        printf("\nfim de programa!");

return 0;
}