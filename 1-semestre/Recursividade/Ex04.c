//04
// Online C compiler to run C program online
#include <stdio.h>

int impar(int);

int main() {
    int n,resultado;
    scanf("%d",&n);
    resultado=impar(n);
    return 0;
}
int impar(int a){
    if(a==0){
        return 0;
    }
    else{
        if(a%2!=0){
            printf("%d\n",a);
        }
        impar(a-1);
    }
}