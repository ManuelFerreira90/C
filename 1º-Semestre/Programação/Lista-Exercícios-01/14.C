//14
#include <stdio.h>
#include <stdlib.h>

int main(){
   int m[2][3],v[2],i,j,a,b;
   for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        scanf("%d",&m[i][j]);
    }
   }
   for(a=0;a<2;a++){
      for(b=0;b<3;b++){
        v[a]+=m[a][b];
      }
      printf("%d ",v[a]);
   }
   return 0;
}