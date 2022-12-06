//
// Created by Carlos Michael on 05/12/2022.
//

#include "listaCircular.h"
#include <stdio.h>

int main() {
    ListaCircular *lista = criacaoListaCircular();

    int acao = 0;

    printf("Inserindo 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 automaticamente na lista circular\n\n");
    inserirListaCircular(lista, 1);
    inserirListaCircular(lista, 2);
    inserirListaCircular(lista, 3);
    inserirListaCircular(lista, 4);
    inserirListaCircular(lista, 5);
    inserirListaCircular(lista, 6);
    inserirListaCircular(lista, 7);
    inserirListaCircular(lista, 8);
    inserirListaCircular(lista, 9);
    inserirListaCircular(lista, 10);

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
            inserirListaCircular(lista, valor);
        } else if (acao == 2) {
            int valor;
            printf("Digite o valor a ser removido: \n");
            scanf("%d", &valor);
            removerListaCircular(lista, valor);
        } else if (acao == 3) {
            imprimirListaCircular(lista);
        } else {
            printf("Acao invalida\n");
        }
        printf("\nDigite a acao desejada: \n");
        scanf("%d", &acao);
    }

    printf("Saindo do programa\n");
    return 0;
}
