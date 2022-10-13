#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../headers/TADlista_tarefas2.h"

//iniciar lista tarefas
void inicar_tarefa2(Tlista_tarefa2 *L_tarefa){
    L_tarefa->primeiro = (Apont_tarefa2) malloc(sizeof(Tcel_tarefa2));
    L_tarefa->ultimo = L_tarefa->primeiro;
    L_tarefa->primeiro->prox = NULL;
    return;
}

//inserir tarefa
void inserir_tarefa2(Tlista_tarefa2 *L_tarefa, Ttarefa2 item){
    L_tarefa->ultimo->prox = (Apont_tarefa2) malloc(sizeof(Tcel_tarefa2));
    L_tarefa->ultimo = L_tarefa->ultimo->prox;
    L_tarefa->ultimo->item_tarefa = item;
    L_tarefa->ultimo->prox = NULL;
    L_tarefa->nroElem++;
    return;
}

//remover tarefa
void remover_tarefa2(Tlista_tarefa2 *L_tarefa, char *charptr){
    Apont_tarefa2 auxANT;
    Apont_tarefa2 auxCurrent;
    Apont_tarefa2 aux;
    int result;

    auxANT = L_tarefa->primeiro;
    auxCurrent = L_tarefa->primeiro->prox;

    while (auxCurrent != NULL){
        //retornar quando item for igual para remover
        result = strcmp(auxCurrent->item_tarefa.tarefa, charptr);
        if(result == 0){
            aux = auxCurrent->prox;
            auxANT->prox = aux;
            free(auxCurrent);
            printf("Tarefa removida com sucesso.\n");
            L_tarefa->nroElem--;
            return;
        }
        auxCurrent = auxCurrent->prox;
        auxANT = auxANT->prox;
    }

    printf("Tarefa nao existe.\n");
    return;
}

//imprimir tarefas
void imprimir_tarefa2(Tlista_tarefa2 *L_tarefa){
    Apont_tarefa2 aux;
    int cont = 1; 

    aux = L_tarefa->primeiro->prox;

    while (aux != NULL){
        printf("Tarefa %d = %s\n", cont, aux->item_tarefa.tarefa);
        aux = aux->prox;
        cont++;
    }
    if(L_tarefa->nroElem == 0){
        inicar_tarefa(L_tarefa);
    }
    return;
}
