#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../headers/TADlista_intercalada.h"
#include "../headers/TADlista_tarefas.h"
#include "../headers/TADlista_tarefas2.h"

int main(){
    Ttarefa tarefa;
    Ttarefa2 tarefa2;
    Tlista_tarefa List_tarefa;
    Tlista_tarefa2 List_tarefa2;
    Tlista_tarefa3 List_tarefa3;

    int escolha, i = 0;
    char tarefas[50];

    inicar_tarefa(&List_tarefa);
    inicar_tarefa2(&List_tarefa2);
    inicar_tarefai(&List_tarefa3);

    instrucoes();
    scanf("%d",&escolha);

while (escolha != 4){
    switch (escolha){
        case 1:
            printf("Digite a terefa a ser inserida: ");
            //fgets(tarefa.tarefa, 50, stdin);
            scanf("%s", tarefa.tarefa);
            if(i%2 ==0){
                inserir_tarefa(&List_tarefa, tarefa);
                inserir_tarefai(&List_tarefa3, &List_tarefa2, &List_tarefa3, i);
            }
            else{
                strcpy(tarefa2.tarefa, tarefa.tarefa);
                inserir_tarefa2(&List_tarefa2, tarefa2);
                inserir_tarefai(&List_tarefa3, &List_tarefa2, &List_tarefa3, i);
            }
            break;
        case 2:
            printf("Digite a tarefa a ser removida: ");
            scanf("%s", tarefas);
            remover_tarefa(&List_tarefa, tarefas);
            break;
        case 3:
            printf("Sera exibido todas as tarefas da lista intercala.\n");
            imprimir_tarefai(&List_tarefa3);
            break;
        default:
            printf("Escolha invalida.\n");
            instrucoes();
    }
    printf("Escolha uma opcao: ");
    scanf("%d",&escolha);
    i++;
}
    return 0;
}