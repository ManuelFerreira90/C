#include <stdio.h>
#include <stdlib.h>
#include "Tad.h"

void inicar(Lnum *A){
    A->ptr =(Tnum*)malloc(10*sizeof(Tnum));
    A->topo = 0;
}

void inserir(Lnum *A, Tnum obj){
    int i;
    i = A->topo;
    if(A->topo < 10){
        A->ptr[i] = obj;
        A->topo++;
        return;
    }
    else{
        printf("Arranjo esta cheio.\n");
        return;
    }
}

void remover(Lnum *A){
    A->topo--;
}

void imprimir(Lnum *A){
    int i;
    for(i=0;i<A->topo;i++){
        if(i == A->topo-1){
            printf("%d", A->ptr[i].n);
            return;
        }
        printf("%d --> ", A->ptr[i].n); 
    }
}

void instrucoes(){
    printf("0 para inserir.\n"
    "1 para remover\n"
    "2 para imprimir.\n"
    "3 para finalizar.\n");
}