#include <stdio.h>
//#include <stdlib.h>

int main() {
    int numero, fatorial=1;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    for (int i=numero; i>=1; i--) {
        fatorial *= i;
    }

    printf("Fatorial de %d e igual a %d\n",numero, fatorial);

    //system("pause");
    return 0;
}