//12
#include <stdio.h>
#include <stdlib.h>

int main(){
   int v[5],v1[5],i,j=4;
   for(i=0;i<5;i++){
    scanf("%d",&v[i]);
   }
   for(i=0;i<5;i++){
    v1[i]=v[j];
    j--;
    printf("%d ",v1[i]);
   }
   return 0;
}