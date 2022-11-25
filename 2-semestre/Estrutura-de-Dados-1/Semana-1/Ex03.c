//03
#include <stdio.h>
#include <stdlib.h>


int main(){
    int matriz[3][3],m,n,i,j;
    printf("Digite um numero para iniciar o intervalor: ");
    scanf("%d",&m);
    printf("\nDigite um numero para fechar o intervalor: ");
    scanf("%d",&n);

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=m+rand()%n;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}