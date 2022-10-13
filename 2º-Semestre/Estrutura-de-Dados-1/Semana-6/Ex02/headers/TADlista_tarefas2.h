//declarando tipo TAD tarefa
typedef char TIPOtarefa2;

//declarando TAD tarefa
typedef struct{
    TIPOtarefa2 tarefa[50];
}Ttarefa2;

//declarando ponteiro celula tarefa
typedef struct celula_tarefa2 *Apont_tarefa2;

//declarando celula tarefa
typedef struct celula_tarefa2{
    Ttarefa2 item_tarefa;
    struct celula_tarefa *prox;
}Tcel_tarefa2;

//declarando lista tarefa
typedef struct{
    Apont_tarefa2 primeiro;
    Apont_tarefa2 ultimo;
    int nroElem;
}Tlista_tarefa2;

//prototipos
void inicar_tarefa2(Tlista_tarefa2 *L_tarefa);
void inserir_tarefa2(Tlista_tarefa2 *L_tarefa, Ttarefa2 item);
void remover_tarefa2(Tlista_tarefa2 *L_tarefa, char *);
void imprimir_tarefa2(Tlista_tarefa2 *L_tarefa);
