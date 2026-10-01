// Leia uma matriz 3x3 e calcule a soma dos elementos da diagonal principal
#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_diagonal = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        soma_diagonal += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal e: %d\n", soma_diagonal);
    return 0;
}