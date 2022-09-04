#include <stdio.h>
// #include <stdlib.h>

int main() {
    int pessoa, idade, qtdDeMaior=0;

    for (pessoa=10; pessoa>0; pessoa--) {
        printf("Digite uma idade: ");
        scanf("%d", &idade);
        if (idade>18) {
            qtdDeMaior++;
        }
    }
    
    printf("%d pessoas sao maiores de idade\n", qtdDeMaior);

    // system("pause");
    return 0;
}