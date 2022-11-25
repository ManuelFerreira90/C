#include <stdio.h>
#include <stdlib.h>

int main(){
    //duas senha de 4 dígitos
    int s1,s2,s3,s4;
    int n1,n2,n3,n4;
    int erro=0,aberto;
    int senha1[4]={2,5,0,7};
    int senha2[4]={3,6,4,1};

    //conferir cada dígito da senha1
    while(!(scanf("%d",&s1))){
        if(s1!=senha1[0]){
            erro=1;
        }
    }

    while(!(scanf("%d",&s2))){
        if(s2!=senha1[1]){
            erro=1;
        }
    }
    
    while(!(scanf("%d",&s3))){
        if(s3!=senha1[2]){
            erro=1;
        }
    }
    
    while(!(scanf("%d",&s4))){
        if(s4!=senha1[3]){
            erro=1;
        }
    }

    //conferindo dígitos senha 2
     while(!(scanf("%d",&n1))){
        if(n1!=senha2[0]){
            erro=1;
        }
    }

     while(!(scanf("%d",&n2))){
        if(n2!=senha2[1]){
            erro=1;
        }
    }

     while(!(scanf("%d",&n3))){
        if(n3!=senha2[2]){
            erro=1;
        }
    }

     while(!(scanf("%d",&n4))){
        if(n4!=senha2[3]){
            erro=1;
        }
    }

    //erro=1 fechado, erro=0 aberto
    if(erro==1)
        aberto=0;
    else
        aberto=1;
    
    printf("\n%d",erro);
    printf("\n%d\n",aberto);

    return 0;
}