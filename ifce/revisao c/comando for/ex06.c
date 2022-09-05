#include <stdio.h>
//#include <stdlib.h>

int main() {
    int numero, divisor;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Seus divisores sao: ");
    for (int i=(numero-1); i>=1; i--) {
        if (numero%i==0) {
            printf("%d ", i);
        }
    }

    //system("pause");
    return 0;
}