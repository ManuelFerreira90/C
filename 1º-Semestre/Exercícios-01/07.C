//07
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=1,b=4,i,n;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("%d,%d,%d,",a,b,b);
        a++;
        b++;
    }

	return 0;
}