typedef struct{
    int n;
}Tpilha;

typedef struct Celpilha *Apont_P;

typedef struct Celpilha{
    Tpilha num;
    struct Celpilha *prox;
}Cpilha;

typedef struct{
    Apont_P topo;
}Lpilha;

Apont_P vazia(Lpilha *l);
void iniciar(Lpilha *l);
void inserir(Lpilha *l, Tpilha obj);
int remover(Lpilha *l);
void imprimir(Lpilha *l);
void instrucoes();