//tad tarefas
typedef struct{
    int n;
}Tnum;

//arranjo de tarefas
typedef struct{
    Tnum *ptr;
    //indica topo da pilha
    int topo;
}Lnum;

//prototipos
void inicar(Lnum *A);
void inserir(Lnum *A, Tnum obj);
void remover(Lnum *A);
void imprimir(Lnum *A);
void instrucoes();