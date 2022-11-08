#include <stdio.h>
#include <string.h>
#include "TadPilha.h"

int main(){
    Lpilha lista;
    Tpilha item;

    iniciar(&lista);

    int escolha;

    instrucoes();
    scanf("%d",&escolha);

    while (escolha != 3){
        switch (escolha){
            case 0:
                printf("Digite um numero.\n");
                scanf("%d",&item.n);
                inserir(&lista, item);
                break;
        
            case 1:
                printf("Primeiro elemento será removido.\n");
                printf("Item removido: %d",remover(&lista));
                break;

            case 2:
                printf("\nFila sera mostrada.\n");
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