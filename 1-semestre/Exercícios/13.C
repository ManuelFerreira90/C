//13
#include <stdio.h>
#include <stdlib.h>

int main(){
   int m[3][3],i,j;
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&m[i][j]);
    }
   }
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        if(i==j)
        printf("%d ",m[i][j]);
      }

   }
   return 0;
}