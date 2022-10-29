//definindo tad clientes
typedef struct{
    char nome [20];
    int CPF;
}Tcliente;

//defininfo tipo ponteiro para celula cliente
typedef struct Cel_cliente *Apontador_cli;

// celula cliente
typedef struct Cel_cliente{
    Tcliente item_c;
    struct Cel_cliente *Prox;
}Ccliente;

//lista fila de clientes
typedef struct{
    Apontador_cli primeiro;
    Apontador_cli ultimo;
}Lcliente;

//prototipos
void inicializar(Lcliente *lista);
void inserir(Lcliente *lista, Tcliente inserir);
void remover(Lcliente *lista);
void imprimir(Lcliente *lista);
void instrucoes();