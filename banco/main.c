#include <stdio.h> // printf
#include "conta.h" // Conta, criacao, depositar, sacar, imprimir

int main() {

    Conta *cconta = criacao();
    long numero;
    float saldo;
    int acao;

    printf("Bem vindo ao banco inferno!\n");
    printf("Ações possíveis:\n\n");
    printf("1 - Depostitar\n");
    printf("2 - Sacar\n");
    printf("3 - ver saldo\n");
    printf("4 - Sair\n\n");
    printf("Qual desejada: ");
    scanf("%d", &acao);
    while (acao != 4){
        if (acao == 1) {
            float valor;
            printf("Digite o valor a ser depositado: ");
            scanf("%f", &valor);
            depositar(cconta, valor);
            printf("Deposito realizado com sucesso!\n");
        } else if (acao == 2) {
            float valor;
            printf("Digite o valor a ser sacado: ");
            scanf("%f", &valor);
            sacar(cconta, valor);
            printf("Saque realizado com sucesso!\n");
        } else if (acao == 3) {
            imprimir(cconta, &numero, &saldo);
            printf("Seu saldo é: %.2f\n", saldo);
        } else if (acao > 4 & acao < 1) {
            printf("Ação inválida!\n");
        }

        printf("Ações possíveis:\n\n");
        printf("1 - Depostitar\n");
        printf("2 - Sacar\n");
        printf("3 - ver saldo\n");
        printf("4 - Sair\n\n");
        printf("Qual desejada: ");
        scanf("%d", &acao);

    }
    printf("Obrigado por utilizar o banco inferno!\n");

    return 0;
}
