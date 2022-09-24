//03
// Online C compiler to run C program online
#include <stdio.h>

void tabuada(int,int);

int main() {
    int n,b,resultado;
    scanf("%d",&n);
    b=n;
    tabuada(n,b);
    return 0;
}
void tabuada(int a,int b){
    int t;
    if(a>0){
        if(a==1){
            t=a*b;
            printf("%d*%d=%d\n",a,b,t);
        }
        else{
            t=a*b;
            tabuada(a-1,b);
            printf("%d*%d=%d\n",a,b,t);
        }
    } 
}