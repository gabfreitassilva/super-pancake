#include <stdio.h>
//#include <stdlib.h>

int main() {
    int soma;

    for (int i=100; i>=1; i--) {
        if (i%2==0) {
            soma += i;
        }
    }

    printf("A soma de todos os pares de 1 a 100 e: %d\n", soma);

    //system("pause");
    return 0;
}