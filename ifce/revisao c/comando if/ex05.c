#include <stdio.h>
//#include <stdlib.h>

int main() {
    float valor1, valor2, valor3, media, maior, menor;

    printf("Digite o tres valores decimais: ");
    scanf("%f%f%f", &valor1, &valor2, &valor3);

    // definindo o maior numero
    if (valor1>valor2 && valor1>valor3) {
        maior = valor1;
    } else if (valor2>valor3) {
        maior = valor2;
    } else {
        maior = valor3;
    }
    
    // definindo o menor numero
    if (valor1<valor2 && valor1<valor3) {
        menor = valor1;
    } else if (valor2<valor3) {
        menor = valor2;
    } else {
        menor = valor3;
    }

    printf("\nO maior numero digitado foi: %.2f\n", maior);
    printf("O menor numero digitado foi: %.2f\n", menor);

    media = (valor1+valor2+valor3)/3;
    printf("A media entre os numeros e de: %.2f\n\n", media);

    //system("pause");
    return 0;
}