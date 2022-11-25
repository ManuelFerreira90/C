#include <stdio.h>
#include <stdlib.h>
#include "Contabancaria.h"

int main(){
    double saldo;
    int anoaber, numero, op, valor, CPF;
    char nome[20],tipoconta[20];
    ContaBancaria conta1;

    printf("Digite seu nome: ");
    scanf("%s",nome);
    printf("Digite o numero da sua conta: ");
    scanf("%d",&numero);
    printf("Digite seu CPF: ");
    scanf("%d",&CPF);
    printf("Digite o ano de abertura da conta: ");
    scanf("%d",&anoaber);
    printf("Digite o tipo da conta: ");
    scanf("%s",tipoconta);
    printf("Informe seu saldo: ");
    scanf("%lf",&saldo);
    printf("Digite 0 caso deseja depositar\nDigite 1 caso deseja sacar\n");
    scanf("%d",&op);
    
    Inicializa(&conta1, numero, saldo);
    SetNome(&conta1, nome);
    SetTipoConta(&conta1, tipoconta);
    SetAnoAbertura(&conta1, anoaber);
    SetCPF(&conta1, CPF);
    Credito(&conta1);

    if(op==0){
        printf("Informe quanto quer depositar: ");
        scanf("%d",&valor);
        Deposito(&conta1, valor);
    }
    else{
        printf("Informe quanto deseja sacar: ");
        scanf("%d",&valor);
        Saque(&conta1, valor);
    }
    
    Imprime(&conta1);

    return 0;
}