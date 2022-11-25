//02
#include <stdio.h>
#include <stdlib.h>

int funcao(int);

int main(){
	int a,resultado;
	scanf("%d",&a);
	
	resultado = funcao(a);
	
	printf("0 para par\n1 para impar \n%d\n",resultado);
	
	return 0;
}

int funcao(int b){
	int resultado;
	
	if (b%2==0)
		return 0;
	else
		return 1;
}