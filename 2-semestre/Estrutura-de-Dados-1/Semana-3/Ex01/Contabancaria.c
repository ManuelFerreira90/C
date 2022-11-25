#include <stdio.h>
#include "Contabancaria.h"
#include <string.h>

void Inicializa(ContaBancaria *conta, int numero, double saldo){
    conta->numero = numero;
    conta->saldo = saldo;
}

void Deposito(ContaBancaria *conta, double valor){
    conta->saldo += valor;
}

void Saque(ContaBancaria *conta, double valor){
    conta->saldo -= valor;
}

void Imprime(ContaBancaria *conta){
    printf("\n");
    printf("-----------------------------\n");
    printf("Numero: %d\n", conta->numero);
    printf("Saldo: %2.lf\n", conta->saldo);
    printf("Nome do cliente: %s\n",GetNome(conta));
    printf("CPF do cliente: %d\n",GetCPF(conta));
    printf("Tipo da conta: %s\n",GetTipoConta(conta));
    printf("Ano de abertura da conta: %d\n",GetAnoAbertura(conta));
    printf("emprestimo  %d\n",conta->emprestimo);
    if(conta->emprestimo==1)
        printf("Voce pode fazer um emprestimo\n");
    else
        printf("Voce nao pode fazer um emprestimo\n");
}

void SetNome(ContaBancaria *conta, char *nomeptr){
    strcpy(conta->nomecli,nomeptr);
}

char *GetNome(ContaBancaria *conta){
    return conta->nomecli;
}

void SetTipoConta(ContaBancaria *conta, char *tipoconta){
    strcpy(conta->tipoconta,tipoconta);
}

char *GetTipoConta(ContaBancaria *conta){
    return conta->tipoconta;
}

void SetAnoAbertura(ContaBancaria *conta, int anoaber){
    conta->anoabertura = anoaber;
}

int GetAnoAbertura(ContaBancaria *conta){
    return conta->anoabertura;
}

void SetCPF(ContaBancaria *conta, int CPF){
    conta->CPF = CPF;
}

int GetCPF(ContaBancaria *conta){
    return conta->CPF;
}

void Credito(ContaBancaria *conta){
    int x,d;
    x = conta->anoabertura;
    if(2022-x<5)
        conta->emprestimo = 0;
    else
        conta->emprestimo = 1;  
}

int GetCredito(ContaBancaria *conta){
    return conta->emprestimo;
}