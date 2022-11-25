// definição do tipo
typedef struct{
    int numero;
    double saldo;
    char nomecli[20];
    char tipoconta[20];
    int anoabertura;
    int CPF;
    int emprestimo;
}ContaBancaria;

// cabeçalho das funções
void Inicializa(ContaBancaria *conta, int numero, double saldo);
void Deposito(ContaBancaria *conta, double valor);
void Saque(ContaBancaria *conta, double valor);
void Imprime(ContaBancaria *conta);
void SetNome(ContaBancaria *conta, char *nomeptr);
char *GetNome(ContaBancaria *conta);
void SetTipoConta(ContaBancaria *conta, char *tipoconta);
char *GetTipoConta(ContaBancaria *conta);
void SetAnoAbertura(ContaBancaria *conta, int anoaberptr);
int  GetAnoAbertura(ContaBancaria *conta);
void SetCPF(ContaBancaria *conta, int CPF);
int  GetCPF(ContaBancaria *conta);
int  GetCredito(ContaBancaria *conta);
void Credito(ContaBancaria *conta);