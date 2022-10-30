#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Tad_circ.h"

int main(){
    TArranjo lista;
    Tnum obj;

    inicar(&lista);

    int escolha;

    instrucoes();
    scanf("%d",&escolha);
    

    while (escolha != 3){
        switch (escolha){
            case 0:
                printf("Digite um numero.\n");
                scanf("%d",&obj.n);
                inserir(&lista, obj);
                break;
        
            case 1:
                printf("Primeiro elemento será removido.\n");
                remover(&lista);
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