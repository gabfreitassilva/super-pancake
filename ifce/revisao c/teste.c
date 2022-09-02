// menor, maior e media entre inteiros

#include <stdio.h>
#include <stdlib.h>

int main() {
	int numero1, numero2, numero3, maior, menor, media;

	printf("Digite tres numeros inteiros: ");
	scanf("%d%d%d", &numero1, &numero2, &numero3);

	if (numero1>numero2 && numero1>numero3) {
		maior = numero1;
	} else if (numero2>numero3) {
		maior = numero2;
	} else {
		maior = numero3;
	}
	printf("O maior numero e: %d\n", maior);

	if (numero1<numero2 && numero1<numero3) {
		menor = numero1;
	} else if (numero2<numero1) {
		menor = numero2;
	} else {
		menor = numero3;
	}
	printf("O menor numero e: %d\n", menor);

	media = (numero1+numero2+numero3)/3;
	printf("A media entre os numeros e de: %d\n", media);

	system("pause");
	return 0;
}