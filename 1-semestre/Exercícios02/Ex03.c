//numeros espelhos
// Online C compiler to run C program online
#include <stdio.h>

int comparar_num(char *,char *); //função que indica se os números são espelhos

int main() {
    char num1[4],num2[4];
    int resultado;
    
    do{
        printf("Digite o primeiro numero e depois o segundo numero:\n");
        scanf("%s %s",&num1,&num2);
        
        if((num1[0]!='0') && (num2[0]!='0')){
            resultado=comparar_num(&num1,&num2);
            
            if(resultado==1){
                printf("espelho\n\n");
            }
            else{
                printf("nao espelho\n\n");
            }
        }

    }while((num1[0]!='0') && (num2[0]!='0'));
    
    return 0;
}

int comparar_num(char *numptr1,char *numptr2){
    int i,j,espelho=1,contador1=0,contador2=0;
    //contador irá indicar quando um numero é diferente do outro
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(numptr1[i]==numptr2[j]){
                contador1++;
            }
            if(numptr2[i]==numptr1[j]){
                contador2++;
            }
        }
        if(contador1==0){
            espelho=0;
            break;
        }
        contador1=0;
        if(contador2==0){
            espelho=0;
            break;
        }
        contador2=0;
    }
    
    //espelho = 0, números não são espelho
    //espelho = 1, números são espelho
    
    return espelho;
}