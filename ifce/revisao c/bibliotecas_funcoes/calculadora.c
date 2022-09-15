#include "calculadora.h"

int soma (int x, int y) {
    return x + y;
}

int subtracao (int x, int y) {
    if (x > y) {
        return x - y;
    } else {
        return y - x;
    }
}

int multiplicacao (int x, int y) {
    return x * y;
}

double divisao (int x, int y) {
    return x / y;
}

int fatorial (int x) {
    int fator;
    for (int i = x; i > 1; i--) {
        fator *= i;    
    }

    return fator;
}

