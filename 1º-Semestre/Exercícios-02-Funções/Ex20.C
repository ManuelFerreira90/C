//20
#include <stdio.h>

void divi_3(int * );

int main() {
    int i;
    int vf[5];
    printf("Digite os valores do vetor:\n");
    for(i=0;i<5;i++){
        scanf("%d",&vf[i]);
    }
    divi_3(&vf);
    return 0;
}
void divi_3(int *vptr){
    int i;
    printf("Valores do vetor divisiveis por 3:\n");
    for(i=0;i<5;i++){
        if(vptr[i]%3==0){
            printf("%d ",vptr[i]);
        }
    }
    printf("\n");
}