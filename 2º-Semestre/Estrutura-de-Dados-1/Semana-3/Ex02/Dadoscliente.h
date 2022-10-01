// definição do tipo
typedef struct{
    char nomecli[20];
    int CPF;
}Dadoscliente;

// cabeçalho das funções
void Inicializacli(Dadoscliente *cli, char *, int);
void Imprimecli(Dadoscliente *cli);
void SetNome(Dadoscliente *cli, char *nomeptr);
char *GetNome(Dadoscliente *cli);
void Setcpf(Dadoscliente *cli, int CPF);
int Getcpf(Dadoscliente *cli);

