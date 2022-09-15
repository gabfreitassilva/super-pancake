#include <stdio.h>

int main () {
    int matriz[4][4];

    printf("Preenchendo uma matriz 4x4\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nA diagonal principal e:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                printf("%d", matriz[i][j]);
            } else {
                printf(" ");
            }

            if (j == 3) {
                printf("\n");
            }
        }
    }

    return 0;
}