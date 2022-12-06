//
// Created by Carlos Michael on 05/12/2022.
//

#ifndef ATIVIDADE_BANCO__LISTACIRCULARDUPLAMENTEENCADEADA_H
#define ATIVIDADE_BANCO__LISTACIRCULARDUPLAMENTEENCADEADA_H

struct ListaCircularDuplamenteEncadeada {
    int valor;
    struct ListaCircularDuplamenteEncadeada *proximo;
    struct ListaCircularDuplamenteEncadeada *anterior;
};

typedef struct ListaCircularDuplamenteEncadeada ListaCircularDuplamenteEncadeada;

ListaCircularDuplamenteEncadeada *criacaoListaCircularDuplamenteEncadeada();

void inserirListaCircularDuplamenteEncadeada(ListaCircularDuplamenteEncadeada *lista, int valor);
void removerListaCircularDuplamenteEncadeada(ListaCircularDuplamenteEncadeada *lista, int valor);
void imprimirListaCircularDuplamenteEncadeada(ListaCircularDuplamenteEncadeada *lista);

#endif //ATIVIDADE_BANCO__LISTACIRCULARDUPLAMENTEENCADEADA_H
