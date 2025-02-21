#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0}; // Criando o tabuleiro e preenchendo com 0 (água)

    // Posicionando navio horizontalmente (usando 3 para representar o navio)
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Posicionando navio verticalmente (usando 3 para representar o navio)
    tabuleiro[3][3] = 3;
    tabuleiro[4][3] = 3;

    // Exibindo o tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < 5; i++) { // Loop para as linhas
        for (int j = 0; j < 5; j++) { // Loop para as colunas
            printf("%d ", tabuleiro[i][j]); // Imprime cada posição do tabuleiro
        }
        printf("\n"); // Quebra de linha para formatar o tabuleiro
    }

    return 0;
}
