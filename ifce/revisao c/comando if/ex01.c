#include <stdio.h>
//#include <stdlib.h>

int main() {
    float nota;

    printf("Informe a nota: ");
    scanf("%f", &nota);

    if (nota>=6) {
        printf("Voce esta aprovado!\n");
    } 
    else {
        printf("Voce esta reprovado!\n");
    }

    printf("Nota de aprovacao 6.0\n");

    //system("pause");
    return 0;
}