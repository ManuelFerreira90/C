#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int m1[3][3];
	int m2[3][3];
}tad_matriz;

void somar(tad_matriz *l){
	int matriz3[3][3];
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matriz3[i][j] = l->m1[i][j] + l->m2[i][j];
		}
	}
	
	printf("Matriz resultante.\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",matriz3[i][j]);
		}
		printf("\n");
 	}
}

void multiplicar(tad_matriz *l){
	int matriz3[3][3];
	int i,j,a,conti,contj,soma;
	
	for(a=0;a<3;a++){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				matriz3[a][i]+=l->m1[a][j]*l->m2[j][i];
			}
		}
	}
	printf("Matriz resultante.\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",matriz3[i][j]);
		}
		printf("\n");
 	}
}
