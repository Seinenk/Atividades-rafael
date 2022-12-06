//
// Created by Carlos Michael on 05/12/2022.
//

#include "listaDuplamenteEncadeada.h"
#include <malloc.h>
#include <stdio.h>

ListaDuplamenteEncadeada *inserirListaDuplamenteEncadeada(ListaDuplamenteEncadeada *lista, int valor) {
    ListaDuplamenteEncadeada *novo = (ListaDuplamenteEncadeada *) malloc(sizeof(ListaDuplamenteEncadeada));
    novo->valor = valor;
    novo->proximo = lista;
    novo->anterior = NULL;

    if (lista != NULL) {
        lista->anterior = novo;
    }
    return novo;
}

ListaDuplamenteEncadeada *removerListaDuplamenteEncadeada(ListaDuplamenteEncadeada *lista, int valor) {
    ListaDuplamenteEncadeada *aux = lista;
    while (aux != NULL && aux->valor != valor) {
        aux = aux->proximo;
    }
    if (aux == NULL) {
        return lista;
    }
    if (aux->anterior == NULL) {
        lista = aux->proximo;
    } else {
        aux->anterior->proximo = aux->proximo;
    }
    if (aux->proximo != NULL) {
        aux->proximo->anterior = aux->anterior;
    }
    free(aux);
    return lista;
}

void imprimirListaDuplamenteEncadeada(ListaDuplamenteEncadeada *lista) {
    ListaDuplamenteEncadeada *aux = lista;
    if (aux) {
        do {
            printf("%d ", aux->valor);
            aux = aux->proximo;
        } while (aux != NULL);
    }
}

void imprimirListaDuplamenteEncadeadaInversa(ListaDuplamenteEncadeada *lista) {
    ListaDuplamenteEncadeada *aux = lista;
       if (aux) {
            while (aux->proximo != NULL) {
                aux = aux->proximo;
            }
            do {
                printf("%d ", aux->valor);
                aux = aux->anterior;
            } while (aux != NULL);
       }
}