//Dadoscliente.h
//definindo tadcliente
typedef struct{
    char nome[20];
    int cpf;
}reg;

typedef struct{
    reg *Tadptr;
    int tam;
}lista;

//prototipos
void inicializa(lista *l);
void inserircli(lista *l, reg obj);
int verifcartam(lista *l);
void removercli(lista *l);
void imprimecli(lista *l);
void instrucoes();