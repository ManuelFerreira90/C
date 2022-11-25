//15
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist(int,int,int,int,int,int);

int main(){
	int x1,x2,y1,y2,z1,z2;
	float resultado;
	printf("Digite as cordernadas da primeira localizacao: ");
	scanf("%d %d %d",&x1,&y1,&z1);
	printf("Digite as cordenadas da segunda localizacao: ");
 	scanf("%d %d %d",&x2,&y2,&z2);
	
    resultado = dist(x1,x2,y1,y2,z1,z2);

	printf("distancia entre as localizacoes: %2.f",resultado);

    return 0;
}
float dist(int x1,int x2,int y1,int y2,int z1,int z2){
	float result;
	
	result=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1));
	result=sqrt(result);
	
	return result;
}