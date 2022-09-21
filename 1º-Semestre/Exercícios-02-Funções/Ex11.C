//11
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int area(int,int,int);

int main(){
    float resultado;
	int b,c,d;
    scanf("%d %d %d",&b,&c,&d);
    
    resultado = area(b,c,d);
    
	printf("area do triangulo = %2.f",resultado);

    return 0;
}
int area(int a,int b, int c){
    float area;
	int p;
    p = (a+b+c)/2;
    area = ((p*(p-a))*(p-b)*(p-c));
    area = sqrt(area);
    return area;
}