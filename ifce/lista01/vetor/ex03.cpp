#include <iostream>

using std::cout;
using std::cin;

int main() {
    int userNumero[5], aux;

    cout << "Informe a seguir 5 numeros inteiros.\n";
    for (int i = 0; i < 5; i++) {
        cout << "Informe um numero inteiro: ";
        cin >> userNumero[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (userNumero[i] > userNumero[j]) {
                aux = userNumero[i];
                userNumero[i] = userNumero[j];
                userNumero[j] = aux;
            } 
        }
    }

    cout << "O numeros em ordem crescente fica: ";
    for (int i = 0; i < 5; i++) {
        cout << userNumero[i] << " ";
    }
    return 0;
}