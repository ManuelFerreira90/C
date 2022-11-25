#include <stdio.h>
#include <stdlib.h>
#include "Dadoscliente.h"
#include "Dadosconta.h"
#include "Endereco.h"

int main(){
    DadosConta conta;
    Dadoscliente cliente;
    DadosEndereco endereco;
    char nome[20], estado[50], cidade[50],bairro[50], rua[50], tipoconta[20];
    int numero, cpf, numcasa, anoaber;
    double saldo;

    //dados cliente
    printf("Digite seu nome: ");
    scanf("%s",nome);
    printf("Digite seu CPF: ");
    scanf("%d",&cpf);
    
    //dados conta
    printf("Digite o numero da conta: ");
    scanf("%d",&numero);
    printf("Digite seu saldo: ");
    scanf("%lf",&saldo);
    printf("Digite o tipo da conta: ");
    scanf("%s",tipoconta);
    printf("Digite o ano de abertura da conta: ");
    scanf("%d",&anoaber);

    //dados endereco
    printf("Digite seu estado: ");
    scanf("%s",estado);
    printf("Digite sua ciade: ");
    scanf("%s",cidade);
    printf("Digite seu bairro: ");
    scanf("%s",bairro);
    printf("Digite sua rua: ");
    scanf("%s",rua);
    printf("Digite o numero da sua casa: ");
    scanf("%d",&numcasa);

    //conta
    Inicializa(&conta, numero, saldo, tipoconta, anoaber);
    Credito(&conta);

    //cliente
    Inicializacli(&cliente, nome, cpf);

    //endereco
    LeituraEndereco(&endereco, estado, cidade, bairro, rua, numcasa);

    //imprime conta
    Imprime(&conta);

    //imprime cliente
    Imprimecli(&cliente);

    //imprime endereco
    ImprimeEndereco(&endereco);

    return 0;
}
