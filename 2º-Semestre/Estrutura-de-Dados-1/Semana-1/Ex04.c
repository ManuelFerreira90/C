//04
#include <stdio.h>
#include <stdlib.h>

void soma(int,int);
void subtrair(int,int);
void multiplicacao(int,int);
void divisao(int,int);

int main(){
    int n1,n2,op;
    printf("Digite dois numeros: ");
    scanf("%d %d",&n1,&n2);
    printf("\nDigite a operacao que deseja fazer: \n1-soma\n2-subtrair\n3-multiplicacao\n4-divisao\n");
    printf("\n");
    scanf("%d",&op);
    if(op==1){
        soma(n1,n2);
    }
    else if(op==2){
        subtrair(n1,n2);
    }
    else if(op==3){
        multiplicacao(n1,n2);
    }
    else if(op==4){
        divisao(n1,n2);
    }
    return 0;
}

void soma(int a,int b){
    int resultado;
    resultado=a+b;
    printf("\n%d\n",resultado);
}
void subtrair(int a,int b){
    int resultado;
    resultado=a-b;
    printf("\n%d\n",resultado);
}
void multiplicacao(int a,int b){
    int resultado;
    resultado=a*b;
    printf("\n%d\n",resultado);
}
void divisao(int a,int b){
    int resultado;
    if(b!=0){
        resultado=a/b;
        printf("\n%d\n",resultado);
    }
    else
        printf("\nErro, divisao por 0\n");
}