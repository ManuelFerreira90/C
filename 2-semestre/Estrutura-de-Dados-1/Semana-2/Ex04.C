//04
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome1[20];
    char data_nasc[20];
    int CPF;
}Dados;

void receber_dados(Dados *,char *,char *,int);
void imprimir_dados(Dados);



int main() {
    char nome[20],data[20];
    int cpf;
    Dados dados;
    
    printf("Digite seu nome: ");
    scanf("%s",nome);
    printf("Digite sua data de nascimento: ");
    scanf("%s",data);
    printf("Digite seu CPF: ");
    scanf("%d",&cpf);
    
    receber_dados(&dados,nome,data,cpf);
    imprimir_dados(dados);
    
    return 0;
}

void receber_dados(Dados *dados, char *nomeptr, char *dataptr, int CPFptr){
    strcpy(dados->nome1,nomeptr);
    strcpy(dados->data_nasc,dataptr);
    dados->CPF=CPFptr;
    return;
}

void imprimir_dados(Dados dados){
    printf("\nSeu nome: %s",dados.nome1);
    printf("\nSua data de nascimento: %s",dados.data_nasc);
    printf("\nSeu CPF: %d\n",dados.CPF);
    return;
}