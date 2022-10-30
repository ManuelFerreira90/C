#include <stdio.h>
#include <stdlib.h>
#include "Tad_circ.h"

//inicar o arranjo
void inicar(TArranjo *N){
    N->primeiro = 0;
    N->ultimo = -1;
    N->nroElem = 0;
}

//inserir elemento
void inserir(TArranjo *N, Tnum obj){
    //verifiando caso vetor tenha chegado no final retoranar para o começo
    if(N->nroElem == 5){
        printf("Arranjo cheio.\n");
        return;
    }
    if(N->ultimo < 4){
        //atribuição
        N->ultimo++;
        N->A[N->ultimo] = obj;
        N->nroElem++;
    }
    else{
        N->ultimo = 0;
        N->A[N->ultimo] = obj;
        N->nroElem++;
    }
    printf("Elemento adicionado.\n");
}

//remover elemento
void remover(TArranjo *N){
    if(N->nroElem == 0){
        printf("Arranjo vazio.\n");
        return;
    }
    N->primeiro++;
    N->nroElem--;
    printf("Elemento removido.\n");

    //verificando caso o indicado do meu primeiro elemento tenha chegado no final do vetor
    if(N->primeiro == 5){
        N->primeiro = 0;
    }
}

void imprimir(TArranjo *N){
    int i,j;
    i = N->primeiro;   
    for(j = 0; j < N->nroElem; j++){
        if(j == N->nroElem - 1){
            printf("%d",N->A[i].n);
            return;
        }
        printf("%d --> ",N->A[i].n);
        i++;
        if(i == 5)
            i = 0;
    }
}

void instrucoes(){
    printf("0 para inserir.\n"
    "1 para remover\n"
    "2 para imprimir.\n"
    "3 para finalizar.\n");
}