#include <stdio.h>
#include <stdlib.h>
#include "TAD_F_Cliente.h"

//iniciar lista
void inicializar(Lcliente *lista){
    lista->primeiro = (Apontador_cli)malloc(sizeof(Ccliente));
    lista->ultimo = lista->primeiro;
    lista->primeiro->Prox = NULL;
    return;
}

//inserir elemento na fila
void inserir(Lcliente *lista, Tcliente inserir){
    lista->ultimo->Prox = (Apontador_cli)malloc(sizeof(Ccliente));
    lista->ultimo = lista->ultimo->Prox;
    lista->ultimo->item_c = inserir;
    lista->ultimo->Prox = NULL;
    return;
}

//remover elemento da fila
void remover(Lcliente *lista){
    Apontador_cli aux, aux1;
    aux = lista->primeiro->Prox;
    aux1 = aux->Prox;
    free(aux);
    lista->primeiro->Prox = aux1;
    return;
}

//imprimir elementos da fila
void imprimir(Lcliente *lista){
    Apontador_cli aux;
    aux = lista->primeiro->Prox;

    while(aux != NULL){
        printf("Nome: %s\n", aux->item_c.nome);
        printf("CPF: %d\n", aux->item_c.CPF);
        aux = aux->Prox;
    }
    return;
}

//instrucoes
void instrucoes(){
    printf("0 para inserir.\n"
    "1 para remover\n"
    "2 para imprimir.\n"
    "3 para finalizar.\n");
}