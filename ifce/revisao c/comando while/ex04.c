#include <stdio.h>
//#include <stdlib.h>

int main() {
    int numero, contador=0, maior;

    while (contador<10) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (contador==0) {
            maior = numero;
        } else if (numero>maior) {
            maior = numero;
        }

        contador++;
    }
    
    printf("%d\n", maior);

    //system("pause");
    return 0;
}