#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
    int n;
    struct NO *prox;
}NO;

typedef struct{
    NO *ini;
    NO *fim;
}Fila;

void iniciar(Fila *F){
    F->ini = NULL;
    F->fim = NULL;
}

void enfileira(Fila *F, int dado){
    NO *ptr = (NO*)malloc(sizeof(NO));
    if(ptr == NULL){
        printf("Erro alocacao.\n");
        return;
    }
    else{ 
        ptr->n = dado;
        ptr->prox = NULL;
        if(F->ini == NULL){
            F->ini = ptr;
        }
        else{
            F->fim->prox = ptr;
        }
        F->fim = ptr;
    }
}

int desenfileira(Fila *F){
    NO *aux;
    int dado;
    if(F->ini == NULL){
        printf("Lista vazia.\n");
        return 0;
    }
    else{
        aux = F->ini;
        F->ini = F->ini->prox;
        dado = aux->n;
        aux->prox = NULL;
        free(aux);
        return dado;
    } 
}

void imprimir(Fila *F){
    NO *ptr = F->ini;
    if(F->ini == NULL){
        printf("Lista vazia.\n");
        return;
    }
    else{
        while(ptr != NULL){
            printf("%d ",ptr->n);
            ptr = ptr->prox;
        }
        printf("\n");
    }
}

int main(){
    Fila F;
    iniciar(&F);

    //testando enfileira
    enfileira(&F,10);
    enfileira(&F,20);
    enfileira(&F,30);
    printf("Emfileirando: ");
    imprimir(&F);

    //testando remover
    printf("Item removido: %d \n",desenfileira(&F));
    printf("Fila depois da remocao: ");
    imprimir(&F);

    return 0;
}