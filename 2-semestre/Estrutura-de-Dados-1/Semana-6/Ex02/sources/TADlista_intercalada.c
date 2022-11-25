#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../headers/TADlista_intercalada.h"
#include "../headers/TADlista_tarefas.h"
#include "../headers/TADlista_tarefas2.h"

//iniciar lista tarefas
void inicar_tarefai(Tlista_tarefa3 *L_tarefa){
    L_tarefa->primeiro = (Apont_tarefai) malloc(sizeof(Tcel_tarefa3));
    L_tarefa->ultimo = L_tarefa->primeiro;
    L_tarefa->primeiro->prox = NULL;
    return;
}

//inserir tarefa
void inserir_tarefai(Tlista_tarefa3 *L_tarefa3, Tlista_tarefa2 *L_tarefa2, Tlista_tarefa *L_tarefa, int i){
    L_tarefa3->ultimo->prox = (Apont_tarefai) malloc(sizeof(Tcel_tarefa3));
    L_tarefa3->ultimo = L_tarefa3->ultimo->prox;

    if(i%2 == 0){
        strcpy(L_tarefa3->ultimo->item_tarefa.tarefa, L_tarefa->ultimo->item_tarefa.tarefa);
        L_tarefa3->ultimo->prox = NULL;
        L_tarefa3->nroElem++;
    }
    else{
        strcpy(L_tarefa3->ultimo->item_tarefa.tarefa, L_tarefa2->ultimo->item_tarefa.tarefa);
        L_tarefa3->ultimo->prox = NULL;
        L_tarefa3->nroElem++;
    }
    return;
}

//remover tarefa
void remover_tarefai(Tlista_tarefa3 *L_tarefa, char *charptr){
    Apont_tarefai auxANT;
    Apont_tarefai auxCurrent;
    Apont_tarefai aux;
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
void imprimir_tarefai(Tlista_tarefa3 *L_tarefa){
    Apont_tarefai aux;
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
