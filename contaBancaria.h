//ContaBancaria.h
//defini��o do tipo
typedef struct
{
    int numero;
    double saldo;
} ContaBancaria;

//cabe�alho das fun��es
void inicializa(ContaBancaria* conta, int numero, double saldo);
void deposito(ContaBancaria* conta, double valor);
void saque(ContaBancaria* conta, double valor);
void imprime(ContaBancaria conta);
