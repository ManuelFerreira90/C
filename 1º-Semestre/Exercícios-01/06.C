//06
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=37,b=38,i=1,soma=0;
	while (a!=1){
        soma=soma+((a*b)/i);
        i++;
        a--;
        b--;
	}
    printf("%d",soma);

	return 0;
}