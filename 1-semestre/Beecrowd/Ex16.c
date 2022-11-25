//2896
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    int t,i,n,k,total;
    scanf("%d",&t);
    
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        total=(n/k)+(n%k);
        printf("%d\n",total);
    }
    
    return 0;
}