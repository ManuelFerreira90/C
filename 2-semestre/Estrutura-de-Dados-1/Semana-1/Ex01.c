//01
#include <stdio.h>
#include <stdlib.h>

void diames(int);

int main(){
    int n;
    scanf("%d",&n);
    diames(n);

    return 0;
}

void diames(int n){
    int dia,aux;
    float mesn;
    char mes[20];
    aux=n%30;
    mesn=n/30.0;
    if(aux==0){
        aux=30;
    }
    if(mesn<=1.0){
        printf("%d de Janeiro",aux);
    }
    else if(mesn<=2.0 && mesn>1.0){
        printf("%d de Fevereiro",aux);
    }
    else if(mesn<=3.0 && mesn>2.0){
        printf("%d de Marco",aux);
    }
    else if(mesn<=4.0 && mesn>3.0){
        printf("%d de Abril",aux);
    }
    else if(mesn<=5 && mesn>4){
        printf("%d de Maio",aux);
    }
    else if(mesn<=6 && mesn>5){
        printf("%d de Junho",aux);
    }
    else if(mesn<=7 && mesn>6){
        printf("%d de Julho",aux);
    }
    else if(mesn<=8 && mesn>7){
        printf("%d de Agosto",aux);
    }
    else if(mesn<=9 && mesn>8){
        printf("%d de Setembro",aux);
    }
    else if(mesn<=10 && mesn>9){
        printf("%d de Outubro",aux);
    }
    else if(mesn<=11 && mesn>10){
        printf("%d de Novembro",aux);
    }
    else if(mesn<=12 && mesn>11){
        printf("%d de Dezembro",aux);
    }

}