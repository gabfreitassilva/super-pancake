#include <stdio.h>

int main() {
    int numero[10];

    for (int i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
    }

    printf("Os numeros impares digitados foram: ");
    for (int i=0; i<10; i++) {
        if (numero[i]%2!=0) {
            printf("%d ", numero[i]);
        }
    }

    printf("\n");
    return 0;
}