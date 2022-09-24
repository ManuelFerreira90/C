//19
//19
#include <stdio.h>

int soma_v(int * );

int main() {
    int i,r;
    int vf[5];
    printf("Digite os valores do vetor:\n");
    for(i=0;i<5;i++){
        scanf("%d",&vf[i]);
    }
    r=soma_v(&vf);
    printf("Soma dos valores do vetor: ");
    printf("%d\n",r);
    return 0;
}
int soma_v(int *vptr){
    int i,soma=0;
    for(i=0;i<5;i++){
        soma+=vptr[i];
    }
    return soma;
}