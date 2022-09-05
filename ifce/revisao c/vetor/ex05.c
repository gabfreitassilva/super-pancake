#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor[8], userInput;

    for (int i=0; i<8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &valor[i]);
    }

    system("cls");

    printf("Digite um numero: ");
    scanf("%d", &userInput);

    for (int i=0; i<8; i++) {
        if (userInput == valor[i]) {
            printf("O numero digitado existe no vetor!\n");
            printf("O numero esta na posicao %d do vetor.\n", i);
        } else if (i==7) {
            printf("O numero digitado nao existe no vetor!\n");
        }
    }

    // system("pause");
    return 0;
}