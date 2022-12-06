//
// Created by Carlos Michael on 05/12/2022.
//

#ifndef ATIVIDADE_BANCO__LISTAESTATICA_H
#define ATIVIDADE_BANCO__LISTAESTATICA_H

struct numero{
    int num;
};

typedef struct listaEstatica ListaEstatica;

ListaEstatica* criacaoListaEstatica();
void liberarListaEstatica(ListaEstatica* li);

int tamanhoListaEstatica(ListaEstatica* li);
int listaEstaticaCheia(ListaEstatica* li);
int listaEstaticaVazia(ListaEstatica* li);

int inserirInicioListaEstaticaInicio(ListaEstatica* li, struct numero valor);
int insert(ListaEstatica* li, struct numero valor, int pos);
int append(ListaEstatica* li, struct numero valor);
int inserirOrdenadoListaEstatica(ListaEstatica* li, struct numero valor);

int removerListaEstatica(ListaEstatica*, int valor);
int removerInicioListaEstatica(ListaEstatica* li);
int removerFimListaEstatica(ListaEstatica* li);
int clear(ListaEstatica* li);

int imprimirListaEstatica(ListaEstatica* li);

#endif //ATIVIDADE_BANCO__LISTAESTATICA_H
