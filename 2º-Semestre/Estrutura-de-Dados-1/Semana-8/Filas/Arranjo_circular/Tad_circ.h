typedef struct{
    int n;
}Tnum;

typedef struct{
    Tnum A[5];
    int primeiro, ultimo, nroElem;
}TArranjo;

void inicar(TArranjo *N);
void inserir(TArranjo *N, Tnum obj);
void remover(TArranjo *N);
void imprimir(TArranjo *N);
void instrucoes();