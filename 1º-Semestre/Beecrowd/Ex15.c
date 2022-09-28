//2540
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,t,v;
    float n;
    
    while(scanf("%f",&n)!=EOF){
        t=0;
        for(i=0;i<n;i++){
            scanf("%d",&v);
            if(v==1){
                t++;
            }
        }
        n=(n/3.0)*2.0;
        if(t>=n){
            printf("impeachment\n");
        }
        else{
            printf("acusacao arquivada\n");
        }
    }
    return 0;
}