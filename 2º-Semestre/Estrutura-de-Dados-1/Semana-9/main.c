#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	tad_matriz tad;
	int n,i,j;
	
	printf("Digite os elementos da matriz 1.\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&tad.m1[i][j]);
		}
	}
	
	printf("Digite os elementos da matriz 2.\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&tad.m2[i][j]);
		}
	}
	
	printf("Digite 1 para somar.\nDigite 2 para multiplicar.\n");
	scanf("%d",&n);
	
	if(n==1) somar(&tad);
	else multiplicar(&tad);
	
	return 0;
}
