#include <stdio.h>
//#include <stdlib.h>

int main() {
    int numero, contador=2;

    printf("Digite um numero qualquer: ");
    scanf("%d", &numero);

    while (contador<=numero) {
        if (numero%contador==0) {
            printf("nao e primo.\n");
            break;
        } else if (numero%contador!=0) {
            printf("e primo\n");
            break;
        }
        contador++;
    }

    //system("pause");
    return 0;
}