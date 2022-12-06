//
// Created by Carlos Michael on 05/12/2022.
//

#include "ListaCircularDuplamenteEncadeada.h"
#include <stdio.h>

int main() {
    ListaCircularDuplamenteEncadeada *lista = criacaoListaCircularDuplamenteEncadeada();

    int acao = 0;

    printf("Inserindo 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 automaticamente na lista\n");

    inserirListaCircularDuplamenteEncadeada(lista, 1);
    inserirListaCircularDuplamenteEncadeada(lista, 2);
    inserirListaCircularDuplamenteEncadeada(lista, 3);
    inserirListaCircularDuplamenteEncadeada(lista, 4);
    inserirListaCircularDuplamenteEncadeada(lista, 5);
    inserirListaCircularDuplamenteEncadeada(lista, 6);
    inserirListaCircularDuplamenteEncadeada(lista, 7);
    inserirListaCircularDuplamenteEncadeada(lista, 8);
    inserirListaCircularDuplamenteEncadeada(lista, 9);
    inserirListaCircularDuplamenteEncadeada(lista, 10);

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
            inserirListaCircularDuplamenteEncadeada(lista, valor);
        } else if (acao == 2) {
            int valor;
            printf("Digite o valor a ser removido: \n");
            scanf("%d", &valor);
            removerListaCircularDuplamenteEncadeada(lista, valor);
        } else if (acao == 3) {
            imprimirListaCircularDuplamenteEncadeada(lista);
        } else {
            printf("Acao invalida\n");
        }
        printf("\nDigite a acao desejada: \n");
        scanf("%d", &acao);
    }

    printf("Saindo do programa\n");

    return 0;
}