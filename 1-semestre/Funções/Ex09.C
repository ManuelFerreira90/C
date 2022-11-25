//09
#include <stdio.h>
#include <stdlib.h>

int converte(int);

int main(){
    int resultado;
	int b;
    scanf("%d",&b);
    
    resultado = converte(b);

    return 0;
}
int converte(int a){
    if(a>0)
    	printf("Positivo");
    else if (a==0)
        printf("Numero nulo");
    else if (a<0)
    	printf("Negativo");
    return 0;
}