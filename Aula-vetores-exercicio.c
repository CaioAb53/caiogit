#include <stdio.h>
#define TAM 5
int main(){
    
    float notas[TAM];
    float M;
    int soma;

        printf("o insira 5 notas. ");
        for(int i=0; i<TAM; i++){
            printf("\ninsira um valor: ");
            scanf("%0.2f", &notas[i]);
        }
        printf("\nAs notas sao: ");
        for (int i=0; i < TAM; i++){
            printf("%0.2f",notas[i]);
            soma +=notas[i];
        }
           M=soma/TAM;
            printf("\nA media das notas :%0.2f", M);
        printf("\nfim de programa!");

return 0;
}