//
// Created by Carlos Michael on 05/12/2022.
//

#include "listaDuplamenteEncadeada.h"
#include <malloc.h>
#include <stdio.h>

int main() {
    ListaDuplamenteEncadeada *lista = NULL;

    int acao = 0;

    printf("inserindo 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 elementos automaticamente na lista!\n\n");
    lista = inserirListaDuplamenteEncadeada(lista, 1);
    lista = inserirListaDuplamenteEncadeada(lista, 2);
    lista = inserirListaDuplamenteEncadeada(lista, 3);
    lista = inserirListaDuplamenteEncadeada(lista, 4);
    lista = inserirListaDuplamenteEncadeada(lista, 5);
    lista = inserirListaDuplamenteEncadeada(lista, 6);
    lista = inserirListaDuplamenteEncadeada(lista, 7);
    lista = inserirListaDuplamenteEncadeada(lista, 8);
    lista = inserirListaDuplamenteEncadeada(lista, 9);
    lista = inserirListaDuplamenteEncadeada(lista, 10);

    printf("Acoes disponiveis:\n\n");
    printf("1 - Inserir valor na lista circular\n");
    printf("2 - Remover valor da lista circular\n");
    printf("3 - Imprimir lista circular\n");
    printf("4 - Sair\n\n");
    printf("Digite a acao desejada: \n");
    scanf("%d", &acao);
    while (acao != 4) {
        if (acao == 1) {
            int valor;
            printf("Digite o valor a ser inserido: \n");
            scanf("%d", &valor);
            lista = inserirListaDuplamenteEncadeada(lista, valor);
        } else if (acao == 2) {
            int valor;
            printf("Digite o valor a ser removido: \n");
            scanf("%d", &valor);
            lista = removerListaDuplamenteEncadeada(lista, valor);
        } else if (acao == 3) {
            printf("Lista: ");
            imprimirListaDuplamenteEncadeada(lista);
            printf("Lista Inversa: ");
            imprimirListaDuplamenteEncadeadaInversa(lista);
        } else {
            printf("Acao invalida\n");
        }
        printf("\nDigite a acao desejada: \n");
        scanf("%d", &acao);
    }

    printf("Saindo do programa\n");



    return 0;
}
