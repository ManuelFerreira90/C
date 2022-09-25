//07
// Online C compiler to run C program online
#include <stdio.h>

int fib(int);

int main() {
    int n1,r,i;
    scanf("%d",&n1);
    for(i=1;i<n1;i++){
        r=fib(i);
        printf("%d ",r);
    }
    return 0;
}
int fib(int a){
    int t;
    if(a==1 || a==2){
        return 1;
    }
    else if(a>2){
        t=fib(a-1)+fib(a-2);
    }
    return t;
}