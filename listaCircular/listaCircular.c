//
// Created by Carlos Michael on 05/12/2022.
//

#include "listaCircular.h"
#include <malloc.h>
#include <stdio.h>

ListaCircular *criacaoListaCircular() {
    ListaCircular *lista = (ListaCircular *) malloc(sizeof(ListaCircular));
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tamanho = 0;
    return lista;
}
void inserirListaCircular(ListaCircular *lista, int valor) {
    No *novoNo = (No *) malloc(sizeof(No));
    novoNo->valor = valor;
    if (lista->inicio == NULL) {
        lista->inicio = novoNo;
        lista->fim = novoNo;
        novoNo->proximo = novoNo;
    } else {
        novoNo->proximo = lista->inicio;
        lista->inicio = novoNo;
        lista->fim->proximo = novoNo;
    }
    lista->tamanho++;
}
void removerListaCircular(ListaCircular *lista, int valor) {
    No *noAtual = lista->inicio;
    No *noAnterior = NULL;
    while (noAtual != NULL && noAtual->valor != valor) {
        noAnterior = noAtual;
        noAtual = noAtual->proximo;
    }
    if (noAtual == NULL) {
        printf("Valor não encontrado na lista");
    } else {
        if (noAnterior == NULL) {
            lista->inicio = noAtual->proximo;
            lista->fim->proximo = noAtual->proximo;
        } else {
            noAnterior->proximo = noAtual->proximo;
        }
        free(noAtual);
        lista->tamanho--;
    }
}

void imprimirListaCircular(ListaCircular *lista) {
    No *noAtual = lista->inicio;
    while (noAtual != NULL) {
        printf("%d ", noAtual->valor);
        noAtual = noAtual->proximo;
    }
}
