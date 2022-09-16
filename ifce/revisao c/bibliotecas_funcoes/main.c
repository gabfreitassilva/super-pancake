#include <stdio.h>
#include <ctype.h>
#include "calculadora.h"

int main() {
    int x, y, res;
    char operacao, continuar;

opcao: // repetição do goto caso o usuario digite uma opção invalida
    printf("\nQual operacao deseja realizar (Digite o caractere que esta nos parenteses)\n");
    printf("Soma (+), Subtracao (-), Multiplicacao (*), Divisao (/), Fatorial (!), Primo (p): ");
    scanf(" %c", &operacao); // espaço antes de %c para limpar o buffer e não haver erro quando ocorrer a repetição do goto

    switch (operacao) {
        case '+':
            printf("\nDigite os dois numeros a serem somados: ");
            scanf("%d%d", &x, &y);
            res = soma(x, y);
            printf("A soma e igual a: %d\n", res);
            break;
        
        case '-':
            printf("\nDigite os dois numeros a serem subtraidos (o segundo subtrai do primeiro): ");
            scanf("%d%d", &x, &y);
            res = subtracao(x, y);
            printf("O resultado da subtracao e igual a: %d\n", res);
            break;

        case '*':
            printf("\nDigite os dois numeros a serem multiplciados: ");
            scanf("%d%d", &x, &y);
            res = multiplicacao(x, y);
            printf("O resultado da multiplicacao e igual a: %d\n", res);
            break;
        
        case '!':
            printf("\nDigite um numero para descobrir seu fatorial: ");
            scanf("%d", &x);
            res = fatorial(x);
            printf("O fatorial de %d e: %d\n", x, res);
            break;

        case 'p':
            printf("\nDigite um numero inteiro para saber se e primo: ");
            scanf("%d", &x);
            res = primo(x);
            if (res == 1) {
                printf("O numero nao e primo.\n");
            } else {
                printf("O numero e primo.\n");
            }
            break;

        case '/': // opcao por ultimo para que não haja conflito com a alteração do tipo da variavel res
            printf("\nDigite os dois numeros a serem dividos (o primeiro numero sera o DIVIDENDO): ");
            scanf("%d%d", &x, &y);
            float(res) = divisao(x, y); // mudando o res de int para float para que o resultado seja exibido corretamente
            printf("O resultado da divisao e igual a: %.4f\n", res);
            break;

        default:
            printf("\nOpcao invalida, por favor digite apenas o que esta entre parenteses.\n");
            goto opcao;
            break;
    }

    printf("\nPara realizar outra operacao digite S e para sair digite N: ");
    scanf(" %c", &continuar);
    if (toupper(continuar) == 'S') {
        goto opcao;
    } else {
        printf("\n");
    }

    return 0;
}