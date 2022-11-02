//Main.c
#include <stdio.h>
#include <stdlib.h>
#include "Dadoscliente.h"

int main(){
    lista cliente;
    reg item;

    inicializa(&cliente);

    int escolha,result;
    
    instrucoes();
    scanf("%d",&escolha);

    while (escolha != 4){
        switch (escolha){
            case 0:
                printf("Digite seu nome: ");
                scanf("%s",(item.nome));
                printf("Digite seu CPF: ");
                scanf("%d",&(item.cpf));
                inserircli(&cliente, item);
                break;
        
            case 1:
                printf("Primeiro elemento será removido.\n");
                removercli(&cliente);
                printf("Elemento removido.\n");
                break;

            case 2:
                printf("Arranjo sera mostrada.\n");
                imprimecli(&cliente);
                break;
            
            case 3:
                result=verifcartam(&cliente);
                printf("Tamanho do arranjo = %d",result);
                break;

            default:
                break;
        }
        printf("\n");
        scanf("%d",&escolha);
    }

    return 0;
}