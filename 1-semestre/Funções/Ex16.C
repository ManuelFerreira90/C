//16
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int calc(int,int,char);

int main(){
	int x1,x2;
	int resultado;
	char op;
	printf("Digite a operacao: ");
	op = getchar();
	printf("Digite dois numeros: ");
	scanf("%d %d",&x1,&x2);
	
	
    resultado = calc(x1,x2,op);

	printf("Resultado: %d",resultado);

    return 0;
}
int calc(int x1,int x2,char p){
	int result;
	if(p=='/')
		result=x1/x2;
	else if(p=='-')
		result=x1-x2;
	else if(p=='+')
		result=x1+x2;
	else if(p=='*')
		result=x1*x2;
	
	return result;
}