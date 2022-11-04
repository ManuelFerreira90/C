//01
#include <stdio.h>

void zeravar(int *, int *);

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    
    zeravar(&a,&b);
    
    printf("%d %d",a,b);

    return 0;
}

void zeravar(int *aptr, int *bptr){
    *aptr=0;
    *bptr=0;
    return;
}