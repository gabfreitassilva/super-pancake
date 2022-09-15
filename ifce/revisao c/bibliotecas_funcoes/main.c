#include <stdio.h>
#include "calculadora.h"

int main() {
    int x, y, res;
    char operacao;

    printf("Qual operacao deseja realizar\n");
    printf("Tecle o caractere desejado (+ - / *) > ");
    operacao = getchar();

    switch (operacao) {
        case '+':
            printf("Digite os dois numeros a serem somados: ");
            scanf("%d%d", &x, &y);
            res = soma(x, y);
            printf("A soma e igual a: %d", res);
    }


    return 0;
}