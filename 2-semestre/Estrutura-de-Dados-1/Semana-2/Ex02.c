//02
#include <stdio.h>

void trocavalor(int *, int *, int *);

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    trocavalor(&a,&b,&c);
    
    printf("Novos valores\na: %d\nb: %d\nc: %d\n",a,b,c);
    
    return 0;
}

void trocavalor(int *aptr, int *bptr, int*cptr){
    int aux1,aux2;
    aux1=*bptr;
    *bptr=*aptr;
    aux2=*cptr;
    *cptr=aux1;
    *aptr=aux2;
}