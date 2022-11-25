#include <stdio.h>

int main() {
    int n,i,j,faltando,c=0;
    scanf("%d",&n);
    int v[n-1],v1[n];
    
    for(i=0;i<n;i++){
        if(i<n-1){
            scanf("%d",&v[i]);
        }
        v1[i]=i+1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(v1[i]==v[j]){
                c++;
            }
        }
        if(c==0){
            faltando=v1[i];
        }
        c=0;
    }
    printf("%d\n",faltando);
    return 0;
}