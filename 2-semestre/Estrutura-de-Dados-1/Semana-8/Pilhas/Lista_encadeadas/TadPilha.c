#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TadPilha.h"

Apont_P vazia(Lpilha *l){
    return l->topo;
}

void iniciar(Lpilha *l){
    l->topo = NULL;
}

void inserir(Lpilha *l, Tpilha obj){
    Apont_P aux1;
    aux1 = (Apont_P)malloc(sizeof(Cpilha));
    aux1->num = obj;
    aux1->prox = l->topo;
    l->topo = aux1;
}

int remover(Lpilha *l){
    int dado;
    if(vazia(l)==NULL){ 
        printf("Lista vazia.\n");
        return 0;
    }
    Apont_P aux1;
    aux1 = l->topo;
    dado = aux1->num.n;
    l->topo = l->topo->prox;
    aux1->prox = NULL;
    free(aux1);
    printf("Elemento removido.\n");
    return dado;
}

void imprimir(Lpilha *l){
    Apont_P aux1;
    aux1 = l->topo;
    while (aux1 != NULL){
        printf("%d --> ", aux1->num.n);
        aux1 = aux1->prox;
        if(aux1 == NULL){
            printf("NULL");
        }
    }
}

void instrucoes(){
    printf("0 para inserir.\n"
    "1 para remover\n"
    "2 para imprimir.\n"
    "3 para finalizar.\n");
}