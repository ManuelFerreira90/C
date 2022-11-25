#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../headers/TADlista_tarefas.h"

int main(){
    Ttarefa tarefa;
    Tlista_tarefa List_tarefa;

    int escolha;
    char tarefas[50];

    inicar_tarefa(&List_tarefa);

    instrucoes();
    scanf("%d",&escolha);

while (escolha != 4){
    switch (escolha){
        case 1:
            printf("Digite a terefa a ser inserida: ");
            //fgets(tarefa.tarefa, 50, stdin);
            scanf("%s", tarefa.tarefa);
            inserir_tarefa(&List_tarefa, tarefa);
            break;
        case 2:
            printf("Digite a tarefa a ser removida: ");
            scanf("%s", tarefas);
            remover_tarefa(&List_tarefa, tarefas);
            break;
        case 3:
            printf("Sera exibido todas as tarefas.\n");
            imprimir_tarefa(&List_tarefa);
            break;
        default:
            printf("Escolha invalida.\n");
            instrucoes();
    }
    printf("Escolha uma opcao: ");
    scanf("%d",&escolha);
}
    return 0;
}