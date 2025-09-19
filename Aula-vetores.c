#include <stdio.h>
#define TAM 8
int main(){
    
    int valores[TAM];
    int M;
    int T;
        printf("o sistema vai pedir valores. ");
        for(int i=0; i<TAM; i++){
            printf("\ninsira um valor: ");
            scanf("%d", &valores[i]);
        }
        printf("\nOs valores armazenados sao: ");
        for (int i=0; i < TAM; i++){
            printf("%d",valores[i]);
        }
                printf("\nOs valores armazenados ao contrario sao: ");
    for (int i = TAM -1; i >= -1; i--){
            printf("%d",valores[i]);
        }
        M= sizeof(valores);
        T=sizeof(valores)/sizeof(valores[0]);
        printf("\n%d tamanho do espaco em memoria em bytes", M);
        printf("\n%d numero de elementos", T);    
        printf("\nfim de programa!");

return 0;
}