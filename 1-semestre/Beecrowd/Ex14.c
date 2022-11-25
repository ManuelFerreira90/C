#include <stdio.h>

int main() {
    int n,q,i,j,m,c;
    
    while(scanf("%d",&n)!=EOF && (scanf("%d",&q)!=EOF)){
        int vn[n],vp[q];
        for(i=0;i<n;i++){
            scanf("%d",&vn[i]);
        }
        for(i=0;i<q;i++){
            scanf("%d",&vp[i]);
        }
        for(i=0;i<n;i++){
            for(j=i;j<n-1;j++){
                if(vn[i]<vn[j+1]){
                    m=vn[i];
                    vn[i]=vn[j+1];
                    vn[j+1]=m;
                }
            }
        }
        for(i=0;i<q;i++){
            c=vp[i]-1;
            printf("%d\n",vn[c]);
        }
    }
    return 0;
}