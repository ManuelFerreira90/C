//13
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cpf(int,int,int,int,int,int,int,int,int);

int main(){
    int i,resultado;
	  int n1,n2,n3,n4,n5,n6,n7,n8,n9;

    scanf("%d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
	
    
    resultado = cpf(n1,n2,n3,n4,n5,n6,n7,n8,n9);

    return 0;
}
int cpf(int a, int b,int c, int d,int e, int f,int g, int h,int i){
	int soma=0,m,n;
	soma=(a*10)+(b*9)+(c*8)+(d*7)+(e*6)+(f*5)+(g*4)+(h*3)+(i*2);
	
	if(soma%11<2)
		m=0;
	else
	    m=11-(soma%11);
	
	soma=(a*11)+(b*10)+(c*9)+(d*8)+(e*7)+(f*6)+(g*5)+(h*4)+(i*3)+(m*2);
	
	if(soma%11<2)
		n=0;
	else
	    n=11-(soma%11);
	    
	printf("CPF = %d %d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,m,n);
	return 0;
}