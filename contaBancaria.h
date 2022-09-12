//ContaBancaria.h
//definição do tipo
typedef struct
{
    int numero;
    double saldo;
} ContaBancaria;

//cabeçalho das funções
void inicializa(ContaBancaria* conta, int numero, double saldo);
void deposito(ContaBancaria* conta, double valor);
void saque(ContaBancaria* conta, double valor);
void imprime(ContaBancaria conta);
