#include <iostream>

using std::cout;
using std::cin;

int main() {
    int entradaNumero[5];

    for (int i = 0; i < 5; i++) {
        cout << "Informe um numero inteiro: ";
        cin >> entradaNumero[i];
    }

    cout << "Os numeros na ordem inversa sao: ";
    for (int j = 4; j >= 0; j--) {
        cout << entradaNumero[j] << " ";
    }

    return 0;
}