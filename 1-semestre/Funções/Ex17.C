//17
#include <stdio.h>
#include <stdlib.h>

int triangulo(int,int,int);

int main(){
	int x1,x2,x3;
	int resultado;
	printf("Digite os lado do triangulo: ");
	scanf("%d %d %d",&x1,&x2,&x3);
	
    resultado = triangulo(x1,x2,x3);

    return 0;
}
int triangulo(int x1,int x2,int x3){
	if(x1==x2 && x1==x3){
		printf("Triangulo Equilatero");
	}
	else if(x1==x2 || x1==x3 || x3==x2){
		printf("Triangulo Isosceles");
	}
	else{
	    printf("Triangulo Escaleno");
	}
	return 0;
}