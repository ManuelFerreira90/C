//tad tarefas
typedef struct{
    char tarefa[30];
}Ttarefa;

//arranjo de tarefas
typedef struct{
    Ttarefa item[10];
    //indica topo da pilha
    int topo;
}Atarefa;

//prototipos
void inicar(Atarefa *A);
void inserir(Atarefa *A, Ttarefa obj);
void remover(Atarefa *A);
void imprimir(Atarefa *A);
void instrucoes();