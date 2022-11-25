#include <stdio.h>
#include <string.h>
#include "Endereco.h"

//leitura dos dados endereco
void LeituraEndereco(DadosEndereco *ende, char *estadoptr, char *cidadeptr, char *bairroptr, char *ruaptr, int numcasa){
    Setestado(ende, estadoptr);
    Setcidade(ende, cidadeptr);
    Setbairro(ende, bairroptr);
    Setrua(ende, ruaptr);
    Setnumcasa(ende, numcasa);
}

//imprime dados do endereco
void ImprimeEndereco(DadosEndereco *ende){
    printf("\n");
    printf("Dados endereco\n");
    printf("---------------------------\n");
    printf("Estado: %s\n",Getestado(ende));
    printf("Cidade: %s\n",Getcidade(ende));
    printf("Bairro: %s\n",Getbairro(ende));
    printf("Rua: %s\n",Getrua(ende));
    printf("Numero da casa: %d\n",Getnumcasa(ende));
}

void Setestado(DadosEndereco *ende, char *estadoptr){
    strcpy(ende->estado,estadoptr);
}

void Setcidade(DadosEndereco *ende, char *cidadeptr){
    strcpy(ende->cidade,cidadeptr);
}

void Setbairro(DadosEndereco *ende, char *bairroptr){
    strcpy(ende->bairro,bairroptr);
}
void Setrua(DadosEndereco *ende, char *ruaptr){
    strcpy(ende->rua,ruaptr);
}

void Setnumcasa(DadosEndereco *ende, int numcasa){
    ende->numcasa = numcasa;
}

char *Getestado(DadosEndereco *ende){
    return ende->estado;
}

char *Getcidade(DadosEndereco *ende){
    return ende->cidade;
}

char *Getbairro(DadosEndereco *ende){
    return ende->bairro;
}

char *Getrua(DadosEndereco *ende){
    return ende->rua;
}

int Getnumcasa(DadosEndereco *ende){
    return ende->numcasa;
}