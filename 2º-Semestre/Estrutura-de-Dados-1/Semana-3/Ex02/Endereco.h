typedef struct{
    char estado[50];
    char cidade[50];
    char bairro[50];
    char rua[50];
    int numcasa;
}DadosEndereco;

void LeituraEndereco(DadosEndereco *ende, char *, char *, char *, char *, int);
void ImprimeEndereco(DadosEndereco *ende);
void Setestado(DadosEndereco *ende, char *estadoptr);
void Setcidade(DadosEndereco *ende, char *cidadeptr);
void Setbairro(DadosEndereco *ende, char *bairrpptr);
void Setrua(DadosEndereco *ende, char *ruaptr);
void Setnumcasa(DadosEndereco *ende, int numcasa);
char *Getestado(DadosEndereco *ende);
char *Getcidade(DadosEndereco *ende);
char *Getbairro(DadosEndereco *ende);
char *Getrua(DadosEndereco *ende);
int Getnumcasa(DadosEndereco *ende);
