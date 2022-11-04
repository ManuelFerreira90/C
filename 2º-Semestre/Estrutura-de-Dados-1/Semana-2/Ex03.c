//03
#include <stdio.h>

typedef struct{
    int hr;
    int min;
}hem;

void converter(int *, int*);

//hem = hora e minutos
int main() {
    hem Hem;
    converter(&Hem.hr,&Hem.min);
    printf("valor digitado em Horas e minutos: %d:%d",Hem.hr,Hem.min);
    return 0;
}

void converter(int *hptr, int *mptr){
    int minutos;
    printf("Digite um valor para transformar em horas e minutos.\n");
    scanf("%d",&minutos);

    if(minutos>60){
        *hptr=minutos/60;
        *mptr=minutos%60;
    }
    else{
        *hptr=0;
        *mptr=minutos;
    }
}