#include <stdio.h>
//#include <stdlib.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

    if (media>=6) {
        printf("Sua media e %.2f\n", media);
        printf("Voce esta aprovao!\n");
    } 
    else {
        printf("Sua media e %.2f\n", media);
        printf("Voce esta reprovado!\n");
    }

    printf("Media para aprovacao 6.0\n");

    //system("pause");
    return 0;
}