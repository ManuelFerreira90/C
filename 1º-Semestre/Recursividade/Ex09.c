//09
//09
// Online C compiler to run C program online
#include <stdio.h>

int resto(int,int);

int main() {
    int n1,n2,r;
    scanf("%d %d",&n1,&n2);
    r=resto(n1,n2);
    printf("%d",r);
    return 0;
}
int resto(int a,int b){
    int t;
    if(a<b){
        return a;
    }
    if(a==b){
        return 0;
    }
    if(b==0){
        return -1;
    }
    else{
        t=resto(a-b,b);
    }
    return t;
}