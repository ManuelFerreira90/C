#include <stdio.h>
#include <stdlib.h>
#include "Tad.h"

int main(){
    Tnum obj;
    Lnum lista;

    inicar(&lista);

    char tarefa[30];
    int escolha;

    instrucoes();
    scanf("%d",&escolha);
    

    while (escolha != 3){
        switch (escolha){
            case 0:
                printf("Digite um numero.\n");
                scanf("%s",tarefa);
                inserir(&lista, obj);
                break;
        
            case 1:
                printf("Elemento do topo será removido.\n");
                remover(&lista);
                printf("Elemento removido.\n");
                break;

            case 2:
                printf("Pilha sera mostrada.\n");
                imprimir(&lista);
                break;

            default:
                break;
        }
        printf("\n");
        instrucoes();
        scanf("%d",&escolha);
    }

    return 0;
}