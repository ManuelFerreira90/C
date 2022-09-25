//08
//08
// Online C compiler to run C program online
#include <stdio.h>

int quociente(int,int);

int main() {
    int n1,n2,r;
    scanf("%d %d",&n1,&n2);
    r=quociente(n1,n2);
    printf("%d",r);
    return 0;
}
int quociente(int a,int b){
    int t;
    if(a<b)
        return 0;
    if(a==b)
        return 1;
    if(b==0)
        return -1;
    else
        t=1+quociente(a-b,b);
    return t;
}