#include <stdio.h>

int main() {
    int numero=0;
    
    while (numero<=100) {
        if (numero%2==1) {
            printf("%d\n", numero);
        }
        numero++;
    }

    return 0;
}