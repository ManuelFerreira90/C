typedef struct{
    int numero;
    double saldo;
    char tipoconta[20];
    int anoabertura;
    int emprestimo;
}DadosConta;

// cabeçalho das funções
void Inicializa(DadosConta *conta, int, double, char *, int);
void Imprime(DadosConta *conta);
void SetAnoAbertura(DadosConta *conta, int);
int GetAnoAbertura(DadosConta *conta);
void SetTipoConta(DadosConta *conta, char *);
char *GetTipoConta(DadosConta *conta);
int  GetCredito(DadosConta *conta);
void Credito(DadosConta *conta);