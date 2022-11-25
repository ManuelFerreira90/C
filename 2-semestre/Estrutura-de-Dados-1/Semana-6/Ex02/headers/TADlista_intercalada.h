#include "../headers/TADlista_tarefas.h"
#include "../headers/TADlista_tarefas2.h"

//declarando tipo TAD tarefa
typedef char TIPOtarefai;

//declarando TAD tarefa
typedef struct{
    TIPOtarefai tarefa[50];
}Ttarefa3;

//declarando ponteiro celula tarefa
typedef struct celula_tarefai *Apont_tarefai;

//declarando celula tarefa
typedef struct celula_tarefai{
    Ttarefa3 item_tarefa;
    struct celula_tarefai *prox;
}Tcel_tarefa3;

//declarando lista tarefa
typedef struct{
    Apont_tarefai primeiro;
    Apont_tarefai ultimo;
    int nroElem;
}Tlista_tarefa3;

//prototipos
void inicar_tarefai(Tlista_tarefa3 *L_tarefa);
void inserir_tarefai(Tlista_tarefa3 *L_tarefa3, Tlista_tarefa2 *L_tarefa2, Tlista_tarefa *L_tarefa, int);
void remover_tarefai(Tlista_tarefa3 *L_tarefa, char *);
void imprimir_tarefai(Tlista_tarefa3 *L_tarefa);
void instrucoes();
