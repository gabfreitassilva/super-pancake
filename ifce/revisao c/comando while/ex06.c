#include <stdio.h>
// #include <stdlib.h>

int main() {
    int numero, contador=1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("O numero %d e divisvel por:\n", numero);
    while (contador<numero) {
        if (numero%contador==0) {
            printf("%d\t", contador);
        }
        contador++;
    }

    // system("pause");
    return 0;
}