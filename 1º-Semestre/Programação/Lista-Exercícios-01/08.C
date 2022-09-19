//08
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,soma=0;
    
    while (x!=-1){
        scanf("%d",&x);
        if (x!=-1)
            soma=soma+x;

    }
    
    printf("%d",soma);
	return 0;
}