#include <stdio.h>

// Constantes para quantidade de casas de movimentação
const int BISPO_MOV = 5;
const int TORRE_MOV = 5;
const int RAINHA_MOV = 8;

int main() {
    // Movimentação do Bispo: 5 casas na diagonal superior direita
    // Utiliza combinação de "Cima" e "Direita"
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= BISPO_MOV; i++) { // Estrutura: for
        printf("Passo %d: ", i);
        printf("Cima + Direita\n");
    }
    printf("\n");

    // Movimentação da Torre: 5 casas para a direita
    // Utiliza apenas "Direita"
    printf("Movimentação da Torre:\n");
    int j = 1;
    while (j <= TORRE_MOV) { // Estrutura: while
        printf("Passo %d: ", j);
        printf("Direita\n");
        j++;
    }
    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    // Utiliza apenas "Esquerda"
    printf("Movimentação da Rainha:\n");
    int k = 1;
    do { // Estrutura: do-while
        printf("Passo %d: ", k);
        printf("Esquerda\n");
        k++;
    } while (k <= RAINHA_MOV);

    return 0;
}