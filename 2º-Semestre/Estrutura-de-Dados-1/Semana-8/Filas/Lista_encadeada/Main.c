#include <stdio.h>
#include <string.h>
#include "TAD_F_Cliente.h"

int main(){
    //lista de clientes
    Lcliente lista;
    //tad clientes
    Tcliente tad;
    
    inicializar(&lista);

    char nome[20];
    int cpf, escolha;

    instrucoes();
    scanf("%d",&escolha);

    while (escolha != 3){
        switch (escolha){
            case 0:
                printf("Digite nome e cpf do cliente.\n");
                printf("Nome: ");
                scanf("%s",nome);
                printf("CPF: ");
                scanf("%d",&cpf);
                strcpy(tad.nome, nome);
                tad.CPF = cpf;
                inserir(&lista, tad);
                break;
        
            case 1:
                printf("Primeiro elemento será removido.\n");
                remover(&lista);
                printf("Elemento removido.\n");
                break;

            case 2:
                printf("Fila sera mostrada.\n");
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