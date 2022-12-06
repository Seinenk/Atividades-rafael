//
// Created by Carlos Michael on 05/12/2022.
//

#ifndef ATIVIDADE_BANCO__CONTA_H
#define ATIVIDADE_BANCO__CONTA_H

typedef struct conta Conta;

Conta *criacao();
void depositar(Conta *cconta, float valor);
void sacar(Conta *cconta, float valor);
void imprimir(Conta *cconta, long *numero, float *saldo);

#endif //ATIVIDADE_BANCO__CONTA_H
