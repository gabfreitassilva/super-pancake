#include <stdio.h>
//#include <stdlib.h>

int main() {
    int numero, maior, menor, diferenca, contador=0;

    while (contador<10) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (contador==0) {
            maior = numero;
            menor = numero;
        } else if (numero>maior) {
            maior = numero;
        }

        if (numero<menor) {
            menor = numero;
        }
        contador++;
    }
    
    diferenca = maior - menor;
    printf("Menor numero: %d \nMaior numero: %d \nDiferenca entre os dois: %d\n", menor, maior, diferenca);

    //system("pause");
    return 0;
}