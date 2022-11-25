//declarando tipo TAD tarefa
typedef char TIPOtarefa;

//declarando TAD tarefa
typedef struct{
    TIPOtarefa tarefa[50];
}Ttarefa;

//declarando ponteiro celula tarefa
typedef struct celula_tarefa *Apont_tarefa;

//declarando celula tarefa
typedef struct celula_tarefa{
    Ttarefa item_tarefa;
    struct celula_tarefa *prox;
}Tcel_tarefa;

//declarando lista tarefa
typedef struct{
    Apont_tarefa primeiro;
    Apont_tarefa ultimo;
    int nroElem;
}Tlista_tarefa;

//prototipos
void inicar_tarefa(Tlista_tarefa *L_tarefa);
void inserir_tarefa(Tlista_tarefa *L_tarefa, Ttarefa item);
void remover_tarefa(Tlista_tarefa *L_tarefa, char *);
void imprimir_tarefa(Tlista_tarefa *L_tarefa);
void instrucoes();