//21
#include <stdio.h>
#include <math.h>

int soma_quadrado(int * );

int main() {
    int i,r;
    int vf[5];
    printf("Digite os valores do vetor:\n");
    for(i=0;i<5;i++){
        scanf("%d",&vf[i]);
    }
    r=soma_quadrado(&vf);
    printf("Soma do quadrado dos numeros do vetor:\n");
    printf("%d",r);
    return 0;
}
int soma_quadrado(int *vptr){
    int i,soma=0;
    for(i=0;i<5;i++){
        soma+=pow(vptr[i],2);
    }
    return soma;
}