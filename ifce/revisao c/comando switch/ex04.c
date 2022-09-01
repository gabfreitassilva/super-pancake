#include <stdio.h>
//#include <stdlib.h>

int main() {
    int numero;

    printf("Digite um numero entre 0 e 10: ");
    scanf("%d", &numero);

    switch (numero) {
        case 0:
            printf("O numero digitado foi ZERO\n");
            break;
        case 1:
            printf("O numero digitado foi UM\n");
            break;
        case 2:
            printf("O numero digitado foi DOIS\n");
            break;
        case 3:
            printf("O numero digitado foi TRES\n");
            break;
        case 4:
            printf("O numero digitado foi QUATRO\n");
            break;
        case 5:
            printf("O numero digitado foi CINCO\n");
            break;
        case 6:
            printf("O numero digitado foi SEIS\n");
            break;
        case 7:
            printf("O numero digitado foi SETE\n");
            break;
        case 8:
            printf("O numero digitado foi OITO\n");
            break;
        case 9:
            printf("O numero digitado foi NOVE\n");
            break;
        case 10:
            printf("O numero digitado foi DEZ\n");
            break;
        default:
            printf("Numero invalido, digite apenas um numero entre 0 e 10.\n");
            break;
    }

    //system("pause");
    return 0;
}