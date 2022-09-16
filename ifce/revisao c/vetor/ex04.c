#include <stdio.h>

int main() {
    int valorInput[10], qtdDivsor[10] = {0};

    printf("Entre com 10 numeros inteiros e descubra qual deles e primo.\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o numero da posicao %d: ", (i + 1));
        scanf("%d", &valorInput[i]);

        for (int j = 1; j < valorInput[i]; j++) {
            if (valorInput[i] % j == 0) {
                qtdDivsor[i]++; // adciona 1 a quantidade de divisores do numero em questão
            }
        }
    }

    printf("Os numeros primos digitados foram: ");
    for (int i = 0; i < 10; i++) {
        if (qtdDivsor[i] < 2) {
            printf("%d ", valorInput[i]);
        }
    }
    printf("\n");

    return 0;
}