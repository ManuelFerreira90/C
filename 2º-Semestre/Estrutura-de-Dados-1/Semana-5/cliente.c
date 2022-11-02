//cliente.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dadoscliente.h"

//inicar arranjo dinamincamente alocado
void inicializa(lista *l){
    l->Tadptr = (reg*)malloc(5*sizeof(reg));
    l->tam = 0;
}

//inserir cliente
void inserircli(lista *l, reg obj){
    int i;
    if(l->tam == 5){
        printf("Arranjo cheio.\n");
        return;
    }
    //colocando todos elementos para a direita e inserindo no início
    for(i = l->tam; i > 0; i--) l->Tadptr[i] = l->Tadptr[i-1];
    l->Tadptr[0] = obj;
    l->tam++;
    printf("Inserido com sucesso.\n");
}

int verifcartam(lista *l){
    return l->tam;
}

void removercli(lista *l){
    int i;
    if(l->tam == 0){
        printf("Arranjo vazio.\n");
        return;
    }
    //colocando todos elementos para a esquerda para remover no início
    for(i = 0; i < l->tam; i++) l->Tadptr[i] = l->Tadptr[i+1];
    l->tam--;
    printf("Removido com sucesso.\n");
}

void imprimecli(lista *l){
    int i;
    if(l->tam == 0){
        printf("Arranjo vazio.\n");
        return;
    }
    //imprimir arranjo
    for(i = 0; i < l->tam; i++){
        printf("Nome: %s\n",l->Tadptr[i].nome);
        printf("CPF: %d\n",l->Tadptr[i].cpf);
    }
}

//instruções
void instrucoes(){
    printf("0 para inserir.\n"
    "1 para remover\n"
    "2 para imprimir.\n"
    "3 para mostrar tamanho do arranjo.\n"
    "4 para finalizar.\n");
}