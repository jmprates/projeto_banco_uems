#include "testes.h"
#include <assert.h>
#include <stdio.h>
#include "contaBancaria.h"


void test_inicializa(){

    // Preparando o ambiente - Given (dado)
    ContaBancaria conta1;

    // Executando o codigo - When (quando)
    inicializa(&conta1, 918556, 300.00);

    // Verificando o teste - Then (entao)
    assert(918556 == conta1.numero);
    assert(300.00 == conta1.saldo);

    printf("Testes Executados com Sucesso!\n");

}

void test_deposito(){

    // Preparando o ambiente - Given (dado)
    ContaBancaria conta2;
    inicializa(&conta2, 123, 0);

    // Executando o codigo - When (quando)
    deposito(&conta2, 50.00);

    // Verificando o teste - Then (entao)
    assert(50.00 == conta2.saldo);

    printf("Testes Executados com Sucesso!\n");

}

void test_saque(){

    // Preparando o ambiente - Given (dado)
    ContaBancaria conta3;
    inicializa(&conta3, 8000, 150.00);
    ContaBancaria conta4;
    inicializa(&conta4, 8888, 50.00);

    // Executando o codigo - When (quando)
    saque(&conta3, 50.00);
    saque(&conta4, 150.00);

    // Verificando o teste - Then (entao)
    assert(100.00 == conta3.saldo);
    assert(50.00 == conta4.saldo);

    printf("Testes Executados com Sucesso!\n");

}

