#include <stdio.h>
//#include <stdlib.h>

int main() {
    int numero[10], maior;

    for (int i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);

        if (i==0) {
            maior = numero[i];
        } else if (numero[i]>maior) {
            maior = numero[i];
        }
    }

    printf("O maior numero e: %d\n", maior);

    //system("pause");
    return 0;
}