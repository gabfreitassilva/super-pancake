#include <stdio.h>
//#include <stdlib.h>

int main() {
    int numero[10], maior, menor, diferenca;

    for (int i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);

        if (i==0) {
            maior = numero[i];
            menor = numero[i];
        } else if (numero[i]>maior) {
            maior = numero[i];
        }

        if (numero[i]<menor) {
            menor = numero[i];
        }
    }

    diferenca = maior - menor;
    printf("O maior numero e: %d \nO menor numero e: %d\n", maior, menor);
    printf("A diferenca entre os dois e de %d\n", diferenca);

    //system("pause");
    return 0;
}