#include <stdio.h>

int main() {
    int numero[10];

    for (int i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
    }

    printf("Os numeors primos sao: ");
    
    
    return 0;
}