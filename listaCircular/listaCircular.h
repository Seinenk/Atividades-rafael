//
// Created by Carlos Michael on 05/12/2022.
//

#ifndef ATIVIDADE_BANCO__LISTACIRCULAR_H
#define ATIVIDADE_BANCO__LISTACIRCULAR_H

struct No {
    int valor;
    struct No *proximo;
};

typedef struct No No;

struct LISTACIRCULAR {
    No *inicio;
    No *fim;
    int tamanho;
};

typedef struct LISTACIRCULAR ListaCircular;

ListaCircular *criacaoListaCircular();

void inserirListaCircular(ListaCircular *lista, int valor);
void removerListaCircular(ListaCircular *lista, int valor);
void imprimirListaCircular(ListaCircular *lista);

#endif //ATIVIDADE_BANCO__LISTACIRCULAR_H
