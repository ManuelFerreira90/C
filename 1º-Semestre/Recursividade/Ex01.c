//01
// Online C compiler to run C program online
#include <stdio.h>

void m(int,int);

int main() {
    int a,r;
    scanf("%d",&a);
    r=a;
    m(a,r);
    return 0;
}
void m(int x,int r){
    int t,i;
    if(x==1){
        for(i=0;i<r;i++){
            printf("* ");
        }
    }
    else{
        for(i=0;i<r;i++){
            printf("* ");
        }
        printf("\n");
        m(x-1,r);
    }
}