//
// Created by Carlos Michael on 05/12/2022.
//

#include "conta.h"
#include <malloc.h>

struct conta {
    long numero;
    float saldo;
};

Conta *criacao() {
    Conta *cconta = (Conta*) malloc(sizeof(Conta));
    cconta->numero = 0001;
    cconta->saldo = 0.0;
    return cconta;
}
void depositar(Conta *cconta, float valor) {
    cconta->saldo += valor;
}
void sacar(Conta *cconta, float valor) {
    cconta->saldo -= valor;
}
void imprimir(Conta *cconta, long *numero, float *saldo) {
    *numero = cconta->numero;
    *saldo = cconta->saldo;
}
