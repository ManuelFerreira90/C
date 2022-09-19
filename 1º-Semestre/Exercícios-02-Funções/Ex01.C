//01
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funcao(int,int,int);

int main(){
    int x,d,e,f,resultado;
    scanf("%d %d %d",&d,&e,&f);
    
    resultado = funcao(d,e,f);
    
    return 0;
}

int funcao(int a, int b, int c){
    int delta,raiz1,raiz2;
    delta = ((b*b)-(4*a*c));
    raiz1 = (((b*(-1))-sqrt(delta))/(2*a));
    raiz2 = (((b*(-1))+sqrt(delta))/(2*a));
    printf("Delta = %d\n",delta);
    printf("Raiz 1 = %d\n",raiz1);
    printf("Raiz 2 = %d\n",raiz2);
    return 0;
}