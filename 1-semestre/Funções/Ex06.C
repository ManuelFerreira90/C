//06
#include <stdio.h>
#include <stdlib.h>

int media(int,int,int);
int main(){
    int n1,n2,n3,resultado;
    scanf("%d %d %d",&n1,&n2,&n3);

    resultado = media(n1,n2,n3);

    printf("Medida das notas = %d",resultado);

    return 0;
}
int media(int a, int b, int c){
    int result;
    result=(a+b+c)/3;
    return result;
}