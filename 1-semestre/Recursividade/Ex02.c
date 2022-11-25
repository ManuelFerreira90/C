//02
// Online C compiler to run C program online
#include <stdio.h>

int mult(int,int);

int main() {
    int n1,n2,resultado;
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        resultado=mult(n2,n1);
    }
    else{
        resultado=mult(n1,n2);
    }
    return 0;
}
int mult(int a,int b){
    if(b==a){
        printf("%d\n",b);
    }
    else{
        if(b%5==0)
            printf("%d\n",b);
        mult(a,b-1);
    }
}