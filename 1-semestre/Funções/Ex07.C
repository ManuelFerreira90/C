//07
#include <stdio.h>
#include <stdlib.h>

int media(int,int,int);

int main(){
    int i,j,resultado,n1,n2,n3;
    
    for(i=0;i<2;i++){
        scanf("%d %d %d",&n1,&n2,&n3);
        resultado = media(n1,n2,n3);
    }

    return 0;
}
int media(int a,int b,int c){
    int result;
    result=(a+b+c)/3;
	if(result>=60){
		printf("aluno aprovado\n");
	}
	else{
		printf("aluno reprovado\n");
	}
    return 0;
}