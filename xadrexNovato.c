#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças
// Objetivo: Simular movimentos da Torre, Bispo e Rainha utilizando estruturas de repetição (for, while, do-while).

int main() {

    // A Torre se move 5 casas para a direita
    const int movimentoTorre = 5;
    printf("=== Movimento da Torre (5 casas para a Direita) ===\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    // O Bispo se move 5 casas na diagonal superior direita
    const int movimentoBispo = 5;
    int contadorBispo = 1;

    printf("\n=== Movimento do Bispo (5 casas na Diagonal Cima Direita) ===\n");
    while (contadorBispo <= movimentoBispo) {
        printf("Cima Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    // A Rainha se move 8 casas para a esquerda
    const int movimentoRainha = 8;
    int contadorRainha = 1;

    printf("\n=== Movimento da Rainha (8 casas para a Esquerda) ===\n");
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    return 0;
}