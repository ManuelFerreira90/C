//10
#include <stdio.h>
#include <stdlib.h>

int main(){
   int n;
   scanf("%d",&n);
   int v[n],soma=0,i;
   for(i=0;i<n;i++){
    scanf("%d",&v[i]);
    if(i%2==0)
        soma+=v[i];
   }
   printf("%d",soma);


	return 0;
}
