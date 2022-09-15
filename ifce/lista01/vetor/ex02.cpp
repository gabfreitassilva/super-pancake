#include <iostream>

using std::cout;
using std::cin;

int main() {
    int userNumber, aux[10];

    cout << "Digite um numero inteiro qualquer para ver sua tabuada: ";
    cin >> userNumber;

    for (int i = 0; i < 10; i++) {
        aux[i] = i+1;
        cout << aux[i] << " x " << userNumber << " = " << (aux[i] * userNumber) << '\n';
    }

    return 0;
}