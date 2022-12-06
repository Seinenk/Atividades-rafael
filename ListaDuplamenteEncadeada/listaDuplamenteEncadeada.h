//
// Created by Carlos Michael on 05/12/2022.
//

#ifndef ATIVIDADE_BANCO__LISTADUPLAMENTEENCADEADA_H
#define ATIVIDADE_BANCO__LISTADUPLAMENTEENCADEADA_H

struct ListaDuplamenteEncadeada {
    int valor;
    struct ListaDuplamenteEncadeada *proximo;
    struct ListaDuplamenteEncadeada *anterior;
};

typedef struct ListaDuplamenteEncadeada ListaDuplamenteEncadeada;

ListaDuplamenteEncadeada *inserirListaDuplamenteEncadeada(ListaDuplamenteEncadeada *lista, int valor);
ListaDuplamenteEncadeada *removerListaDuplamenteEncadeada(ListaDuplamenteEncadeada *lista, int valor);

void imprimirListaDuplamenteEncadeada(ListaDuplamenteEncadeada *lista);
void imprimirListaDuplamenteEncadeadaInversa(ListaDuplamenteEncadeada *lista);

#endif //ATIVIDADE_BANCO__LISTADUPLAMENTEENCADEADA_H
