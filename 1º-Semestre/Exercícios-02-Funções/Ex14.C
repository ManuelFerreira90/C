//14
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int horas(int,int,int);

int main(){
	int h,m,s,resultado;

 	scanf("%d %d %d",&h,&m,&s);
	
    resultado = horas(h,m,s);

	printf("Soma do horario em segundo: %d",resultado);

    return 0;
}
int horas(int a,int b,int c){
	int soma;
	
	soma=(a*3600)+(b*60)+c;
	
	return soma;
}