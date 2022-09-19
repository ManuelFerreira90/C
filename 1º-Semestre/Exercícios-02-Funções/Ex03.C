//03
#include <stdio.h>
#include <stdlib.h>

int primo(int);

int main(){
	int d,resultado;
	scanf("%d",&d);
	
	resultado = primo(d);
	
	printf("0 para primo\n1 para nao primo\n%d",resultado);
	
	return 0;
}

int primo(int b){
	int i,c=0;
	for(i=1;i<=b;i++){
		if (b%i==0){
			c++;
		}
	}
	if (c==2)
		return 0;
	else
		return 1;
}