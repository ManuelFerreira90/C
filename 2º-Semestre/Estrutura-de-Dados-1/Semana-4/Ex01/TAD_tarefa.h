//declrando tipo tarefa
typedef char Itemtarefa;

//declarando estrutura tarefa
typedef struct{
  Itemtarefa tarefa;
}Ttarefa;

//declarando lista tarefa
typedef struct{
  Ttarefa itarefa[50];
  int nroElem;
}Lista_T;

//prototipos
void iniciar(Lista_T *lista);
void inserir(Lista_T *lista);
void remover(Lista_T *lista);
void imprimir(Lista_T *lista);
void instrucoes();