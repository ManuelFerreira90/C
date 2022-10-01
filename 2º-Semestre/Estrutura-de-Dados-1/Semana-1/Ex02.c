//02
#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[5],i,j,media=0,aux;

    for(i=0;i<5;i++){
        printf("Digite a quantidade de carros que passsaram este dia: \n");
        scanf("%d",&v[i]);
        media+=v[i];
    }
    media=media/5;
    for(i=0;i<5;i++){
        for(j=i;j<4;j++){
            if(v[i]>v[j+1]){
                aux=v[i];
                v[i]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    printf("Media de carros que passou no pedagio esse mes: %d\n",media);
    printf("\n");
    printf("Ordem crescente de quantos carros passaram em cada dia: \n");
    for(i=0;i<5;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;
}