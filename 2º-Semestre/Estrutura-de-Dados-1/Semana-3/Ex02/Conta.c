#include <stdio.h>
#include <string.h>
#include "Dadosconta.h"

void Credito(DadosConta *conta){
    int x;
    x = conta->anoabertura;
    if(2022-x<5)
        conta->emprestimo = 0;
    else
        conta->emprestimo = 1;  
}

int GetCredito(DadosConta *conta){
    return conta->emprestimo;
}

void SetAnoAbertura(DadosConta *conta, int anoaber){
    conta->anoabertura = anoaber;
}

int GetAnoAbertura(DadosConta *conta){
    return conta->anoabertura;
}

void SetTipoConta(DadosConta *conta, char *tipoconta){
    strcpy(conta->tipoconta,tipoconta);
}

char *GetTipoConta(DadosConta *conta){
    return conta->tipoconta;
}

void Inicializa(DadosConta *conta, int numero, double saldo, char *tipoconta, int anoaber){
    conta->numero = numero;
    conta->saldo = saldo;
    SetAnoAbertura(conta, anoaber);
    SetTipoConta(conta, tipoconta);
}


void Imprime(DadosConta *conta){
    printf("\n");
    printf("Dados da conta\n");
    printf("-----------------------------\n");
    printf("Numero da conta: %d\n", conta->numero);
    printf("Saldo: %2.lf\n", conta->saldo);
    printf("Tipo da conta: %s\n",GetTipoConta(conta));
    printf("Ano de abertura da conta: %d\n",GetAnoAbertura(conta));
    printf("emprestimo  %d\n",conta->emprestimo);
    if(conta->emprestimo==1)
        printf("Voce pode fazer um emprestimo\n");
    else
        printf("Voce nao pode fazer um emprestimo\n");
}