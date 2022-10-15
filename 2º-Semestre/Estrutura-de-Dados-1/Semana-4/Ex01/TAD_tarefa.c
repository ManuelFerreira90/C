#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD_tarefa.h"

void iniciar(Lista_T *lista){
  lista->nroElem = 0;
}

void inserir(Lista_T *lista, Itemtarefa *ch){
  int j;
  
  if(lista->nroElem > 50){
    prinf("Lista esta cheia.\n");
    return
  }

  for(j=lista->nroElem; j >=0; j--){
    lista->itarefa[j] = lista->itarefa[j-1];
  }
  strcpy(lista->itarefa[0], ch);
  lista->nroElem++;
}

void remover(Lista_T *lista, Itemtarefa *ch){
  int pos,j=0,cont =0,r,r2;

  while(cont < 50){
    r = strcmp(lista->itarefa[j], ch);
    if(r == 0){
      r2 = 1;
      pos = j;
    }
    else j++;
  }

  if(r2 != 1){
    printf("Palavra nao removida.\n");
  }

  for(j=pos, j<lista->nroElem; j++){
    lista->itarefa[j] = lista->itarefa[j+1];
  }
  lista->nroElem--;
  printf("Palavra removida.\n");
}

void imprimir(Lista_T *lista){
  int i;
  for(i=0; i<50; i++){
    printf("Tarefa %d : %s\n", i, lista->itarefa.tarefa);
  }
}


//instrucoes
void instrucoes(){
    printf("1 para inserir tarefa.\n"
    "2 para remover tarefa.\n"
    "3 para imprimir tarefas.\n"
    "4 para finalizar.\n");
}