//Sapiens
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int nf,ft,fp;
    scanf("%d %d %d",&nf,&ft,&fp);
    
    if(nf<40 || ft>=15 || fp>=7)
        printf("Reprovado\n");
    else if(nf>=40 && nf<60)
        printf("Prova final\n");
    else
        printf("Aprovado\n");
    return 0;
}