//05
// Online C compiler to run C program online
#include <stdio.h>

void mdc(int,int);

int main() {
    int n,b,resultado;
    scanf("%d %d",&n,&b);
    mdc(n,b);
    return 0;
}
void mdc(int a,int b){
    int t;
    if(a==b){
        printf("%d",a);
    }
    else{
        if(a>b){
            mdc(a-b,b);
        }
        else{
            mdc(b-a,a);
        }
    }   
}