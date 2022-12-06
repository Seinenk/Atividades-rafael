//
// Created by Carlos Michael on 05/12/2022.
//

#include "listaEstatica.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct listaEstatica{
    struct numero dados[MAX];
    int quantidade;
};

ListaEstatica* criacaoListaEstatica(){
    ListaEstatica* li;
    li = (ListaEstatica*) malloc(sizeof(struct listaEstatica));
    if(li != NULL){
        li->quantidade = 0;
    }
    return li;
}

void liberarListaEstatica(ListaEstatica* li){
    free(li);
}

int tamanhoListaEstatica(ListaEstatica* li){
    if(li == NULL){
        return -1;
    }else{
        return li->quantidade;
    }
}

int listaEstaticaCheia(ListaEstatica* li){
    if(li == NULL){
        return -1;
    }else{
        return (li->quantidade == MAX);
    }
}

int listaEstaticaVazia(ListaEstatica* li){
    if(li == NULL){
        return -1;
    }else{
        return (li->quantidade == 0);
    }
}

int inserirInicioListaEstaticaInicio(ListaEstatica* li, struct numero valor){
    if(li == NULL){
        return 0;
    }
    if(listaEstaticaCheia(li)){
        printf("Lista cheia!\n");
        return 0;
    }
    for(int i = li->quantidade-1; i >= 0; i--){
        li->dados[i+1] = li->dados[i];
    }
    li->dados[0] = valor;
    li->quantidade++;
    return 1;
}

int insert(ListaEstatica* li, struct numero valor, int pos) {
    if (li == NULL) {
        return 0;
    }
    if (listaEstaticaCheia(li)) {
        printf("Lista cheia!\n");
        return 0;
    }
    if (pos > MAX - 1) {
        printf("Posicao inexistente na lista!\n");
        return 0;
    }
    if (pos >= li->quantidade) {
        append(li, valor);
        return 1;
    }
    int i;
    for(i = li->quantidade; i >= pos; i--) {
        li->dados[i + 1] = li->dados[i];
    }
    li->dados[pos] = valor;
    li->quantidade++;
    return 1;
}

int append(ListaEstatica* li, struct numero valor){
    if(li == NULL)
        return 0;
    if(listaEstaticaCheia(li)){
        printf("Lista Cheia!\n");
        return 0;
    }
    li->dados[li->quantidade] = valor;
    li->quantidade++;
    return 1;
}

int inserir_ordenado_lista(ListaEstatica* li, struct numero valor){
    if(li == NULL)
        return 0;
    if(listaEstaticaCheia(li)) {
        printf("Lista Cheia!\n");
        return 0;
    }
    int i, j = 0;
    while(j < li->quantidade && li->dados[j].num < valor.num)
        j++;
    for(i = li->quantidade - 1; i >= j; i--)
        li->dados[i + 1] = li->dados[i];
    li->dados[j] = valor;
    li->quantidade++;
}

int remover_lista(ListaEstatica* li, int valor){
    if(li == NULL)
        return 0;
    if(listaEstaticaVazia(li)) {
        printf("Lista vazia!\n");
        return 0;
    }
    int i, j = 0;
    while(j < li->quantidade && li->dados[j].num != valor)
        j++;
    if(j == li->quantidade) {
        printf("Numero nao encontrado!\n");
        return 0;
    }
    for (i = j; i < li->quantidade - 1; i++) {
        li->dados[i] = li->dados[i + 1];
    }
    li->quantidade--;
    return 1;
}

int remover_inicio(ListaEstatica* li){
    if(li == NULL)
        return 0;
    if(listaEstaticaVazia(li)) {
        printf("Lista vazia!\n");
        return 0;
    }
    int i = 0;
    for (i = 0; i < li->quantidade - 1; i++)
        li->dados[i] = li->dados[i + 1];
    li->quantidade--;
    return 1;
}

int remover_fim(ListaEstatica* li){
    if(li == NULL)
        return 0;
    if(listaEstaticaVazia(li)) {
        printf("Lista vazia!\n");
        return 0;
    }
    li->quantidade--;
    return 1;
}

int clear(ListaEstatica* li) {
    li->quantidade = 0;
}

int imprime(ListaEstatica* li) {
    if(listaEstaticaVazia(li)) {
        printf("Lista vazia!\n");
        return 0;
    }
    int i;
    for(i = 0; i < li->quantidade; i ++){
        printf("%d ", li->dados[i].num);
    }
    printf("\n");
    return 1;
}