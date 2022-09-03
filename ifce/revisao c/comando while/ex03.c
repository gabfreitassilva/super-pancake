#include <stdio.h>
//#include <stdlib.h>

int main() {
    int numero, tabuada=1;

    printf("Digite um numero qualquer: ");
    scanf("%d", &numero);

    while (tabuada<=10) {
        printf("%d x %d = %d\n", tabuada, numero, (tabuada*numero));
        tabuada++;
    }

    //system("pause");
    return 0;
}