#include <stdio.h>
#include <math.h>

int main() {
    int numero, aux = 0, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (i <= numero) {
        if (numero % i == 0) {
            aux++;
        }

        if (aux > 2) {
            break;
        }

        i++;
    }

    if (aux > 2) {
        printf("nao e primo\n");
    } else {
        printf("e primo\n");
    }

    return 0;
}