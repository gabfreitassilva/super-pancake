// // menor, maior e media entre inteiros

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	int numero1, numero2, numero3, maior, menor, media;

// 	printf("Digite tres numeros inteiros: ");
// 	scanf("%d%d%d", &numero1, &numero2, &numero3);

// 	if (numero1>numero2 && numero1>numero3) {
// 		maior = numero1;
// 	} else if (numero2>numero3) {
// 		maior = numero2;
// 	} else {
// 		maior = numero3;
// 	}
// 	printf("O maior numero e: %d\n", maior);

// 	if (numero1<numero2 && numero1<numero3) {
// 		menor = numero1;
// 	} else if (numero2<numero1) {
// 		menor = numero2;
// 	} else {
// 		menor = numero3;
// 	}
// 	printf("O menor numero e: %d\n", menor);

// 	media = (numero1+numero2+numero3)/3;
// 	printf("A media entre os numeros e de: %d\n", media);

// 	system("pause");
// 	return 0;
// }

#include <stdio.h>
#include <math.h>

int fatorial (int x) {
    int fator = 1;
    for (int i = x; i > 1; i--) {
        fator *= i;    
    }

    return fator;
}

int main() {
	int x, y;
	float soma = 0.0;

	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de y: ");
	scanf("%d", &y);

	for (int i = 0; i < y; i++) {
		soma += (pow(-1, i) * pow(x, (2*i))) / (fatorial(2*i));
	}

	printf("A aproximacao do cosseno e: %f", soma);

	return 0;
}