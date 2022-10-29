#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Tad_tarefas.h"

void inicar(Atarefa *A){
    A->topo = 0;
}

void inserir(Atarefa *A, Ttarefa obj){
    int i;
    i = A->topo;
    if(A->topo < 10){
        A->item[i] = obj;
        A->topo++;
        return;
    }
    else{
        printf("Arranjo esta cheio.\n");
        return;
    }
}

void remover(Atarefa *A){
    A->topo--;
}

void imprimir(Atarefa *A){
    int i;
    for(i=0;i<A->topo;i++){
        printf("Tarefa %d: %s\n", i+1, A->item[i].tarefa);
    }
    return;
}

void instrucoes(){
    printf("0 para inserir.\n"
    "1 para remover\n"
    "2 para imprimir.\n"
    "3 para finalizar.\n");
}