//10
#include <stdio.h>
#include <stdlib.h>

int converte(int,int,int);

int main(){
    int resultado;
	int b,c,d;
    scanf("%d %d %d",&b,&c,&d);
    
    resultado = converte(b,c,d);

    return 0;
}
int converte(int a,int b, int c){
    if (a>c && b>c)
		printf("%d",c);
	else if (b>a && c>a)
		printf("%d",a);
	else if (c>a && a>b)
		printf("%d",b);
    return 0;
}