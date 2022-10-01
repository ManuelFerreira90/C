#include <stdio.h>
#include <string.h>
#include "Dadoscliente.h"

void Inicializacli(Dadoscliente *cli, char *nomeptr, int cpf){
    SetNome(cli,nomeptr);
    Setcpf(cli,cpf);
}

void SetNome(Dadoscliente *cli, char *nomeptr){
    strcpy(cli->nomecli,nomeptr);
}

char *GetNome(Dadoscliente *cli){
    return cli->nomecli;
}

void Setcpf(Dadoscliente *cli, int CPF){
    cli->CPF = CPF;
}

int GetCPF(Dadoscliente *cli){
    return cli->CPF;
}

void Imprimecli(Dadoscliente *cli){
    printf("\n");
    printf("Dados cliente\n");
    printf("-----------------------------\n");
    printf("Nome: %s\n",GetNome(cli));
    printf("CPF : %d\n", GetCPF(cli));
}