//18
// Online C compiler to run C program online
#include <stdio.h>

void orde(int * );

int main() {
    int i;
    int vf[5];
    printf("Digite os valores do vetor:\n");
    for(i=0;i<5;i++){
        scanf("%d",&vf[i]);
    }
    orde(&vf);
    printf("Vetor ordenado:\n");
    for(i=0;i<5;i++){
        printf("%d ",vf[i]);
    }
    return 0;
}
void orde(int *vptr){
    int i,j,m;
    for(i=0;i<5;i++){
        for(j=i;j<4;j++){
            if(vptr[i]>vptr[j+1]){
                m=vptr[i];
                vptr[i]=vptr[j+1];
                vptr[j+1]=m;        
            }
        }
    }
}