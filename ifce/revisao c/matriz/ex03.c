#include <stdio.h>

int main () {
    int matriz[2][3], soma = 0;

    printf("Preenchendo uma matriz 2x3\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nA soma de todos os elementos da matriz e igual a: ");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    printf("%d", soma);

    return 0;
}