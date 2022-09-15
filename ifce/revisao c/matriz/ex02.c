#include <stdio.h>

int main () {
    int matriz[3][3];

    printf("Preenchendo uma matriz 3x3\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nA matriz a seguir e a multiplicacao de cada elemento da matriz digitado por 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", (matriz[i][j] * 2));
            if (j == 2) {
                printf("\n");
            }
        }
    }

    return 0;
}