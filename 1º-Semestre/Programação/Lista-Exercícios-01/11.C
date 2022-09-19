//11
#include <stdio.h>
#include <stdlib.h>

int main(){
   int v[10],v1[10],i;
   for(i=0;i<10;i++){
      scanf("%d",&v[i]);
      if (v[i]>=10){
        v1[i]=v[i];
      }
      else{
        v1[i]=1;
      }

   }
   for(i=0;i<10;i++){
    printf("%d ",v[i]);
   }
   printf("\n");
   for(i=0;i<10;i++){
    printf("%d ",v1[i]);
   }
	return 0;
}