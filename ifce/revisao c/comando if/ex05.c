#include <stdio.h>
#include <math.h>
//#include <stdlib.h>

int main() {
    float valor1, valor2, valor3, media, maior, menor;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    // definindo o maior e menor entre os dois primeiros numeros
    maior = fmax(valor1, valor2);
    menor = fmin(valor1, valor2);

    // definindo o maior e menor entre os tres numeros
    maior = maior>valor3 ? maior : valor3;
    menor = menor<valor3 ? menor : valor3;

    printf("\nO maior numero digitado foi: %.2f\n", maior);
    printf("O menor numero digitado foi: %.2f\n", menor);

    media = (valor1+valor2+valor3)/3;

    printf("A media entre os numeros e de: %.2f\n", media);

    //system("pause");
    return 0;
}