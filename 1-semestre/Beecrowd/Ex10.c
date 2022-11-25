//1073
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,result=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2==0){
            result=i*i;
            printf("%d^2 = %d\n",i,result);
        }
    }
    return 0;
}