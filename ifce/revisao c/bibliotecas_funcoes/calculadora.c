#include "calculadora.h"

int soma (int x, int y) {
    return x + y;
}

int subtracao (int x, int y) {
    return x - y;
}

int multiplicacao (int x, int y) {
    return x * y;
}

float divisao (float x, float y) {
    return x / y;
}

int fatorial (int x) {
    int fator = 1;
    for (int i = x; i > 1; i--) {
        fator *= i;    
    }

    return fator;
}

int primo(int x) {
    int contador = 0;

    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            contador++;
        }

        if (contador > 2) {
            break;
        }
    }

    if (contador > 2) {
        return 1;
    } else {
        return 0;
    }

    

}