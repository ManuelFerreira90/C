#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Tad_tarefas.h"

int main(){
    Atarefa lista;
    Ttarefa obj;

    inicar(&lista);

    char tarefa[30];
    int escolha;

    instrucoes();
    scanf("%d",&escolha);
    

    while (escolha != 3){
        switch (escolha){
            case 0:
                printf("Digite uma tarefa que queira guarda.\n");
                printf("Tarefa: ");
                scanf("%s",tarefa);
                strcpy(obj.tarefa, tarefa);
                inserir(&lista, obj);
                break;
        
            case 1:
                printf("Ulitmo elemento será removido.\n");
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