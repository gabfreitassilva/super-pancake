#include <stdio.h>
//#include <stdlib.h>

int main () {
    float nota1, nota2, mediaPonderada;
    // nota1 = peso 2 e nota2 = peso 3

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota2);

    mediaPonderada = ((nota1*2)+(nota2*3))/(2+3);
    printf("Sua media foi de %.2f\n", mediaPonderada);
    
    if (mediaPonderada >= 6) {
        printf("Voce esta aprovado!\n");
    }
    else {
        printf("Voce esta reprovado!\n");
    }


    //system("pause");
    return 0;
}