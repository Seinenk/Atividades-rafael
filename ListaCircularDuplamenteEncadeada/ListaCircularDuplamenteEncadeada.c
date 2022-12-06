//
// Created by Carlos Michael on 05/12/2022.
//

#include "ListaCircularDuplamenteEncadeada.h"
#include <stdio.h>
#include <malloc.h>

ListaCircularDuplamenteEncadeada *criacaoListaCircularDuplamenteEncadeada() {
    ListaCircularDuplamenteEncadeada *lista = (ListaCircularDuplamenteEncadeada *) malloc(sizeof(ListaCircularDuplamenteEncadeada));
    lista->proximo = lista;
    lista->anterior = lista;
    return lista;
}

void inserirListaCircularDuplamenteEncadeada(ListaCircularDuplamenteEncadeada *lista, int valor) {
    ListaCircularDuplamenteEncadeada *novo = (ListaCircularDuplamenteEncadeada *) malloc(sizeof(ListaCircularDuplamenteEncadeada));
    novo->valor = valor;
    novo->proximo = lista->proximo;
    novo->anterior = lista;
    lista->proximo->anterior = novo;
    lista->proximo = novo;
}

void removerListaCircularDuplamenteEncadeada(ListaCircularDuplamenteEncadeada *lista, int valor) {
    ListaCircularDuplamenteEncadeada *aux = lista->proximo;
    while (aux != lista) {
        if (aux->valor == valor) {
            aux->anterior->proximo = aux->proximo;
            aux->proximo->anterior = aux->anterior;
            free(aux);
            return;
        }
        aux = aux->proximo;
    }
}

void imprimirListaCircularDuplamenteEncadeada(ListaCircularDuplamenteEncadeada *lista) {
    ListaCircularDuplamenteEncadeada *aux = lista->proximo;
    while (aux != lista) {
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
    printf("\n");
}
